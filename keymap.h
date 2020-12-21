#ifdef OS_LINUX

enum class Key
{
    Space		= 0x0020,		// XK_space
	Escape		= 0xFF1B,		// XK_Escape

	Tab			= 0xFF09,		// XK_Tab
	Alt			= 0xFFE9,		// XK_Alt_L
	LAlt		= 0xFFE9,		// XK_Alt_L
	RAlt		= 0xFFEA,		// XK_Alt_R
	Control		= 0xFFE3,		// XK_Control_L
	LControl	= 0xFFE3,		// XK_Control_L
	RControl	= 0xFFE4,		// XK_Control_R
	Shift		= 0xFFE1,		// XK_Shift_L
	LShift		= 0xFFE1,		// XK_Shift_L
	RShift		= 0xFFE2,		// XK_Shift_R
	System		= 0xFFEB,		// XK_Super_L
	LSystem		= 0xFFEB,		// XK_Super_L
	RSystem		= 0xFFEC,		// XK_Super_R

	F1			= 0xFFBE,		// XK_F1
	F2			= 0xFFBF,		// XK_F2
	F3			= 0xFFC0,		// XK_F3
	F4			= 0xFFC1,		// XK_F4
	F5			= 0xFFC2,		// XK_F5
	F6			= 0xFFC3,		// XK_F6
	F7			= 0xFFC4,		// XK_F7
	F8			= 0xFFC5,		// XK_F8
	F9			= 0xFFC6,		// XK_F9
	F10			= 0xFFC7,		// XK_F10
	F11			= 0xFFC8,		// XK_F11
	F12			= 0xFFC9,		// XK_F12

	Num0		= 0x0030,		// XK_0
	Num1		= 0x0031,		// XK_1
	Num2		= 0x0032,		// XK_2
	Num3		= 0x0033,		// XK_3
	Num4		= 0x0034,		// XK_4
	Num5		= 0x0035,		// XK_5
	Num6		= 0x0036,		// XK_6
	Num7		= 0x0037,		// XK_7
	Num8		= 0x0038,		// XK_8
	Num9		= 0x0039,		// XK_9

	A			= 0x0061,		// XK_a
	B			= 0x0062,		// XK_b
	C			= 0x0063,		// XK_c
	D			= 0x0064,		// XK_d
	E			= 0x0065,		// XK_e
	F			= 0x0066,		// XK_f
	G			= 0x0067,		// XK_g
	H			= 0x0068,		// XK_h
	I			= 0x0069,		// XK_i
	J			= 0x006A,		// XK_j
	K			= 0x006B,		// XK_k
	L			= 0x006C,		// XK_l
	M			= 0x006D,		// XK_m
	N			= 0x006E,		// XK_n
	O			= 0x006F,		// XK_o
	P			= 0x0070,		// XK_p
	Q			= 0x0071,		// XK_q
	R			= 0x0072,		// XK_r
	S			= 0x0073,		// XK_s
	T			= 0x0074,		// XK_t
	U			= 0x0075,		// XK_u
	V			= 0x0076,		// XK_v
	W			= 0x0077,		// XK_w
	X			= 0x0078,		// XK_x
	Y			= 0x0079,		// XK_y
	Z			= 0x007A,		// XK_z

	Grave		= 0x0060,		// XK_grave
	Minus		= 0x002D,		// XK_minus
	Equal		= 0x003D,		// XK_equal
	Backspace	= 0xFF08,		// XK_BackSpace
	LBracket	= 0x005B,		// XK_bracketleft
	RBracket	= 0x005D,		// XK_bracketright
	Backslash	= 0x005C,		// XK_backslash
	Semicolon	= 0x003B,		// XK_semicolon
	Quote		= 0x0027,		// XK_apostrophe
	Return		= 0xFF0D,		// XK_Return
	Comma		= 0x002C,		// XK_comma
	Period		= 0x002E,		// XK_period
	Slash		= 0x002F,		// XK_slash

	Left		= 0xFF51,		// XK_Left
	Up			= 0xFF52,		// XK_Up
	Right		= 0xFF53,		// XK_Right
	Down		= 0xFF54,		// XK_Down

	Print		= 0xFF61,		// XK_Print
	Pause		= 0xFF13,		// XK_Pause
	Insert		= 0xFF63,		// XK_Insert
	Delete		= 0xFFFF,		// XK_Delete
	Home		= 0xFF50,		// XK_Home
	End			= 0xFF57,		// XK_End
	PageUp		= 0xFF55,		// XK_Page_Up
	PageDown	= 0xFF56,		// XK_Page_Down

	Add			= 0xFFAB,		// XK_KP_Add
	Subtract	= 0xFFAD,		// XK_KP_Subtract
	Multiply	= 0xFFAA,		// XK_KP_Multiply
	Divide		= 0xFFAF,		// XK_KP_Divide
	Decimal		= 0xFFAE,		// XK_KP_Decimal
	Enter		= 0xFF8D,		// XK_KP_Enter

	Numpad0		= 0xFFB0,		// XK_KP_0
	Numpad1		= 0xFFB1,		// XK_KP_1
	Numpad2		= 0xFFB2,		// XK_KP_2
	Numpad3		= 0xFFB3,		// XK_KP_3
	Numpad4		= 0xFFB4,		// XK_KP_4
	Numpad5		= 0xFFB5,		// XK_KP_5
	Numpad6		= 0xFFB6,		// XK_KP_6
	Numpad7		= 0xFFB7,		// XK_KP_7
	Numpad8		= 0xFFB8,		// XK_KP_8
	Numpad9		= 0xFFB9,		// XK_KP_9

	CapsLock	= 0xFFE5,		// XK_Caps_Lock
	ScrollLock	= 0xFF14,		// XK_Scroll_Lock
	NumLock		= 0xFF7F,		// XK_Num_Lock
};
#endif // OS_LINUX


