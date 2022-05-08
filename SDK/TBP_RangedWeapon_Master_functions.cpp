// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RangedWeapon_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.GetRangedWeaponCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_RangedWeaponCategories> RangedWeaponCategory           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_RangedWeapon_Master_C::GetRangedWeaponCategory(TEnumAsByte<ENUM_RangedWeaponCategories>* RangedWeaponCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.GetRangedWeaponCategory"));

	struct
	{
		TEnumAsByte<ENUM_RangedWeaponCategories> RangedWeaponCategory;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RangedWeaponCategory != nullptr)
		*RangedWeaponCategory = params.RangedWeaponCategory;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.StandardSpread 16
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState RandomState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::StandardSpread_16(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.StandardSpread 16"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FTigerRangedRandomState RandomState;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomState != nullptr)
		*RandomState = params.RandomState;

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Horizontal Line
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState RandomState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::Horizontal_Line(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Horizontal Line"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FTigerRangedRandomState RandomState;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomState != nullptr)
		*RandomState = params.RandomState;

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Tri
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState RandomState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::Tri(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Tri"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FTigerRangedRandomState RandomState;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomState != nullptr)
		*RandomState = params.RandomState;

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Vertical Line
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState RandomState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::Vertical_Line(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Vertical Line"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FTigerRangedRandomState RandomState;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomState != nullptr)
		*RandomState = params.RandomState;

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.StandardSpread 8
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState RandomState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::StandardSpread_8(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.StandardSpread 8"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FTigerRangedRandomState RandomState;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomState != nullptr)
		*RandomState = params.RandomState;

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.StandardSpread 12
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState RandomState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::StandardSpread_12(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.StandardSpread 12"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FTigerRangedRandomState RandomState;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomState != nullptr)
		*RandomState = params.RandomState;

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.NeoArmstrongCycloneJetArmstrongCannon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState RandomState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::NeoArmstrongCycloneJetArmstrongCannon(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.NeoArmstrongCycloneJetArmstrongCannon"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FTigerRangedRandomState RandomState;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomState != nullptr)
		*RandomState = params.RandomState;

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.ProjectileDirectionList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState RandomState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::ProjectileDirectionList(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.ProjectileDirectionList"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FTigerRangedRandomState RandomState;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomState != nullptr)
		*RandomState = params.RandomState;

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.DefaultShotgunSpread
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState RandomState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::DefaultShotgunSpread(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.DefaultShotgunSpread"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FTigerRangedRandomState RandomState;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomState != nullptr)
		*RandomState = params.RandomState;

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.RowBasedGrid
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShouldBeInsideSpreadRadius     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Rows                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::RowBasedGrid(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, bool ShouldBeInsideSpreadRadius, int Rows)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.RowBasedGrid"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		bool                           ShouldBeInsideSpreadRadius;
		int                            Rows;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;
	params.ShouldBeInsideSpreadRadius = ShouldBeInsideSpreadRadius;
	params.Rows = Rows;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.SmileyFace :D
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::SmileyFace__D(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.SmileyFace :D"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.CircularSpread
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::CircularSpread(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.CircularSpread"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.TrueShotgunSpread
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState RandomState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::TrueShotgunSpread(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.TrueShotgunSpread"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FTigerRangedRandomState RandomState;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomState != nullptr)
		*RandomState = params.RandomState;

	return params.ReturnValue;
}


// Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Triangle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 In_Dir                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_RangedWeapon_Master_C::Triangle(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Triangle"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		int                            BulletIndex;
		struct FVector                 In_Dir;
		struct FVector                 ReturnValue;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
