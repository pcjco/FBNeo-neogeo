#ifndef __RETRO_INPUT__
#define __RETRO_INPUT__

struct KeyBind
{
	unsigned id;
	unsigned port;
	unsigned device;
	int index;
	unsigned position;
};

struct AxiBind
{
	unsigned id;
	int index;
	AxiBind()
	{
		index = -1;
	}
};

#define MAX_PLAYERS 6

#define RETROPAD_CLASSIC	RETRO_DEVICE_ANALOG
#define RETROPAD_MODERN		RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_ANALOG, 1)
#define RETROMOUSE_BALL		RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_ANALOG, 2)
#define RETROMOUSE_FULL		RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_MOUSE, 1)

#define GIT_DIRECT_COORD	(0x11)

#define JOY_NEG 0
#define JOY_POS 1

#define RETRO_DEVICE_ID_JOYPAD_EMPTY 255

#define PGI_UP       0
#define PGI_DOWN     1
#define PGI_LEFT     2
#define PGI_RIGHT    3
#define PGI_ANALOG_X 4
#define PGI_ANALOG_Y 5

void SetDiagInpHoldFrameDelay(unsigned val);
void RefreshLightgunCrosshair();
void InputMake(void);
void InputInit();
void InputExit();
void SetControllerInfo();

#endif
