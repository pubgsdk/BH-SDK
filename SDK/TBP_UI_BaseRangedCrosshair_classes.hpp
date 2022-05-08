#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_BaseRangedCrosshair_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C
// 0x00C8 (0x0380 - 0x02B8)
class UTBP_UI_BaseRangedCrosshair_C : public UTigerWeaponCrosshairWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                CanvasParent;                                             // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      ScopeVignetteImage;                                       // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UTBP_UI_Image_C*>                     Crosshairs;                                               // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FSlateBrush                                 ScopeVignette;                                            // 0x02E0(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               bShouldShowScopeVignette;                                 // 0x0368(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	TArray<class UTBP_UI_Image_C*>                     ScalingCrosshairs;                                        // 0x0370(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C"));
		return ptr;
	}


	float GetBrushAspect(const struct FSlateBrush& SlateBrush);
	void GetFov(float* OutFov);
	void SetupScalingCrosshairImage(const struct FTigerWeaponScalingCrosshairSlot& ScalingCrosshairSlot);
	void SetupCrosshairImage(const struct FTigerWeaponCrosshairSlot& TigerWeaponCrosshairSlot);
	void SetupScopeVignette();
	float GetAspectRatio();
	void GetCrosshairScale(float InScreenSpaceSpread, float InAspectRatio, struct FVector2D* Scale);
	void UpdateCrosshairPositions();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void ExecuteUbergraph_TBP_UI_BaseRangedCrosshair(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
