#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TableSet_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TableSet_02.BP_TableSet_02_C
// 0x0028 (0x0268 - 0x0240)
class ABP_TableSet_02_C : public ATigerRebuildableActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               ShadowCasting;                                            // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	int                                                Type_Of_Chair;                                            // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Type_Of_Table;                                            // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               off;                                                      // 0x0254(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               off02;                                                    // 0x0255(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               off03;                                                    // 0x0256(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               off04;                                                    // 0x0257(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               off05;                                                    // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class UBP_TableSetDataInterface_C*                 TableSet02CDO;                                            // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TableSet_02.BP_TableSet_02_C"));
		return ptr;
	}


	void SetChairMeshAndTransformY(float InRotMin1, float InRotMax1, int InSeedOffset1, float InRotMin2, float InRotMax2, int InSeedOffset2, class UStaticMeshComponent* InMesh);
	void SetChairMeshAndTransformX(float InRotMin1, float InRotMax1, int InSeedOffset1, float InRotMin2, float InRotMax2, int InSeedOffset2, class UStaticMeshComponent* InMesh);
	void RandomFromWorld(float Rot_min, float Rot_max, int Seed_offset, int IntOutMax, int* RandomSeededInt, float* OutRandomFloat);
	void OnRebuild();
	void ExecuteUbergraph_BP_TableSet_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
