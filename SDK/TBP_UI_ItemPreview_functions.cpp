// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ItemPreview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.IsPopupOpen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsOpen                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ItemPreview_C::IsPopupOpen(bool* bIsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.IsPopupOpen"));

	struct
	{
		bool                           bIsOpen;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsOpen != nullptr)
		*bIsOpen = params.bIsOpen;
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Set Store Timer if Available
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::Set_Store_Timer_if_Available()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Set Store Timer if Available"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetStoreTimeLeft
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::SetStoreTimeLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetStoreTimeLeft"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Update BuyButton Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::Update_BuyButton_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Update BuyButton Visibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OpenCurrencyPopUpMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::OpenCurrencyPopUpMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OpenCurrencyPopUpMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetUp Buy Button
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::SetUp_Buy_Button()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetUp Buy Button"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.CanAffordItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_ItemPreview_C::CanAffordItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.CanAffordItem"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Reset Camera Offsets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::Reset_Camera_Offsets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Reset Camera Offsets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_ItemPreview_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseButtonUp"));

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


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_ItemPreview_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseMove"));

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


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_ItemPreview_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseButtonDown"));

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


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseWheel
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_ItemPreview_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseWheel"));

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


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetItemDescription
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* In_Item                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ItemPreview_C::SetItemDescription(class UTigerInventoryItemBase* In_Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetItemDescription"));

	struct
	{
		class UTigerInventoryItemBase* In_Item;
	} params = {};

	params.In_Item = In_Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.ProcessBuyItemResponse
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InErrorMessage                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bSuccessfulBuy                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           WasPurchaseSuccessful          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ItemPreview_C::ProcessBuyItemResponse(const struct FText& InErrorMessage, bool bSuccessfulBuy, bool* WasPurchaseSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.ProcessBuyItemResponse"));

	struct
	{
		struct FText                   InErrorMessage;
		bool                           bSuccessfulBuy;
		bool                           WasPurchaseSuccessful;
	} params = {};

	params.InErrorMessage = InErrorMessage;
	params.bSuccessfulBuy = bSuccessfulBuy;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (WasPurchaseSuccessful != nullptr)
		*WasPurchaseSuccessful = params.WasPurchaseSuccessful;
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Setup Item Preview Page
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem Selected_Item                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bIsOwned                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ItemPreview_C::Setup_Item_Preview_Page(const struct FTigerVendorStoreCategoryItem& Selected_Item, bool bIsOwned)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Setup Item Preview Page"));

	struct
	{
		struct FTigerVendorStoreCategoryItem Selected_Item;
		bool                           bIsOwned;
	} params = {};

	params.Selected_Item = Selected_Item;
	params.bIsOwned = bIsOwned;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnBuyConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMetaStoreEntry    StoreEntryToBuy                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bEquipItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ItemPreview_C::OnBuyConfirm(const struct FTigerMetaStoreEntry& StoreEntryToBuy, bool bEquipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnBuyConfirm"));

	struct
	{
		struct FTigerMetaStoreEntry    StoreEntryToBuy;
		bool                           bEquipItem;
	} params = {};

	params.StoreEntryToBuy = StoreEntryToBuy;
	params.bEquipItem = bEquipItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnBuyCancel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::OnBuyCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnBuyCancel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ItemPreview_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On ItemPreview Opened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::On_ItemPreview_Opened()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On ItemPreview Opened"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Right Mouse Down Override
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::Right_Mouse_Down_Override()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Right Mouse Down Override"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On Close Preview
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::On_Close_Preview()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On Close Preview"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnPopupClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::OnPopupClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnPopupClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.TickStoreEntry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::TickStoreEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.TickStoreEntry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Set is Using Gamepad
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewIsProbablyUsingGamepad     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ItemPreview_C::Set_is_Using_Gamepad(bool bNewIsProbablyUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Set is Using Gamepad"));

	struct
	{
		bool                           bNewIsProbablyUsingGamepad;
	} params = {};

	params.bNewIsProbablyUsingGamepad = bNewIsProbablyUsingGamepad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.bLock
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::bLock()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.bLock"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On Mouse Button Up
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           Mouse_Data                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ItemPreview_C::On_Mouse_Button_Up(const struct FPointerEvent& Mouse_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On Mouse Button Up"));

	struct
	{
		struct FPointerEvent           Mouse_Data;
	} params = {};

	params.Mouse_Data = Mouse_Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Track Pan Start Position
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           Mouse_Data                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ItemPreview_C::Track_Pan_Start_Position(const struct FPointerEvent& Mouse_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Track Pan Start Position"));

	struct
	{
		struct FPointerEvent           Mouse_Data;
	} params = {};

	params.Mouse_Data = Mouse_Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.ExecuteUbergraph_TBP_UI_ItemPreview
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ItemPreview_C::ExecuteUbergraph_TBP_UI_ItemPreview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.ExecuteUbergraph_TBP_UI_ItemPreview"));

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


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnCancelBuy__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemPreview_C::OnCancelBuy__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnCancelBuy__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnConfirmBuy__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMetaStoreEntry    StoreEntry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bEquipItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ItemPreview_C::OnConfirmBuy__DelegateSignature(const struct FTigerMetaStoreEntry& StoreEntry, bool bEquipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnConfirmBuy__DelegateSignature"));

	struct
	{
		struct FTigerMetaStoreEntry    StoreEntry;
		bool                           bEquipItem;
	} params = {};

	params.StoreEntry = StoreEntry;
	params.bEquipItem = bEquipItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
