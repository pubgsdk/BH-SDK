#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_Utilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_Utilities.TBFL_Utilities_C
// 0x0000 (0x0028 - 0x0028)
class UTBFL_Utilities_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBFL_Utilities.TBFL_Utilities_C"));
		return ptr;
	}


	static void SortFloatArray(bool Descending, class UObject* __WorldContext, TArray<float>* InputFloatArray, TArray<float>* OutputArray);
	static void DistanceToBox(const struct FVector& Position, const struct FVector& Bounds, class UObject* __WorldContext, float* Distance);
	static void Compute2DCentroid(class UObject* __WorldContext, TArray<struct FVector>* Array, struct FVector* OutCentroid);
	static void GetCurveValueVector(class UCurveVector* Curve, float Time, class UObject* __WorldContext, struct FVector* Value);
	static void GetCurveValueColor(class UCurveLinearColor* Curve, float Time, class UObject* __WorldContext, struct FLinearColor* Value);
	static void GetCurveValueFloat(class UCurveFloat* Curve, float Time, class UObject* __WorldContext, float* Value);
	static void ForceClampMax(int Max, class UObject* __WorldContext, int* Variable);
	static void ForceClamp(class UObject* __WorldContext, int* Variable, TArray<class UObject*>* Array);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
