// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_DialogueInteraction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.SequenceEvent__ENTRYPOINTTBP_UI_DialogueInteraction_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DialogueInteraction_C::SequenceEvent__ENTRYPOINTTBP_UI_DialogueInteraction_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.SequenceEvent__ENTRYPOINTTBP_UI_DialogueInteraction_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.SetVisibilityForPlayerNamePlates
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHidden                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_DialogueInteraction_C::SetVisibilityForPlayerNamePlates(bool bHidden)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.SetVisibilityForPlayerNamePlates"));

	struct
	{
		bool                           bHidden;
	} params = {};

	params.bHidden = bHidden;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.On_GamePadClickCatcher_MouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_DialogueInteraction_C::On_GamePadClickCatcher_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.On_GamePadClickCatcher_MouseButtonDown_1"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.IsQuestAnimationPlaying
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           OutIsPlaying                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_DialogueInteraction_C::IsQuestAnimationPlaying(bool* OutIsPlaying)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.IsQuestAnimationPlaying"));

	struct
	{
		bool                           OutIsPlaying;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutIsPlaying != nullptr)
		*OutIsPlaying = params.OutIsPlaying;
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.EndInteraction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DialogueInteraction_C::EndInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.EndInteraction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.StartInteraction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DialogueInteraction_C::StartInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.StartInteraction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.NextDialoguePack
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DialogueInteraction_C::NextDialoguePack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.NextDialoguePack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.NextDialogueLine
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InQuestObjective               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_DialogueInteraction_C::NextDialogueLine(const struct FText& InText, const struct FText& InQuestObjective)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.NextDialogueLine"));

	struct
	{
		struct FText                   InText;
		struct FText                   InQuestObjective;
	} params = {};

	params.InText = InText;
	params.InQuestObjective = InQuestObjective;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_DialogueInteraction_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_DialogueInteraction_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.Continue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DialogueInteraction_C::Continue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.Continue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.CloseDialogueInteraction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DialogueInteraction_C::CloseDialogueInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.CloseDialogueInteraction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_DialogueInteraction_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.FadeAnimationHalfDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DialogueInteraction_C::FadeAnimationHalfDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.FadeAnimationHalfDone"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.BndEvt__TBP_UI_DialogueInteraction_Close_Button_Prompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_DialogueInteraction_C::BndEvt__TBP_UI_DialogueInteraction_Close_Button_Prompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.BndEvt__TBP_UI_DialogueInteraction_Close_Button_Prompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.ExecuteUbergraph_TBP_UI_DialogueInteraction
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_DialogueInteraction_C::ExecuteUbergraph_TBP_UI_DialogueInteraction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.ExecuteUbergraph_TBP_UI_DialogueInteraction"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
