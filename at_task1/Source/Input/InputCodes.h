#pragma once

namespace InputCodes
{
	constexpr int16_t Backspace{ VK_BACK };
	constexpr int16_t Tab{ VK_TAB };
	constexpr int16_t Enter{ VK_RETURN };
	constexpr int16_t Left_Shift{ VK_LSHIFT };
	constexpr int16_t Right_Shift{ VK_RSHIFT };
	constexpr int16_t Caps_Lock{ VK_CAPITAL };
	constexpr int16_t Escape{ VK_ESCAPE };
	constexpr int16_t Space_Bar{ VK_SPACE };
	constexpr int16_t Page_Up{ VK_PRIOR };
	constexpr int16_t Page_Down{ VK_NEXT };
	constexpr int16_t End{ VK_END };
	constexpr int16_t Home{ VK_HOME };
	constexpr int16_t Insert{ VK_INSERT };
	constexpr int16_t Delete{ VK_DELETE };
	constexpr int16_t Left{ VK_LEFT };
	constexpr int16_t Right{ VK_RIGHT };
	constexpr int16_t Up{ VK_UP };
	constexpr int16_t Down{ VK_DOWN };
	constexpr int16_t Zero{ 0x30 };
	constexpr int16_t One{ 0x31 };
	constexpr int16_t Two{ 0x32 };
	constexpr int16_t Three{ 0x33 };
	constexpr int16_t Four{ 0x34 };
	constexpr int16_t Five{ 0x35 };
	constexpr int16_t Six{ 0x36 };
	constexpr int16_t Seven{ 0x37 };
	constexpr int16_t Eight{ 0x38 };
	constexpr int16_t Nine{ 0x39 };
	constexpr int16_t A{ 0x41 };
	constexpr int16_t B{ 0x42 };
	constexpr int16_t C{ 0x43 };
	constexpr int16_t D{ 0x44 };
	constexpr int16_t E{ 0x45 };
	constexpr int16_t F{ 0x46 };
	constexpr int16_t G{ 0x47 };
	constexpr int16_t H{ 0x48 };
	constexpr int16_t I{ 0x49 };
	constexpr int16_t J{ 0x4A };
	constexpr int16_t K{ 0x4B };
	constexpr int16_t L{ 0x4C };
	constexpr int16_t M{ 0x4D };
	constexpr int16_t N{ 0x4E };
	constexpr int16_t O{ 0x4F };
	constexpr int16_t P{ 0x50 };
	constexpr int16_t Q{ 0x51 };
	constexpr int16_t R{ 0x52 };
	constexpr int16_t S{ 0x53 };
	constexpr int16_t T{ 0x54 };
	constexpr int16_t U{ 0x55 };
	constexpr int16_t V{ 0x56 };
	constexpr int16_t W{ 0x57 };
	constexpr int16_t X{ 0x58 };
	constexpr int16_t Y{ 0x59 };
	constexpr int16_t Z{ 0x5A };
	constexpr int16_t Num_0{ VK_NUMPAD0 };
	constexpr int16_t Num_1{ VK_NUMPAD1 };
	constexpr int16_t Num_2{ VK_NUMPAD2 };
	constexpr int16_t Num_3{ VK_NUMPAD3 };
	constexpr int16_t Num_4{ VK_NUMPAD4 };
	constexpr int16_t Num_5{ VK_NUMPAD5 };
	constexpr int16_t Num_6{ VK_NUMPAD6 };
	constexpr int16_t Num_7{ VK_NUMPAD7 };
	constexpr int16_t Num_8{ VK_NUMPAD8 };
	constexpr int16_t Num_9{ VK_NUMPAD9 };
	constexpr int16_t F1{ VK_F1 };
	constexpr int16_t F2{ VK_F2 };
	constexpr int16_t F3{ VK_F3 };
	constexpr int16_t F4{ VK_F4 };
	constexpr int16_t F5{ VK_F5 };
	constexpr int16_t F6{ VK_F6 };
	constexpr int16_t F7{ VK_F7 };
	constexpr int16_t F8{ VK_F8 };
	constexpr int16_t F9{ VK_F9 };
	constexpr int16_t F10{ VK_F10 };
	constexpr int16_t F11{ VK_F11 };
	constexpr int16_t F12{ VK_F12 };
	constexpr int16_t Left_Ctrl{ VK_LCONTROL };
	constexpr int16_t Right_Ctrl{ VK_RCONTROL };
	constexpr int16_t Alt{ VK_MENU };
	constexpr int16_t Tilde{ 223 };

