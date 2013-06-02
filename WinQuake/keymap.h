#ifndef _KEYMAP_H_
#define _KEYMAP_H_

typedef enum {
	KB_RESERVED = 0,
	KB_ESC,
	KB_1,
	KB_2,
	KB_3,
	KB_4,
	KB_5,
	KB_6,
	KB_7,
	KB_8,
	KB_9,
	KB_0,
	KB_MINUS,
	KB_EQUALS,
	KB_BACKSPACE,
	KB_TAB,
	KB_Q,
	KB_W,
	KB_E,
	KB_R,
	KB_T,
	KB_Y,
	KB_U,
	KB_I,
	KB_O,
	KB_P,
	KB_LEFTBRACE,
	KB_RIGHTBRACE,
	KB_ENTER,
	KB_LEFTCTRL,
	KB_A,
	KB_S,
	KB_D,
	KB_F,
	KB_G,
	KB_H,
	KB_J,
	KB_K,
	KB_L,
	KB_SEMICOLON,
	KB_APOSTROPHE,
	KB_GRAVE,
	KB_LEFTSHIFT,
	KB_BACKSLASH,
	KB_Z,
	KB_X,
	KB_C,
	KB_V,
	KB_B,
	KB_N,
	KB_M,
	KB_COMMA,
	KB_DOT,
	KB_SLASH,
	KB_RIGHTSHIFT,
	KB_KPASTERISK,
	KB_LEFTALT,
	KB_SPACE,
	KB_CAPSLOCK,
	KB_UP,
	KB_LEFT,
	KB_RIGHT,
	KB_DOWN,
	KB_MAX
} Keymap;

#ifdef _WIN32_
static const char ms_to_keymap[] =  
{
	KB_RESERVED,	//0x00
	KB_RESERVED,	//0x01
	KB_RESERVED,	//0x02
	KB_RESERVED,	//0x03
	KB_RESERVED,	//0x04
	KB_RESERVED,	//0x05
	KB_RESERVED,	//0x06
	KB_RESERVED,	//0x07
	KB_BACKSPACE,	//0x08
	KB_TAB,			//0x09
	KB_RESERVED,	//0x0A
	KB_RESERVED,	//0x0B
	KB_RESERVED,	//0x0C
	KB_ENTER,		//0x0D
	KB_RESERVED,	//0x0E
	KB_RESERVED,	//0x0F

	KB_SHIFT,		//0x10
	KB_LEFTCTRL,	//0x11
	KB_ALT,			//0x12
	KB_RESERVED,	//0x13
	KB_CAPSLOCK,	//0x14
	KB_RESERVED,	//0x15
	KB_RESERVED,	//0x16
	KB_RESERVED,	//0x17
	KB_RESERVED,	//0x18
	KB_RESERVED,	//0x19
	KB_RESERVED,	//0x1A
	KB_RESERVED,	//0x1B
	KB_RESERVED,	//0x1C
	KB_RESERVED,	//0x1D
	KB_RESERVED,	//0x1E
	KB_RESERVED,	//0x1F

	KB_RESERVED,	//0x20
	KB_RESERVED,	//0x21
	KB_RESERVED,	//0x22
	KB_RESERVED,	//0x23
	KB_RESERVED,	//0x24
	KB_RESERVED,	//0x25
	KB_RESERVED,	//0x26
	KB_RESERVED,	//0x27
	KB_RESERVED,	//0x28
	KB_RESERVED,	//0x29
	KB_RESERVED,	//0x2A
	KB_RESERVED,	//0x2B
	KB_RESERVED,	//0x2C
	KB_RESERVED,	//0x2D
	KB_RESERVED,	//0x2E
	KB_RESERVED,	//0x2F

	KB_0,			//0x30
	KB_1,			//0x31
	KB_2,			//0x32
	KB_3,			//0x33
	KB_4,			//0x34
	KB_5,			//0x35
	KB_6,			//0x36
	KB_7,			//0x37
	KB_8,			//0x38
	KB_9,			//0x39
	KB_RESERVED,	//0x3A
	KB_RESERVED,	//0x3B
	KB_RESERVED,	//0x3C
	KB_RESERVED,	//0x3D
	KB_RESERVED,	//0x3E
	KB_RESERVED,	//0x3F

	KB_RESERVED,	//0x40
	KB_A,			//0x41
	KB_B,			//0x42
	KB_C,			//0x43
	KB_D,			//0x44
	KB_E,			//0x45
	KB_F,			//0x46
	KB_G,			//0x47
	KB_H,			//0x48
	KB_I,			//0x49
	KB_J,			//0x4A
	KB_K,			//0x4B
	KB_L,			//0x4C
	KB_M,			//0x4D
	KB_N,			//0x4E
	KB_O,			//0x4F

	KB_P,			//0x50
	KB_Q,			//0x51
	KB_R,			//0x52
	KB_S,			//0x53
	KB_T,			//0x54
	KB_U,			//0x55
	KB_V,			//0x56
	KB_W,			//0x57
	KB_X,			//0x58
	KB_Y,			//0x59
	KB_Z,			//0x5A
	KB_RESERVED,	//0x5B
	KB_RESERVED,	//0x5C
	KB_RESERVED,	//0x5D
	KB_RESERVED,	//0x5E
	KB_RESERVED,	//0x5F

	KB_RESERVED,	//0x60
	KB_RESERVED,	//0x61
	KB_RESERVED,	//0x62
	KB_RESERVED,	//0x63
	KB_RESERVED,	//0x64
	KB_RESERVED,	//0x65
	KB_RESERVED,	//0x66
	KB_RESERVED,	//0x67
	KB_RESERVED,	//0x68
	KB_RESERVED,	//0x69
	KB_RESERVED,	//0x6A
	KB_RESERVED,	//0x6B
	KB_RESERVED,	//0x6C
	KB_RESERVED,	//0x6D
	KB_RESERVED,	//0x6E
	KB_RESERVED,	//0x6F

	KB_F1,			//0x70
	KB_RESERVED,	//0x71
	KB_RESERVED,	//0x72
	KB_RESERVED,	//0x73
	KB_RESERVED,	//0x74
	KB_RESERVED,	//0x75
	KB_RESERVED,	//0x76
	KB_RESERVED,	//0x77
	KB_RESERVED,	//0x78
	KB_RESERVED,	//0x79
	KB_RESERVED,	//0x7A
	KB_RESERVED,	//0x7B
	KB_RESERVED,	//0x7C
	KB_RESERVED,	//0x7D
	KB_RESERVED,	//0x7E
	KB_RESERVED,	//0x7F
};
#define LINUX_KB_MAX 120

