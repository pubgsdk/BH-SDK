#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_HeadConfiguration_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C
// 0x00F0 (0x0348 - 0x0258)
class UTBP_HeadConfiguration_Master_C : public UTigerCharacterHeadConfiguration
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TMap<TEnumAsByte<ENUM_PiercingNames>, struct FTigerCharacterHeadPiercingSocket> PiercingOffsets;                                          // 0x0260(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<TEnumAsByte<ENUM_PiercingNames>, struct FName> PiercingNameMappings;                                     // 0x02B0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTigerCharacterHeadEyewearOffset            EyewearOffset_Nose;                                       // 0x0300(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FTigerCharacterHeadEyewearOffset            EyewearOffset_EarLeft;                                    // 0x0318(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FTigerCharacterHeadEyewearOffset            EyewearOffset_EarRight;                                   // 0x0330(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C"));
		return ptr;
	}


	void GetPiercingSlots(class UTigerCharacterMeshManager* InMeshManager, TSet<struct FString> InFilter, TMap<struct FName, struct FTigerCharacterHeadPiercingSocket>* OutSlots);
	void GatherPoseableMeshSetupData(class UClass* /*UTBP_PoseableMesh_Master_C*/ Mesh, TSet<struct FString> Filter, TArray<struct FTigerCharacterPoseableMeshBoneSetupData>* Data);
	void SetPoseableBeard(class UTigerCharacterBeardCustomization* InBeard, class UTigerCharacterMeshManager* InMeshManager, TSet<struct FString> InFilter);
	void SetEyewearOffset(class UTigerCharacterMeshManager* MeshManager);
	void SetPiercings(class UTigerCharacterPiercingSetCustomization* InPiercingSet, class UTigerCharacterMeshManager* InMeshManager, TSet<struct FString> InFilter);
	void SetPiercingSlotLocationAndRotation(class UTigerCharacterMeshManager* InMeshManager, const struct FName& InName, const struct FVector& InLocation, const struct FRotator& InRotation);
	void ExecuteUbergraph_TBP_HeadConfiguration_Master(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
