#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CurrencyText_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_CurrencyText.TBP_UI_CurrencyText_C
// 0x0094 (0x0314 - 0x0280)
class UTBP_UI_CurrencyText_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      CurrencyImage;                                            // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   CurrencyText;                                             // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                RootCanvas;                                               // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                        CurrencyItemPath;                                         // 0x02A0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FSlateColor                                 TintSlateColor;                                           // 0x02C8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               AutoUpdateCurrency;                                       // 0x02F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	int                                                Currency_Text_Size;                                       // 0x02F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              Currency_Image_Size;                                      // 0x02F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         RichTextFont;                                             // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	int                                                OldHardCurrency;                                          // 0x0310(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_CurrencyText.TBP_UI_CurrencyText_C"));
		return ptr;
	}


	void SetCurrencyAmount(int CurrencyAmount, bool DisplayZeroAsFree);
	void UpdateToCurrentPlayerAmount();
	void OnLoaded_1FBBDA1045CBB28C294A3DB584E90C6E(class UObject* Loaded);
	void Construct();
	void SetCurrencyPath(TSoftClassPtr<class UClass> InCurrencyItemPath);
	void OnPlayerStateCreated(class ATigerPlayerState* TigerPlayerState);
	void OnPremiumCurrencyBalanceChanged(const struct FTigerPersistentPlayerTransactionalData& TransactionalPlayerData);
	void ExecuteUbergraph_TBP_UI_CurrencyText(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
