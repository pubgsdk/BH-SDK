// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TutorialGameMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.IsObjectiveActive
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InObjectiveIdentifier          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATBP_TutorialGameMode_C::IsObjectiveActive(const struct FName& InObjectiveIdentifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.IsObjectiveActive"));

	struct
	{
		struct FName                   InObjectiveIdentifier;
		bool                           ReturnValue;
	} params = {};

	params.InObjectiveIdentifier = InObjectiveIdentifier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.PlayVoiceOver_BlueprintImplementation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent> InDialogueEvent                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// struct FText                   InSubtitles                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate         InPostEventCallback            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor)
// class UAkAudioEvent*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAkAudioEvent* ATBP_TutorialGameMode_C::PlayVoiceOver_BlueprintImplementation(TSoftObjectPtr<class UAkAudioEvent> InDialogueEvent, const struct FText& InSubtitles, const struct FScriptDelegate& InPostEventCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.PlayVoiceOver_BlueprintImplementation"));

	struct
	{
		TSoftObjectPtr<class UAkAudioEvent> InDialogueEvent;
		struct FText                   InSubtitles;
		struct FScriptDelegate         InPostEventCallback;
		class UAkAudioEvent*           ReturnValue;
	} params = {};

	params.InDialogueEvent = InDialogueEvent;
	params.InSubtitles = InSubtitles;
	params.InPostEventCallback = InPostEventCallback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.Ping_BlueprintImplementation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InWorldLocation                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSoftClassPtr<class UClass>    InPingClass                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class AActor*                  InContextualActor              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 InLocalOffset                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialGameMode_C::Ping_BlueprintImplementation(const struct FVector& InWorldLocation, TSoftClassPtr<class UClass> InPingClass, class AActor* InContextualActor, const struct FVector& InLocalOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.Ping_BlueprintImplementation"));

	struct
	{
		struct FVector                 InWorldLocation;
		TSoftClassPtr<class UClass>    InPingClass;
		class AActor*                  InContextualActor;
		struct FVector                 InLocalOffset;
	} params = {};

	params.InWorldLocation = InWorldLocation;
	params.InPingClass = InPingClass;
	params.InContextualActor = InContextualActor;
	params.InLocalOffset = InLocalOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.HideContextualHelp_BlueprintImplementation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    InContextualHelp               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ATBP_TutorialGameMode_C::HideContextualHelp_BlueprintImplementation(TSoftClassPtr<class UClass> InContextualHelp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.HideContextualHelp_BlueprintImplementation"));

	struct
	{
		TSoftClassPtr<class UClass>    InContextualHelp;
	} params = {};

	params.InContextualHelp = InContextualHelp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.ShowContextualHelp_BlueprintImplementation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    InContextualHelp               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ATBP_TutorialGameMode_C::ShowContextualHelp_BlueprintImplementation(TSoftClassPtr<class UClass> InContextualHelp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.ShowContextualHelp_BlueprintImplementation"));

	struct
	{
		TSoftClassPtr<class UClass>    InContextualHelp;
	} params = {};

	params.InContextualHelp = InContextualHelp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.CompleteObjective_BlueprintImplementation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InObjectiveIdentifier          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialGameMode_C::CompleteObjective_BlueprintImplementation(const struct FName& InObjectiveIdentifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.CompleteObjective_BlueprintImplementation"));

	struct
	{
		struct FName                   InObjectiveIdentifier;
	} params = {};

	params.InObjectiveIdentifier = InObjectiveIdentifier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.AddNewObjective_BlueprintImplementation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InObjectiveIdentifier          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   InObjectiveText                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   InActionToEmbed                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   InGamepadOverrideActionToEmbed (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InHasAdditionalKeyboardInput   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKey                    InAdditionalKeyboardInput      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           InHasAdditionalGamepadInput    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKey                    InAdditionalGamepadInput       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           InOverrideImage                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   InImageToOverride              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InPersistantObjective          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   InGamepadImageToOverride       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialGameMode_C::AddNewObjective_BlueprintImplementation(const struct FName& InObjectiveIdentifier, const struct FText& InObjectiveText, const struct FName& InActionToEmbed, const struct FName& InGamepadOverrideActionToEmbed, bool InHasAdditionalKeyboardInput, const struct FKey& InAdditionalKeyboardInput, bool InHasAdditionalGamepadInput, const struct FKey& InAdditionalGamepadInput, bool InOverrideImage, const struct FName& InImageToOverride, bool InPersistantObjective, const struct FName& InGamepadImageToOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.AddNewObjective_BlueprintImplementation"));

	struct
	{
		struct FName                   InObjectiveIdentifier;
		struct FText                   InObjectiveText;
		struct FName                   InActionToEmbed;
		struct FName                   InGamepadOverrideActionToEmbed;
		bool                           InHasAdditionalKeyboardInput;
		struct FKey                    InAdditionalKeyboardInput;
		bool                           InHasAdditionalGamepadInput;
		struct FKey                    InAdditionalGamepadInput;
		bool                           InOverrideImage;
		struct FName                   InImageToOverride;
		bool                           InPersistantObjective;
		struct FName                   InGamepadImageToOverride;
	} params = {};

	params.InObjectiveIdentifier = InObjectiveIdentifier;
	params.InObjectiveText = InObjectiveText;
	params.InActionToEmbed = InActionToEmbed;
	params.InGamepadOverrideActionToEmbed = InGamepadOverrideActionToEmbed;
	params.InHasAdditionalKeyboardInput = InHasAdditionalKeyboardInput;
	params.InAdditionalKeyboardInput = InAdditionalKeyboardInput;
	params.InHasAdditionalGamepadInput = InHasAdditionalGamepadInput;
	params.InAdditionalGamepadInput = InAdditionalGamepadInput;
	params.InOverrideImage = InOverrideImage;
	params.InImageToOverride = InImageToOverride;
	params.InPersistantObjective = InPersistantObjective;
	params.InGamepadImageToOverride = InGamepadImageToOverride;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.LockPlayer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialGameMode_C::LockPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.LockPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.UnlockPlayer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialGameMode_C::UnlockPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.UnlockPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.RemoveSubtitles
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           InDialogueEvent                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialGameMode_C::RemoveSubtitles(class UAkAudioEvent* InDialogueEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.RemoveSubtitles"));

	struct
	{
		class UAkAudioEvent*           InDialogueEvent;
	} params = {};

	params.InDialogueEvent = InDialogueEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.RemovePing
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialGameMode_C::RemovePing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.RemovePing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.HideUI
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialGameMode_C::HideUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.HideUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.Update Subtitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SubText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ATBP_TutorialGameMode_C::Update_Subtitle(const struct FText& SubText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.Update Subtitle"));

	struct
	{
		struct FText                   SubText;
	} params = {};

	params.SubText = SubText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_TutorialGameMode_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.NextFrame
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialGameMode_C::NextFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.NextFrame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.StreamingFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialGameMode_C::StreamingFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.StreamingFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.K2_OnRestartPlayer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             NewPlayer                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialGameMode_C::K2_OnRestartPlayer(class AController* NewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.K2_OnRestartPlayer"));

	struct
	{
		class AController*             NewPlayer;
	} params = {};

	params.NewPlayer = NewPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialGameMode_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.OnIntroComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialGameMode_C::OnIntroComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.OnIntroComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.OnTitleScreenClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialGameMode_C::OnTitleScreenClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.OnTitleScreenClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.ExecuteUbergraph_TBP_TutorialGameMode
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialGameMode_C::ExecuteUbergraph_TBP_TutorialGameMode(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialGameMode.TBP_TutorialGameMode_C.ExecuteUbergraph_TBP_TutorialGameMode"));

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
