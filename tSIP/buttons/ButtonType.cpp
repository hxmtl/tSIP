//---------------------------------------------------------------------------


#pragma hdrstop

#include "ButtonType.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

using namespace Button;

const char* Button::TypeName(enum Type type)
{
	switch (type)
	{
	case DISABLED:
		return "Disabled";
	case SPEED_DIAL:
		return "Speed Dial";
	case BLF:
		return "BLF";
	case DTMF:
		return "DTMF";
	case REDIAL:
		return "Redial";
	case TRANSFER:
		return "Transfer";
	case HOLD:
		return "Hold";
	case REREGISTER:
		return "Re-register";
	case MWI:
		return "MWI";
	case MUTE:
		return "Mute";
	case MUTE_RING:
		return "Mute ring";
	case CONTACT_NOTE:
		return "Contact note";
	case HTTP_QUERY:
		return "HTTP query";
	case PRESENCE:
		return "Presence";
	case UNREGISTER:
		return "Unregister";
	case EXECUTE:
		return "Execute";
	case PAGING_TX:
		return "RTP streaming (paging)";
	case SCRIPT:
		return "Script (Lua)";
	case SIP_ACCESS_URL:
		return "Access SIP URL";
	case SWITCH_AUDIO_SOURCE:
		return "Switch audio source";
	case SWITCH_AUDIO_PLAYER:
		return "Switch audio output";
	case HANGUP:
		return "Hangup";
	case SHOW_SETTINGS:
		return "Show settings";
	case MINIMIZE:
		return "Minimize application";
	case SHOW_LOG:
		return "Show log";
	case EXIT:
		return "Exit";
	case CONTACT_FILE:
		return "Contact file";
	case UA_RESTART:
		return "Restart user agent";
	case SEND_TEXT_MESSAGE:
		return "Send text message";
	case RECORD:
		return "Start/resume recording";
	case RECORD_PAUSE:
		return "Pause recording";
	case AUTO_ANSWER_DND:
		return "Auto answer/DND";
	default:
		return "???";
	}
}
const char* Button::TypeDescription(enum Type type)
{
	switch (type)
	{
	case DISABLED:
		return "Button disabled - no action.";
	case SPEED_DIAL:
		return "Quick dialing.";
	case BLF:
		return "Busy Lamp Field - show peer call state.";
	case DTMF:
		return "Send digits during call or add digits to dialed number. Accepted: 0-9, *, #, A, B, C, D and also R = FLASH.";
	case REDIAL:
		return "Dial last number again.";
	case TRANSFER:
		return "Blind transfer - enter target number in main window (\"Transfer to ...\").";
	case HOLD:
		return "Temporary disable media stream.";
	case REREGISTER:
		return "Repeat registration immediately.";
	case MWI:
		return "Voice mail: Message Waiting Indicator (unsolicited). Uses \"early\" icon if new messages are present.";
	case MUTE:
		return "Mute outgoing audio during call.";
	case MUTE_RING:
		return "Mute ring on incoming calls.";
	case CONTACT_NOTE:
		return "Show/edit note of the last contact.";
	case HTTP_QUERY:
		return "Open browser - query for number from last incoming call.";
	case PRESENCE:
		return "Presence (application/pidf+xml).";
	case UNREGISTER:
		return "Unregister (leave registration server).";
	case EXECUTE:
		return "Start other application (e.g. RecordViewer). Number specifies executable, Argument1 specifies arguments passed to application and \"[number]\" if present will be substituted with number from last call.";
	case PAGING_TX:
		return "Start RTP streaming (paging) to specified address (multicast, unicast) in Number edit (e.g. 192.168.1.10:4000). If wave file is not specified default audio source (same as when calling) is used.";
	case SCRIPT:
		return "Execute Lua script from specified file (uses \"scripts\" subdirectory).";
	case SIP_ACCESS_URL:
		return "Open URL specified by \"Access-URL\" header from incoming INVITE.";
	case SWITCH_AUDIO_SOURCE:
		return "Switch audio source device for current call or RTP streaming.";
	case SWITCH_AUDIO_PLAYER:
		return "Switch audio output device for current call.";
	case HANGUP:
		return "Terminate current call or RTP streaming (paging).";
	case SHOW_SETTINGS:
		return "Show application settings.";
	case MINIMIZE:
		return "Minimize application window.";
	case SHOW_LOG:
		return "Show application log.";
	case EXIT:
		return "Close application.";
	case CONTACT_FILE:
		return "Open file associated with contact / phonebook entry.";
	case UA_RESTART:
		return "Restart user agent (core part of the softphone, working thread) to e.g. speed up BLF refreshing if PABX was restarted.";
	case SEND_TEXT_MESSAGE:
		return "Send text message (Instant Messaging, SIMPLE) to number/URI defined with button or (if button URI is empty) - number/URI from main window dial edit.";
	case RECORD:
		return "Start recording with default settings (if recording is set to manual) or resume paused recording.";
	case RECORD_PAUSE:
		return "Pause current recording.";
	case AUTO_ANSWER_DND:
		return "Auto answer or DND. For auto answer use SIP code = 200, for DND = 486 or 603.";
	default:
		return "???";
	}
}
