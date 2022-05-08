// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CharacterSkin_Elysium_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.UpdateHighlight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CharacterSkin_Elysium_C::UpdateHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.UpdateHighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.FindPaperDollAndCameraActors
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          InActors                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_CharacterSkin_Elysium_C::FindPaperDollAndCameraActors(TArray<class AActor*>* InActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.FindPaperDollAndCameraActors"));

	struct
	{
		TArray<class AActor*>          InActors;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InActors != nullptr)
		*InActors = params.InActors;
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.GetAnimMontageIfNotAlreadyPlaying
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  BodyMesh                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAnimMontage*            AnimMontage                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CharacterSkin_Elysium_C::GetAnimMontageIfNotAlreadyPlaying(class USkeletalMeshComponent** BodyMesh, class UAnimMontage** AnimMontage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.GetAnimMontageIfNotAlreadyPlaying"));

	struct
	{
		class USkeletalMeshComponent*  BodyMesh;
		class UAnimMontage*            AnimMontage;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (BodyMesh != nullptr)
		*BodyMesh = params.BodyMesh;
	if (AnimMontage != nullptr)
		*AnimMontage = params.AnimMontage;
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnNotifyEnd_9FF26C7D42A1CDCA47A92E8F5172239F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CharacterSkin_Elysium_C::OnNotifyEnd_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnNotifyEnd_9FF26C7D42A1CDCA47A92E8F5172239F"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnNotifyBegin_9FF26C7D42A1CDCA47A92E8F5172239F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CharacterSkin_Elysium_C::OnNotifyBegin_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnNotifyBegin_9FF26C7D42A1CDCA47A92E8F5172239F"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnInterrupted_9FF26C7D42A1CDCA47A92E8F5172239F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CharacterSkin_Elysium_C::OnInterrupted_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnInterrupted_9FF26C7D42A1CDCA47A92E8F5172239F"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnBlendOut_9FF26C7D42A1CDCA47A92E8F5172239F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CharacterSkin_Elysium_C::OnBlendOut_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnBlendOut_9FF26C7D42A1CDCA47A92E8F5172239F"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnCompleted_9FF26C7D42A1CDCA47A92E8F5172239F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CharacterSkin_Elysium_C::OnCompleted_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnCompleted_9FF26C7D42A1CDCA47A92E8F5172239F"));

	struct
	{
		struct FName                   NotifyName;
	} params = {};

	params.NotifyName = NotifyName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.DeselectCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CharacterSkin_Elysium_C::DeselectCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.DeselectCharacter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__ExistingCharacterButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnAppearanceLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CharacterSkin_Elysium_C::OnAppearanceLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnAppearanceLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_CharacterSkin_Elysium_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SelectCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CharacterSkin_Elysium_C::SelectCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SelectCharacter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.InitializeActors
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          InArchetypeSelectActors        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_CharacterSkin_Elysium_C::InitializeActors(TArray<class AActor*> InArchetypeSelectActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.InitializeActors"));

	struct
	{
		TArray<class AActor*>          InArchetypeSelectActors;
	} params = {};

	params.InArchetypeSelectActors = InArchetypeSelectActors;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.DoClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CharacterSkin_Elysium_C::DoClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.DoClick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SetAsExistingCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerCharacter InPersistentCharacter          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_CharacterSkin_Elysium_C::SetAsExistingCharacter(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SetAsExistingCharacter"));

	struct
	{
		struct FTigerPersistentPlayerCharacter InPersistentCharacter;
	} params = {};

	params.InPersistentCharacter = InPersistentCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.Update Ui State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ElysiumChangeCharacterState> Ui_State                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CharacterSkin_Elysium_C::Update_Ui_State(TEnumAsByte<E_ElysiumChangeCharacterState> Ui_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.Update Ui State"));

	struct
	{
		TEnumAsByte<E_ElysiumChangeCharacterState> Ui_State;
	} params = {};

	params.Ui_State = Ui_State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__Customize_Button2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__Customize_Button2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__Customize_Button2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SetAsEmptySlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPowerKitType             InArchetypeType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CharacterSkin_Elysium_C::SetAsEmptySlot(ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SetAsEmptySlot"));

	struct
	{
		ETigerPowerKitType             InArchetypeType;
	} params = {};

	params.InArchetypeType = InArchetypeType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.ExecuteUbergraph_TBP_UI_CharacterSkin_Elysium
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CharacterSkin_Elysium_C::ExecuteUbergraph_TBP_UI_CharacterSkin_Elysium(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.ExecuteUbergraph_TBP_UI_CharacterSkin_Elysium"));

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


// Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnClick__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerCharacter InPersistentCharacter          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_CharacterSkin_Elysium_C::OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnClick__DelegateSignature"));

	struct
	{
		struct FTigerPersistentPlayerCharacter InPersistentCharacter;
	} params = {};

	params.InPersistentCharacter = InPersistentCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