#endif

#ifdef __linux__
static const char linux_to_keymap[] =  
{
	KB_RESERVED,	//KEY_RESERVED
	KB_ESC,	//KEY_ESCAPE
	KB_1,	//KEY_1
	KB_2,	//KEY_2
	KB_3,	//KEY_3
	KB_4,	//KEY_4
	KB_5,	//KEY_5
	KB_6,	//KEY_6
	KB_7,	//KEY_7
	KB_8,	//KEY_8
	KB_9,	//KEY_9
	KB_0,	//KEY_0
	KB_MINUS,	//KEY_MINUS
	KB_EQUALS,	//KEY_EQUALS
	KB_BACKSPACE,	//KEY_BACKSPACE
	KB_TAB,	//KEY_TAB
	KB_Q,	//KEY_Q
	KB_W,	//KEY_W
	KB_E,	//KEY_E
	KB_R,	//KEY_R
	KB_T,	//KEY_T
	KB_Y,	//KEY_Y
	KB_U,	//KEY_U
	KB_I,	//KEY_I
	KB_O,	//KEY_O
	KB_P,	//KEY_P
	KB_LEFTBRACE,	//KEY_LEFTBRACE   
	KB_RIGHTBRACE,	//KEY_RIGHTBRACE   
	KB_ENTER,	//KEY_ENTER
	KB_LEFTCTRL,	//KEY_LEFTCTRL is 17 correct?
	KB_A,	//KEY_A
	KB_S,	//KEY_S
	KB_D,	//KEY_D
	KB_F,	//KEY_F
	KB_G,	//KEY_G
	KB_H,	//KEY_H
	KB_J,	//KEY_J
	KB_K,	//KEY_K
	KB_L,	//KEY_L
	KB_SEMICOLON,	//KEY_SEMICOLON
	KB_APOSTROPHE,	//KEY_APOSROPHE
	KB_GRAVE,	//KEY_GRAVE not sure about this one at all
	KB_LEFTSHIFT,	//KEY_LEFTSHIFT
	KB_BACKSLASH,	//KEY_BACKSLASH ???
	KB_Z,	//KEY_Z
	KB_X,	//KEY_X
	KB_C,	//KEY_C
	KB_V,	//KEY_V
	KB_B,	//KEY_B
	KB_N,	//KEY_N
	KB_M,	//KEY_M
	KB_COMMA,	//KEY_COMMA
	KB_DOT,	//KEY_DOT
	KB_SLASH,	//KEY_SLASH 53
	KB_RIGHTSHIFT,	//KEY_RIGHTSHIFT
	KB_KPASTERISK,	//KEY_KPASTERISK
	KB_LEFTALT,	//KEY_LEFTALT
	KB_SPACE,	//KEY_SPACE
	KB_CAPSLOCK,	//KEY_CAPSLOCK
	KB_RESERVED,	//   59,	//KEY_F1
	KB_RESERVED,	//   60,	//KEY_F2
	KB_RESERVED,	//   61,	//KEY_F3
	KB_RESERVED,	//62,	//KEY_F4
	KB_RESERVED,	//63,	//KEY_F5
	KB_RESERVED,	//64,	//KEY_F6
	KB_RESERVED,	//65,	//KEY_F7
	KB_RESERVED,	//66,	//KEY_F8
	KB_RESERVED,	//67,	//KEY_F9
	KB_RESERVED,	//68,	//KEY_F10	   
	KB_RESERVED,	//69,	//KEY_NUMLOCK
	KB_RESERVED,	//70,	//KEY_SCROLLLOCL
	KB_RESERVED,	//71,	//KEY_KP7
	KB_RESERVED,	//72,	//KEY_KP8
	KB_RESERVED,	//73,	//KEY_KP9
	KB_RESERVED,	//74,	//KEY_KPMINUS
	KB_RESERVED,	//75,	//KEY_KP4
	KB_RESERVED,	//76,	//KEY_KP5
	KB_RESERVED,	//77,	//KEY_KP6
	KB_RESERVED,	//78,	//KEY_KPPLUS
	KB_RESERVED,	//79,	//KEY_KP1
	KB_RESERVED,	//80,	//KEY_KP2
	KB_RESERVED,	//81,	//KEY_KP3
	KB_RESERVED,	//82,	//KEY_KP0
	KB_RESERVED,	//83,	//KEY_KPDOT
	KB_RESERVED,	//84,	
	KB_RESERVED,	//85,	
	KB_RESERVED,	//86,	
	KB_RESERVED,	//87,	
	KB_RESERVED,	//88,	
	KB_RESERVED,	//89,	
	KB_RESERVED,	//90,
	KB_RESERVED,	//91,
	KB_RESERVED,	//92,
	KB_RESERVED,	//93,
	KB_RESERVED,	//94,	
	KB_RESERVED,	//95,	//KEY_KP_COMMA
	KB_RESERVED,	//96,	
	KB_RESERVED,	//97,	//KEY_RIGHTCTRL
	KB_RESERVED,	//98,	
	KB_RESERVED,	//99,	
	KB_RESERVED,	//100,	//KEY_RIGHTALT
	KB_RESERVED,	//101,	
	KB_RESERVED,	//102,	//KEY_HOME
	KB_UP,			//103,	//KEY_UP
	KB_RESERVED,	//104,	//KEY_PAGEUP
	KB_LEFT,		//105,	//KEY_LEFT
	KB_RIGHT,		//106,	//KEY_RIGHT
	KB_RESERVED,	//107,	//KEY_END
	KB_DOWN,		//108,	//KEY_DOWN
	KB_RESERVED,	//109,	
	KB_RESERVED,	//100,
	KB_RESERVED,	//111,
	KB_RESERVED,	//112,
	KB_RESERVED,	//113,
	KB_RESERVED,	//114,	
	KB_RESERVED,	//115,	
	KB_RESERVED,	//116,	
	KB_RESERVED,	//117,	
	KB_RESERVED,	//118,	
	KB_RESERVED,	//119,	
	KB_RESERVED,	//120 //we'll stop here for now as we've got most of the keys of interest
};
#define LINUX_KB_MAX 120
#endif

#endif //_KEYMAP_H_