#ifdef OS_WINDOWS

enum class Key
{
    Space		= 0x20,			// VK_SPACE
	Escape		= 0x1B,			// VK_ESCAPE

	Tab			= 0x09,			// VK_TAB
	Alt			= 0x12,			// VK_MENU
	LAlt		= 0xA4,			// VK_LMENU
	RAlt		= 0xA5,			// VK_RMENU
	Control		= 0x11,			// VK_CONTROL
	LControl	= 0xA2,			// VK_LCONTROL
	RControl	= 0xA3,			// VK_RCONTROL
	Shift		= 0x10,			// VK_SHIFT
	LShift		= 0xA0,			// VK_LSHIFT
	RShift		= 0xA1,			// VK_RSHIFT
	System		= 0x5B,			// VK_LWIN
	LSystem		= 0x5B,			// VK_LWIN
	RSystem		= 0x5C,			// VK_RWIN

	F1			= 0x70,			// VK_F1
	F2			= 0x71,			// VK_F2
	F3			= 0x72,			// VK_F3
	F4			= 0x73,			// VK_F4
	F5			= 0x74,			// VK_F5
	F6			= 0x75,			// VK_F6
	F7			= 0x76,			// VK_F7
	F8			= 0x77,			// VK_F8
	F9			= 0x78,			// VK_F9
	F10			= 0x79,			// VK_F10
	F11			= 0x7A,			// VK_F11
	F12			= 0x7B,			// VK_F12

	Num0		= 0x30,			// VK_0
	Num1		= 0x31,			// VK_1
	Num2		= 0x32,			// VK_2
	Num3		= 0x33,			// VK_3
	Num4		= 0x34,			// VK_4
	Num5		= 0x35,			// VK_5
	Num6		= 0x36,			// VK_6
	Num7		= 0x37,			// VK_7
	Num8		= 0x38,			// VK_8
	Num9		= 0x39,			// VK_9

	A			= 0x41,			// VK_A
	B			= 0x42,			// VK_B
	C			= 0x43,			// VK_C
	D			= 0x44,			// VK_D
	E			= 0x45,			// VK_E
	F			= 0x46,			// VK_F
	G			= 0x47,			// VK_G
	H			= 0x48,			// VK_H
	I			= 0x49,			// VK_I
	J			= 0x4A,			// VK_J
	K			= 0x4B,			// VK_K
	L			= 0x4C,			// VK_L
	M			= 0x4D,			// VK_M
	N			= 0x4E,			// VK_N
	O			= 0x4F,			// VK_O
	P			= 0x50,			// VK_P
	Q			= 0x51,			// VK_Q
	R			= 0x52,			// VK_R
	S			= 0x53,			// VK_S
	T			= 0x54,			// VK_T
	U			= 0x55,			// VK_U
	V			= 0x56,			// VK_V
	W			= 0x57,			// VK_W
	X			= 0x58,			// VK_X
	Y			= 0x59,			// VK_Y
	Z			= 0x5A,			// VK_Z

	Grave		= 0xC0,			// VK_OEM_3
	Minus		= 0xBD,			// VK_OEM_MINUS
	Equal		= 0xBB,			// VK_OEM_PLUS
	Backspace	= 0x08,			// VK_BACK
	LBracket	= 0xDB,			// VK_OEM_4
	RBracket	= 0xDD,			// VK_OEM_6
	Backslash	= 0xDC,			// VK_OEM_5
	Semicolon	= 0xBA,			// VK_OEM_1
	Quote		= 0xDE,			// VK_OEM_7
	Return		= 0x0D,			// VK_RETURN
	Comma		= 0xBC,			// VK_OEM_COMMA
	Period		= 0xBE,			// VK_OEM_PERIOD
	Slash		= 0xBF,			// VK_OEM_2

	Left		= 0x25,			// VK_LEFT
	Up			= 0x26,			// VK_UP
	Right		= 0x27,			// VK_RIGHT
	Down		= 0x28,			// VK_DOWN

	Print		= 0x2C,			// VK_SNAPSHOT
	Pause		= 0x13,			// VK_PAUSE
	Insert		= 0x2D,			// VK_INSERT
	Delete		= 0x2E,			// VK_DELETE
	Home		= 0x24,			// VK_HOME
	End			= 0x23,			// VK_END
	PageUp		= 0x21,			// VK_PRIOR
	PageDown	= 0x22,			// VK_NEXT

	Add			= 0x6B,			// VK_ADD
	Subtract	= 0x6D,			// VK_SUBTRACT
	Multiply	= 0x6A,			// VK_MULTIPLY
	Divide		= 0x6F,			// VK_DIVIDE
	Decimal		= 0x6E,			// VK_DECIMAL
	Enter		= 0x0D,			// VK_RETURN

	Numpad0		= 0x60,			// VK_NUMPAD0
	Numpad1		= 0x61,			// VK_NUMPAD1
	Numpad2		= 0x62,			// VK_NUMPAD2
	Numpad3		= 0x63,			// VK_NUMPAD3
	Numpad4		= 0x64,			// VK_NUMPAD4
	Numpad5		= 0x65,			// VK_NUMPAD5
	Numpad6		= 0x66,			// VK_NUMPAD6
	Numpad7		= 0x67,			// VK_NUMPAD7
	Numpad8		= 0x68,			// VK_NUMPAD8
	Numpad9		= 0x69,			// VK_NUMPAD9

	CapsLock	= 0x14,			// VK_CAPITAL
	ScrollLock	= 0x91,			// VK_SCROLL
	NumLock		= 0x90,			// VK_NUMLOCK
};

#endif // OS_WINDOWS
