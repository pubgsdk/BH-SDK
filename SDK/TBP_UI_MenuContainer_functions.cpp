// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MenuContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ShowHeader
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::ShowHeader()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ShowHeader"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.HideHeader
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Blur                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MenuContainer_C::HideHeader(bool Blur)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.HideHeader"));

	struct
	{
		bool                           Blur;
	} params = {};

	params.Blur = Blur;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ToggleTemporaryBackground
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerIngameSubmenuWidget* NewSubMenu                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MenuContainer_C::ToggleTemporaryBackground(class UTigerIngameSubmenuWidget* NewSubMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ToggleTemporaryBackground"));

	struct
	{
		class UTigerIngameSubmenuWidget* NewSubMenu;
	} params = {};

	params.NewSubMenu = NewSubMenu;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnPartyUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::OnPartyUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnPartyUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnCurrencyButtonReleased
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::OnCurrencyButtonReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnCurrencyButtonReleased"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ClosePremiumCurrencyPopUpMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::ClosePremiumCurrencyPopUpMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ClosePremiumCurrencyPopUpMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenPremiumCurrencyPopUpMenu
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InItemName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            InCost                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_PremiumCurrencyPopUp_C* OpenedPopUpMenu                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MenuContainer_C::OpenPremiumCurrencyPopUpMenu(const struct FText& InItemName, int InCost, class UTBP_UI_PremiumCurrencyPopUp_C** OpenedPopUpMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenPremiumCurrencyPopUpMenu"));

	struct
	{
		struct FText                   InItemName;
		int                            InCost;
		class UTBP_UI_PremiumCurrencyPopUp_C* OpenedPopUpMenu;
	} params = {};

	params.InItemName = InItemName;
	params.InCost = InCost;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OpenedPopUpMenu != nullptr)
		*OpenedPopUpMenu = params.OpenedPopUpMenu;
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.HasValidString
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           HasValidString                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MenuContainer_C::HasValidString(const struct FText& InText, bool* HasValidString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.HasValidString"));

	struct
	{
		struct FText                   InText;
		bool                           HasValidString;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasValidString != nullptr)
		*HasValidString = params.HasValidString;
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSubMenuForActiveIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::OpenSubMenuForActiveIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSubMenuForActiveIndex"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SetupButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::SetupButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SetupButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.IncrementActiveMenuIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::IncrementActiveMenuIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.IncrementActiveMenuIndex"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.DecrementActiveMenuIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::DecrementActiveMenuIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.DecrementActiveMenuIndex"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSystem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::OpenSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSystem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.CreateMenu
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UTigerIngameSubmenuWidget*/ SubMenuClass                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MenuContainer_C::CreateMenu(class UClass* /*UTigerIngameSubmenuWidget*/ SubMenuClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.CreateMenu"));

	struct
	{
		class UClass* /*UTigerIngameSubmenuWidget*/ SubMenuClass;
	} params = {};

	params.SubMenuClass = SubMenuClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_MenuContainer_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDoubleClick"));

	struct
	{
		struct FGeometry               InMyGeometry;
		struct FPointerEvent           InMouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_MenuContainer_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDown"));

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


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.InitializeMenus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::InitializeMenus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.InitializeMenus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheRight
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::SelectMenuToTheRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheRight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheLeft
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::SelectMenuToTheLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheLeft"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.LocalPlayerSpawned
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::LocalPlayerSpawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.LocalPlayerSpawned"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MenuContainer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PreConstruct"));

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


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ConstructSubMenusIfNotConstructed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::ConstructSubMenusIfNotConstructed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ConstructSubMenusIfNotConstructed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuOnClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerIngameSubmenuWidget* SubmenuWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MenuContainer_C::SelectMenuOnClick(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuOnClick"));

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


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ToggleUIVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::ToggleUIVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ToggleUIVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMenuSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::OnMenuSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMenuSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::PartyUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate2
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPartyId           InPartyId                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FString                 InJoiningPlayerId              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MenuContainer_C::PartyUpdate2(const struct FTigerPartyId& InPartyId, const struct FString& InJoiningPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate2"));

	struct
	{
		struct FTigerPartyId           InPartyId;
		struct FString                 InJoiningPlayerId;
	} params = {};

	params.InPartyId = InPartyId;
	params.InJoiningPlayerId = InJoiningPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__TBP_UI_MenuContainer_CurrencyButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MenuContainer_C::BndEvt__TBP_UI_MenuContainer_CurrencyButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__TBP_UI_MenuContainer_CurrencyButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ExecuteUbergraph_TBP_UI_MenuContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MenuContainer_C::ExecuteUbergraph_TBP_UI_MenuContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ExecuteUbergraph_TBP_UI_MenuContainer"));

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
