// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_IngameMenuButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.SetDisplayedText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_IngameMenuButton_C::SetDisplayedText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.SetDisplayedText"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnNewMenuSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerIngameSubmenuWidget* NewMenu                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShouldUseButtonAsset           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_IngameMenuButton_C* NewMenuButton                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_IngameMenuButton_C* CurrenyMenyButton              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_IngameMenuButton_C::OnNewMenuSelected(class UTigerIngameSubmenuWidget* NewMenu, bool ShouldUseButtonAsset, class UTBP_UI_IngameMenuButton_C* NewMenuButton, class UTBP_UI_IngameMenuButton_C* CurrenyMenyButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnNewMenuSelected"));

	struct
	{
		class UTigerIngameSubmenuWidget* NewMenu;
		bool                           ShouldUseButtonAsset;
		class UTBP_UI_IngameMenuButton_C* NewMenuButton;
		class UTBP_UI_IngameMenuButton_C* CurrenyMenyButton;
	} params = {};

	params.NewMenu = NewMenu;
	params.ShouldUseButtonAsset = ShouldUseButtonAsset;
	params.NewMenuButton = NewMenuButton;
	params.CurrenyMenyButton = CurrenyMenyButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnDeselected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_IngameMenuButton_C::OnDeselected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnDeselected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_IngameMenuButton_C::OnSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.GetMenuItemTextColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UTBP_UI_IngameMenuButton_C::GetMenuItemTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.GetMenuItemTextColor"));

	struct
	{
		struct FSlateColor             ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_IngameMenuButton_C::OpenOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenMap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_IngameMenuButton_C::OpenMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenMap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_IngameMenuButton_C::OpenInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_IngameMenuButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnClickedItemButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_IngameMenuButton_C::OnClickedItemButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnClickedItemButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_IngameMenuButton_C::BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_IngameMenuButton_C::BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.ExecuteUbergraph_TBP_UI_IngameMenuButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_IngameMenuButton_C::ExecuteUbergraph_TBP_UI_IngameMenuButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.ExecuteUbergraph_TBP_UI_IngameMenuButton"));

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


// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerIngameSubmenuWidget* SubmenuWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_IngameMenuButton_C::OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnClicked__DelegateSignature"));

	struct
	{
		class UTigerIngameSubmenuWidget* SubmenuWidget;
	} params = {};

	params.SubmenuWidget = SubmenuWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