	constexpr int16_t Left_Mouse_Button{ MK_LBUTTON };
	constexpr int16_t Right_Mouse_Button{ MK_RBUTTON };
	constexpr int16_t Middle_Mouse_Button{ MK_MBUTTON };

	constexpr int16_t Mouse_Wheel_Up{ 399 };
	constexpr int16_t Mouse_Wheel_Down{ 400 };

	constexpr int16_t Mouse_X{ 401 };
	constexpr int16_t Mouse_Y{ 402 };

	constexpr int16_t Gamepad_Face_Button_Bottom{ static_cast<int16_t>(XINPUT_GAMEPAD_A) };
	constexpr int16_t Gamepad_Face_Button_Right{ static_cast<int16_t>(XINPUT_GAMEPAD_B) };
	constexpr int16_t Gamepad_Face_Button_Left{ static_cast<int16_t>(XINPUT_GAMEPAD_X) };
	constexpr int16_t Gamepad_Face_Button_Top{ static_cast<int16_t>(XINPUT_GAMEPAD_Y) };
	constexpr int16_t Gamepad_D_Pad_Up{ static_cast<int16_t>(XINPUT_GAMEPAD_DPAD_UP) };
	constexpr int16_t Gamepad_D_Pad_Down{ static_cast<int16_t>(XINPUT_GAMEPAD_DPAD_DOWN) };
	constexpr int16_t Gamepad_D_Pad_Left{ static_cast<int16_t>(XINPUT_GAMEPAD_DPAD_LEFT) };
	constexpr int16_t Gamepad_D_Pad_Right{ static_cast<int16_t>(XINPUT_GAMEPAD_DPAD_RIGHT) };
	constexpr int16_t Gamepad_Left_Thumbstick_Button{ static_cast<int16_t>(XINPUT_GAMEPAD_LEFT_THUMB) };
	constexpr int16_t Gamepad_Right_Thumbstick_Button{ static_cast<int16_t>(XINPUT_GAMEPAD_RIGHT_THUMB) };
	constexpr int16_t Gamepad_Special_Left{ static_cast<int16_t>(XINPUT_GAMEPAD_BACK) };
	constexpr int16_t Gamepad_Special_Right{ static_cast<int16_t>(XINPUT_GAMEPAD_START) };
	constexpr int16_t Gamepad_Left_Shoulder{ static_cast<int16_t>(XINPUT_GAMEPAD_LEFT_SHOULDER) };
	constexpr int16_t Gamepad_Right_Shoulder{ static_cast<int16_t>(XINPUT_GAMEPAD_RIGHT_SHOULDER) };

	constexpr int16_t Gamepad_Left_Thumbstick_X_Axis{ 404 };
	constexpr int16_t Gamepad_Left_Thumbstick_Y_Axis{ 405 };
	constexpr int16_t Gamepad_Right_Thumbstick_X_Axis{ 406 };
	constexpr int16_t Gamepad_Right_Thumbstick_Y_Axis{ 407 };
	constexpr int16_t Gamepad_Left_Thumbstick_Up{ 408 };
	constexpr int16_t Gamepad_Left_Thumbstick_Down{ 409 };
	constexpr int16_t Gamepad_Left_Thumbstick_Left{ 410 };
	constexpr int16_t Gamepad_Left_Thumbstick_Right{ 411 };
	constexpr int16_t Gamepad_Right_Thumbstick_Up{ 412 };
	constexpr int16_t Gamepad_Right_Thumbstick_Down{ 413 };
	constexpr int16_t Gamepad_Right_Thumbstick_Left{ 414 };
	constexpr int16_t Gamepad_Right_Thumbstick_Right{ 415 };

	constexpr int16_t Gamepad_Left_Trigger{ 416 };
	constexpr int16_t Gamepad_Right_Trigger{ 417 };
	constexpr int16_t Gamepad_Left_Trigger_Axis{ 418 };
	constexpr int16_t Gamepad_Right_Trigger_Axis{ 419 };
}
