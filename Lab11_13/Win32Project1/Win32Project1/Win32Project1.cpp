#include <Windows.h>
#include <xstring>
#define _tcslen wcslen
typedef std::basic_string < TCHAR, std::char_traits<TCHAR>, std::allocator < TCHAR >> String;

HINSTANCE HINST;
HWND CreateChildWindow();

/*----------*/
HWND childArr[7];
HWND hMain;
wchar_t my_str[30];
/*----------*/

//LRESULT zWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

int COL_WINDOW = 0;

BOOL MWindow(HWND hWnd, int x, int y, int w, int h)
{
	return MoveWindow(hWnd, x, y, w, h, NULL);
}

LRESULT CALLBACK WndProcChild(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT PS;
	switch (message)
	{
	case WM_CREATE:
		break;
	case WM_DESTROY:
		COL_WINDOW--;
		break;
	case WM_PAINT:
		BeginPaint(hWnd, &PS);
		EndPaint(hWnd, &PS);
		break;
	case WM_CHAR:
		DestroyWindow(hWnd); 
		break;
	case WM_LBUTTONDOWN:
		CreateChildWindow();
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

HWND CreateChildWindow()
{
	if (COL_WINDOW == 7) return NULL;
	//Создаем класс окна
	WNDCLASS WindowClass;

	//Заполняем структуру 
	WindowClass.style = CS_DBLCLKS;
	WindowClass.lpfnWndProc = (WNDPROC)WndProcChild;
	WindowClass.cbClsExtra = 0;
	WindowClass.cbWndExtra = 0;
	WindowClass.hInstance = HINST;
	WindowClass.hIcon = LoadIcon(HINST, (LPCTSTR)IDI_APPLICATION);
	WindowClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	WindowClass.hbrBackground = (HBRUSH)RGB(200, 200, 200);
	WindowClass.lpszMenuName = 0;
	WindowClass.lpszClassName = TEXT("ChildWClass");

	//Зарегистируем класс окна
	RegisterClass(&WindowClass);

	//Создаем переменную, в которой поместим идентификатор окна
	HWND hWndC;

	wsprintfW(my_str, L"Дочернее окно %d", COL_WINDOW + 1);
	hWndC = CreateWindow(TEXT("ChildWClass"), my_str, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 300, 50, NULL, nullptr, HINST, nullptr);

	//показать окно
	ShowWindow(hWndC, SW_NORMAL);

	//обновить содержимое окна
	UpdateWindow(hWndC);
	COL_WINDOW++;
	return hWndC;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{

	PAINTSTRUCT ps; // тоже
	HBRUSH hBrush; // кисточка

	LPCTSTR myHome = L"You pressed the Home button";
	LPCTSTR myEnd = L"You pressed the End button";
	LPCTSTR myDef = L"You pressed a button";
	static String str;
	HDC hdc = (HDC)GetDC(hWnd);
	switch (message)
	{
	case WM_CREATE:
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		RECT r; // квадрат
		r.top = 100;
		r.left = 250;
		r.right = 300;
		r.bottom = 150;
		FillRect(hdc, &r, HBRUSH(CreateSolidBrush(RGB(100, 0, 55))));
		//круг
		hBrush = CreateSolidBrush(RGB(255, 60, 0));
		SelectObject(hdc, hBrush);
		Ellipse(hdc, 50, 50, 100, 100);
		ValidateRect(hWnd, NULL);
		EndPaint(hWnd, &ps);

		PAINTSTRUCT PS;
		hdc = BeginPaint(hWnd, &PS);
		SetTextColor(hdc, RGB(255, 255, 255));
		SetBkMode(hdc, TRANSPARENT);
		TextOut(hdc, 0, 0, str.data(), str.size());
		EndPaint(hWnd, &PS);
		break;
	case WM_CHAR:
		str += (TCHAR)wParam;
		InvalidateRect(hWnd, NULL, TRUE);
		//MWindow(hWnd, 300, 500, 500, 300); 
		break;
	case WM_CLOSE:
		MessageBox(NULL, L"Выйти из приложения?", L"Выход", MB_OKCANCEL | MB_DEFBUTTON1 | MB_ICONASTERISK);
		return DefWindowProc(hWnd, message, wParam, lParam);
		break;
	case WM_LBUTTONDOWN: 
		CreateChildWindow(); 
		break;
	case WM_KEYDOWN:
		InvalidateRect(hWnd, NULL, TRUE);
		UpdateWindow(hWnd);
		switch (wParam)
		{
		case VK_BACK:
			DestroyWindow(hWnd);
			/*SendMessage(childArr[--COL_WINDOW], WM_DESTROY, 0, 0);*/
			break;
		case VK_HOME:
			SetWindowPos(hWnd, HWND_TOP, rand() % 100, rand() % 100, 0, 0, SWP_NOSIZE);
			TextOut(hdc, 100, 100, myHome, _tcslen(myHome));
			break;
		case VK_END:
			SetWindowPos(hWnd, HWND_TOP, rand() % 100, rand() % 100, 0, 0, SWP_NOSIZE);
			TextOut(hdc, 90, 90, myEnd, _tcslen(myEnd));
			break;
		default:
			SetWindowPos(hWnd, HWND_TOP, rand() % 100, rand() % 100, 0, 0, SWP_NOSIZE);
			TextOut(hdc, 70, 70, myDef, _tcslen(myDef));
			break;
		}
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance,	HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	HINST = hInstance;
	//Создаем класс окна
	WNDCLASS WindowClass;

	//Заполняем структуру 
	WindowClass.style = CS_DBLCLKS;
	WindowClass.lpfnWndProc = (WNDPROC)WndProc;
	WindowClass.cbClsExtra = 0;
	WindowClass.cbWndExtra = 0;
	WindowClass.hInstance = hInstance;
	WindowClass.hIcon = LoadIcon(hInstance,
		(LPCTSTR)IDI_APPLICATION);
	WindowClass.hCursor = LoadCursor(NULL, IDC_ARROW);

	//***************************
	//BACKGROUND
	WindowClass.hbrBackground = (HBRUSH)GetStockObject(DKGRAY_BRUSH);//DKGRAY_BRUSH, WHITE_BRUSH, BLACK_BRUSH
	//***************************

	WindowClass.lpszMenuName = 0;
	WindowClass.lpszClassName = TEXT("Class");

	//Зарегистируем класс окна
	RegisterClass(&WindowClass);

	//Создаем переменную, в которой поместим идентификатор окна
	HWND hWnd;

	hWnd = CreateWindow(TEXT("Class"), TEXT("Главное окно"), WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 500, 300, NULL, NULL, hInstance, NULL);

	//показать окно
	ShowWindow(hWnd, nCmdShow);

	//обновить содержимое окна
	UpdateWindow(hWnd);

	//Создадим переменную для храненния сообщений
	MSG msg;

	//Создадим цикл обработки сообщений
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return 0;
}