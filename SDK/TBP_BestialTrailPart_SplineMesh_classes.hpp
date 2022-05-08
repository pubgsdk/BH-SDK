#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BestialTrailPart_SplineMesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C
// 0x0010 (0x0590 - 0x0580)
class UTBP_BestialTrailPart_SplineMesh_C : public UTigerBestialTrailPart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class ATigerBestialTrailVisualizer*                Visualizer;                                               // 0x0588(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C"));
		return ptr;
	}


	void Setup(const struct FVector& Start_Location, const struct FVector& End_Location, const struct FVector& End_Tangent, float New_Dissappear_Time_Stamp);
	void ScheduleFade(float Dissappear_At);
	void Fade_Out();
	void ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
