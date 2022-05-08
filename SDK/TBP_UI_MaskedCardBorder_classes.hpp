#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MaskedCardBorder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C
// 0x0041 (0x0191 - 0x0150)
class UTBP_UI_MaskedCardBorder_C : public UTigerDeferredGroupRetainerBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0150(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	float                                              InitialCornerRadius;                                      // 0x0158(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              InitialBorderWidth;                                       // 0x015C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FLinearColor                                InitialBorderColor;                                       // 0x0160(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  InitialWeatheringTexture;                                 // 0x0170(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              InitialWeatheringOpacity;                                 // 0x0178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              InitialWeatheringWidth;                                   // 0x017C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              InitialWeatheringFadeWidth;                               // 0x0180(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              InitialWeatheringScale;                                   // 0x0184(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FVector2D                                   InitialWeatheringOffset;                                  // 0x0188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bRandomizeInitialWeatheringOffset;                        // 0x0190(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C"));
		return ptr;
	}


	void SetWeatheringOpacity(float InWeatheringOpacity);
	void RandomizeWeatheringOffset();
	void SetWeatheringOffset(const struct FVector2D& InWeatheringOffset);
	void SetWeatheringScale(float InWeatheringScale);
	void SetWeatheringFadeWidth(float InWeatheringFadeWidth);
	void SetWeatheringWidth(float InWeatheringWidth);
	void SetWeatheringTexture(class UTexture2D* InWeatheringTexture);
	void SetBorderColor(const struct FLinearColor& InBorderColor);
	void SetBorderWidth(float InBorderWidth);
	void SetCornerRadius(float InCornerRadius);
	void InitializeParameters();
	void Construct();
	void ExecuteUbergraph_TBP_UI_MaskedCardBorder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
