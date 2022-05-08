#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PremiumCurrency_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C
// 0x0080 (0x0358 - 0x02D8)
class UTBP_UI_PremiumCurrency_C : public UTigerPremiumCurrencyUiScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            FailedLoadCurrencyPacks;                                  // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowConfirm;                                              // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USizeBox*                                    CloseIfPopUpContainer;                                    // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        CloseIfPopUpMenuButton;                                   // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    ConfirmPopup;                                             // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              CurrencyBox;                                              // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    GetCurrencyPackOverlay;                                   // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      InputBlock_Dark;                                          // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ConfirmPurchase_Premium_C*           TBP_UI_ConfirmPurchase_Premium;                           // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Platform_StoreOverlayIcon_C*         TBP_UI_Platform_StoreOverlayIcon;                         // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UTBP_UI_PremiumCurrency_Button_C*>    CurrencyButtons;                                          // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               bIsPopUpMenu;                                             // 0x0340(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnCloseStore;                                             // 0x0348(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C"));
		return ptr;
	}


	void SetTokensAsUnavailable();
	void PopUpMenuSetup(bool Index);
	void Construct();
	void On_Currency_Button_Clicked(const struct FTigerPremiumCurrencyPackData& InPremiumPackData);
	void OnConfirmPopupClosed(bool ConfirmedPurchase);
	void OnCurrencyPacksUpdated(TArray<struct FTigerPremiumCurrencyPackData> InPremiumCurrencyPacks);
	void OnPurchaseHandled(bool bInWasSuccesful, TEnumAsByte<EShPaymentResult> InPurchaseResult);
	void BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Open();
	void Close();
	void OnCurrencyPacksUpdateFailed();
	void OnCloseCurrencyStore();
	void ExecuteUbergraph_TBP_UI_PremiumCurrency(int EntryPoint);
	void OnCloseStore__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
