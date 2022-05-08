#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_RooftopWindow_11_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RooftopWindow_11.BP_RooftopWindow_10_C
// 0x0014 (0x02E8 - 0x02D4)
class ABP_RooftopWindow_10_C : public ABP_RooftopWindow_Master_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	TArray<class UStaticMesh*>                         MeshArray;                                                // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RooftopWindow_11.BP_RooftopWindow_10_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
