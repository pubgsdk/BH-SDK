// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_Utilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBFL_Utilities.TBFL_Utilities_C.SortFloatArray
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<float>                  InputFloatArray                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Descending                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<float>                  OutputArray                    (CPF_Parm, CPF_OutParm)

void UTBFL_Utilities_C::SortFloatArray(bool Descending, class UObject* __WorldContext, TArray<float>* InputFloatArray, TArray<float>* OutputArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Utilities.TBFL_Utilities_C.SortFloatArray"));

	struct
	{
		TArray<float>                  InputFloatArray;
		bool                           Descending;
		class UObject*                 __WorldContext;
		TArray<float>                  OutputArray;
	} params = {};

	params.Descending = Descending;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (InputFloatArray != nullptr)
		*InputFloatArray = params.InputFloatArray;
	if (OutputArray != nullptr)
		*OutputArray = params.OutputArray;
}


// Function TBFL_Utilities.TBFL_Utilities_C.DistanceToBox
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Bounds                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Utilities_C::DistanceToBox(const struct FVector& Position, const struct FVector& Bounds, class UObject* __WorldContext, float* Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Utilities.TBFL_Utilities_C.DistanceToBox"));

	struct
	{
		struct FVector                 Position;
		struct FVector                 Bounds;
		class UObject*                 __WorldContext;
		float                          Distance;
	} params = {};

	params.Position = Position;
	params.Bounds = Bounds;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function TBFL_Utilities.TBFL_Utilities_C.Compute2DCentroid
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FVector>         Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 OutCentroid                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Utilities_C::Compute2DCentroid(class UObject* __WorldContext, TArray<struct FVector>* Array, struct FVector* OutCentroid)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Utilities.TBFL_Utilities_C.Compute2DCentroid"));

	struct
	{
		TArray<struct FVector>         Array;
		class UObject*                 __WorldContext;
		struct FVector                 OutCentroid;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
	if (OutCentroid != nullptr)
		*OutCentroid = params.OutCentroid;
}


// Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueVector
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UCurveVector*            Curve                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Utilities_C::GetCurveValueVector(class UCurveVector* Curve, float Time, class UObject* __WorldContext, struct FVector* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueVector"));

	struct
	{
		class UCurveVector*            Curve;
		float                          Time;
		class UObject*                 __WorldContext;
		struct FVector                 Value;
	} params = {};

	params.Curve = Curve;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Value != nullptr)
		*Value = params.Value;
}


// Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UCurveLinearColor*       Curve                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Utilities_C::GetCurveValueColor(class UCurveLinearColor* Curve, float Time, class UObject* __WorldContext, struct FLinearColor* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueColor"));

	struct
	{
		class UCurveLinearColor*       Curve;
		float                          Time;
		class UObject*                 __WorldContext;
		struct FLinearColor            Value;
	} params = {};

	params.Curve = Curve;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Value != nullptr)
		*Value = params.Value;
}


// Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueFloat
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UCurveFloat*             Curve                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Utilities_C::GetCurveValueFloat(class UCurveFloat* Curve, float Time, class UObject* __WorldContext, float* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueFloat"));

	struct
	{
		class UCurveFloat*             Curve;
		float                          Time;
		class UObject*                 __WorldContext;
		float                          Value;
	} params = {};

	params.Curve = Curve;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Value != nullptr)
		*Value = params.Value;
}


// Function TBFL_Utilities.TBFL_Utilities_C.ForceClampMax
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Variable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Utilities_C::ForceClampMax(int Max, class UObject* __WorldContext, int* Variable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Utilities.TBFL_Utilities_C.ForceClampMax"));

	struct
	{
		int                            Variable;
		int                            Max;
		class UObject*                 __WorldContext;
	} params = {};

	params.Max = Max;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Variable != nullptr)
		*Variable = params.Variable;
}


// Function TBFL_Utilities.TBFL_Utilities_C.ForceClamp
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Variable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UObject*>         Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Utilities_C::ForceClamp(class UObject* __WorldContext, int* Variable, TArray<class UObject*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Utilities.TBFL_Utilities_C.ForceClamp"));

	struct
	{
		int                            Variable;
		TArray<class UObject*>         Array;
		class UObject*                 __WorldContext;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Variable != nullptr)
		*Variable = params.Variable;
	if (Array != nullptr)
		*Array = params.Array;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
