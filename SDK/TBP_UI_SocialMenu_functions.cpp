// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SocialMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.ShowSubscreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerSocialSubscreenUI* InSubscreen                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SocialMenu_C::ShowSubscreen(class UTigerSocialSubscreenUI* InSubscreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.ShowSubscreen"));

	struct
	{
		class UTigerSocialSubscreenUI* InSubscreen;
	} params = {};

	params.InSubscreen = InSubscreen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SocialMenu_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__Exit_K2Node_ComponentBoundEvent_4_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SocialMenu_C::BndEvt__Exit_K2Node_ComponentBoundEvent_4_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__Exit_K2Node_ComponentBoundEvent_4_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnSubscreenOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerSocialSubscreenUI* InSubscreen                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SocialMenu_C::OnSubscreenOpen(class UTigerSocialSubscreenUI* InSubscreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnSubscreenOpen"));

	struct
	{
		class UTigerSocialSubscreenUI* InSubscreen;
	} params = {};

	params.InSubscreen = InSubscreen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SocialMenu_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SocialMenu_C::BndEvt__FriendsButton_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__InboxButton_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SocialMenu_C::BndEvt__InboxButton_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__InboxButton_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__ElysiumButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SocialMenu_C::BndEvt__ElysiumButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__ElysiumButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__TBP_UI_SocialMenu_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SocialMenu_C::BndEvt__TBP_UI_SocialMenu_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__TBP_UI_SocialMenu_Exit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__TBP_UI_SocialMenu_FindFriendsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SocialMenu_C::BndEvt__TBP_UI_SocialMenu_FindFriendsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__TBP_UI_SocialMenu_FindFriendsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SocialMenu_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__TBP_UI_SocialMenu_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SocialMenu_C::BndEvt__TBP_UI_SocialMenu_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__TBP_UI_SocialMenu_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__TBP_UI_SocialMenu_TrackerGGButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SocialMenu_C::BndEvt__TBP_UI_SocialMenu_TrackerGGButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__TBP_UI_SocialMenu_TrackerGGButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__TBP_UI_SocialMenu_TrackerGGButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SocialMenu_C::BndEvt__TBP_UI_SocialMenu_TrackerGGButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__TBP_UI_SocialMenu_TrackerGGButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.ExecuteUbergraph_TBP_UI_SocialMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SocialMenu_C::ExecuteUbergraph_TBP_UI_SocialMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.ExecuteUbergraph_TBP_UI_SocialMenu"));

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
