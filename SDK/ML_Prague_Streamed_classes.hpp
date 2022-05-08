#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ML_Prague_Streamed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ML_Prague_Streamed.ML_Prague_Streamed_C
// 0x0008 (0x0238 - 0x0230)
class AML_Prague_Streamed_C : public ATigerLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ML_Prague_Streamed.ML_Prague_Streamed_C"));
		return ptr;
	}


	class UTigerDistrictData* GetDistrictData();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ML_Prague_Streamed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
