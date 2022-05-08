#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_StoreEntry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_StoreEntry.TBP_UI_StoreEntry_C
// 0x0048 (0x0318 - 0x02D0)
class UTBP_UI_StoreEntry_C : public UTigerStoreEntryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UButton*                                     BuyButton;                                                // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      EntryImage;                                               // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CurrencyText_C*                      TBP_UI_CurrencyText;                                      // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  DefaultImage;                                             // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnClicked;                                                // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnHovered;                                                // 0x0308(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_StoreEntry.TBP_UI_StoreEntry_C"));
		return ptr;
	}


	void OnFail_9165BC0C4F525209541CCD9677982392(class UTexture2DDynamic* Texture);
	void OnSuccess_9165BC0C4F525209541CCD9677982392(class UTexture2DDynamic* Texture);
	void SetStoreEntry(const struct FTigerMetaStoreEntry& InStoreEntry);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_TBP_UI_StoreEntry(int EntryPoint);
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
