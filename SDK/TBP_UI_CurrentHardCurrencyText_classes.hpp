#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CurrentHardCurrencyText_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C
// 0x0074 (0x02F4 - 0x0280)
class UTBP_UI_CurrentHardCurrencyText_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      CurrencyImage;                                            // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   CurrencyText;                                             // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                RootCanvas;                                               // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FSlateColor                                 TintSlateColor;                                           // 0x02A0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              Currency_Image_Size;                                      // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         RichTextFont;                                             // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	int                                                OldPremiumCurrencyBalance;                                // 0x02E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	int                                                CurrentPremiumCurrencyBalance;                            // 0x02E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 HardCurrencyCurveAnim;                                    // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PremiumCurrencyBalanceChangedTimeStamp;                   // 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C"));
		return ptr;
	}


	void SetCurrencyCountVisibility();
	int GetInterpolatedPremiumCurrencyBalance();
	void SetCurrencyAmount(int CurrencyAmount);
	void UpdateToCurrentPlayerAmount();
	void SetCurrencyAppearance();
	void OnPlayerStateCreated(class ATigerPlayerState* TigerPlayerState);
	void Construct();
	void OnClientTransactionalPlayerDataChangedEvent(const struct FTigerPersistentPlayerTransactionalData& TransactionalPlayerData);
	void Destruct();
	void ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
