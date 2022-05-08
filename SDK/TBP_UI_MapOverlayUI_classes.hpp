#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MapOverlayUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C
// 0x0040 (0x02E0 - 0x02A0)
class UTBP_UI_MapOverlayUI_C : public UTigerMapUi
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            TintRed;                                                  // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                MapCanvas;                                                // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MapIncenseLine_C*                    TBP_UI_MapIncenseLine;                                    // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MapMarkerOverlay_C*                  TBP_UI_MapMarkerOverlay;                                  // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               bIsMinimap;                                               // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               bDelayMapMarkerCreation;                                  // 0x02C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02CA(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    RedGasDataMaterialInstance;                               // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerPlayerMasqueradeComponent*             LocalMasqueradeComponent;                                 // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_MapOverlayUI.TBP_UI_MapOverlayUI_C"));
		return ptr;
	}


	ESlateVisibility ShouldShowBloodVeinTrack();
	void UpdateMapIncenseLineOld();
	struct FVector2D ToMapTextureSpace(const struct FVector2D& ZeroToOneSpace);
	void InitializeMapMarkers(class UClass* /*UTigerMapMarkerWidget*/ InRestrictToClass, bool bInFadeIn);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnMasqueradeStateChanged(bool InIsMasqueradeBreached, ETigerAIPlayerAction InPlayerAction);
	void ExecuteUbergraph_TBP_UI_MapOverlayUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
