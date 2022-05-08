#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CompassObject_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_CompassObject.TBP_UI_CompassObject_C
// 0x0020 (0x02C0 - 0x02A0)
class UTBP_UI_CompassObject_C : public UTigerCompassMarkerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                CompassMarker;                                            // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      CompassMarkerImage;                                       // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    CompassMarkerMaterial;                                    // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_CompassObject.TBP_UI_CompassObject_C"));
		return ptr;
	}


	void GetCompassObjectScreenMinMax(float* Screen_Pos_Min, float* Screen_Pos_Max);
	void GetProximityToCompassAreaCenter(float* _0_1_Proximity);
	void GetObjectImageSizeX(float* Image_Size_X);
	void GetCompassAreaSizeX(float* Compass_Area_Size_X);
	void UpdatePosition();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetColorBasedOnPlayerIndex(unsigned char InIndex);
	void ExecuteUbergraph_TBP_UI_CompassObject(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
