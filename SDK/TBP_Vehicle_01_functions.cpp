// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Vehicle_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.GetPingInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTS_PingableActorInfo   OutInfo                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Vehicle_01_C::GetPingInfo(struct FTS_PingableActorInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.GetPingInfo"));

	struct
	{
		struct FTS_PingableActorInfo   OutInfo;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.GetPingCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   OutCategory                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Vehicle_01_C::GetPingCategory(struct FName* OutCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.GetPingCategory"));

	struct
	{
		struct FName                   OutCategory;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutCategory != nullptr)
		*OutCategory = params.OutCategory;
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.IsPolice
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPolice                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Vehicle_01_C::IsPolice(bool* IsPolice)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.IsPolice"));

	struct
	{
		bool                           IsPolice;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsPolice != nullptr)
		*IsPolice = params.IsPolice;
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.AUDIO_RandomizeCarAlarms
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::AUDIO_RandomizeCarAlarms()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.AUDIO_RandomizeCarAlarms"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SpawnGlassShatterEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Vehicle_01_C::SpawnGlassShatterEffect(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SpawnGlassShatterEffect"));

	struct
	{
		struct FVector                 Location;
	} params = {};

	params.Location = Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.DisableAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::DisableAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.DisableAlarm"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.Set Custom Primitive Vector
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*> Static_Meshes                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// bool                           Runtime                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ESharkCustomPrimitiveVector3DataName NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Vehicle_01_C::Set_Custom_Primitive_Vector(bool Runtime, ESharkCustomPrimitiveVector3DataName NewParam, const struct FVector& Value, TArray<class UStaticMeshComponent*>* Static_Meshes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.Set Custom Primitive Vector"));

	struct
	{
		TArray<class UStaticMeshComponent*> Static_Meshes;
		bool                           Runtime;
		ESharkCustomPrimitiveVector3DataName NewParam;
		struct FVector                 Value;
	} params = {};

	params.Runtime = Runtime;
	params.NewParam = NewParam;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Static_Meshes != nullptr)
		*Static_Meshes = params.Static_Meshes;
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.Set Custom Primitive Float
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*> Static_Meshes                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// bool                           Runtime                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ESharkCustomPrimitiveFloatDataName NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Vehicle_01_C::Set_Custom_Primitive_Float(bool Runtime, ESharkCustomPrimitiveFloatDataName NewParam, float Value, TArray<class UStaticMeshComponent*>* Static_Meshes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.Set Custom Primitive Float"));

	struct
	{
		TArray<class UStaticMeshComponent*> Static_Meshes;
		bool                           Runtime;
		ESharkCustomPrimitiveFloatDataName NewParam;
		float                          Value;
	} params = {};

	params.Runtime = Runtime;
	params.NewParam = NewParam;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Static_Meshes != nullptr)
		*Static_Meshes = params.Static_Meshes;
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.IsEntity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATBP_Vehicle_01_C::IsEntity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.IsEntity"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetFrontLightColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerSpotLightComponent* TigerSpotLight                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerSpotLightComponent* OutTigerSpotLight              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Vehicle_01_C::SetFrontLightColor(class UTigerSpotLightComponent* TigerSpotLight, class UTigerSpotLightComponent** OutTigerSpotLight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetFrontLightColor"));

	struct
	{
		class UTigerSpotLightComponent* TigerSpotLight;
		class UTigerSpotLightComponent* OutTigerSpotLight;
	} params = {};

	params.TigerSpotLight = TigerSpotLight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutTigerSpotLight != nullptr)
		*OutTigerSpotLight = params.OutTigerSpotLight;
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetCollision
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::SetCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetCollision"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetBranding
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::SetBranding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetBranding"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetUntintedColors
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*> Meshes                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ATBP_Vehicle_01_C::SetUntintedColors(TArray<class UStaticMeshComponent*>* Meshes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetUntintedColors"));

	struct
	{
		TArray<class UStaticMeshComponent*> Meshes;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetColorTintPresets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::SetColorTintPresets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetColorTintPresets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetMeshComponents
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::SetMeshComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetMeshComponents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetParametersPerVehicle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::SetParametersPerVehicle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetParametersPerVehicle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.PlaceObjects
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::PlaceObjects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.PlaceObjects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.CustomizableElements
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*> Meshes                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ATBP_Vehicle_01_C::CustomizableElements(TArray<class UStaticMeshComponent*>* Meshes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.CustomizableElements"));

	struct
	{
		TArray<class UStaticMeshComponent*> Meshes;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.Color
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*> Meshes                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void ATBP_Vehicle_01_C::Color(TArray<class UStaticMeshComponent*>* Meshes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.Color"));

	struct
	{
		TArray<class UStaticMeshComponent*> Meshes;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.TurnLightsOnOrOff
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsRuntime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Vehicle_01_C::TurnLightsOnOrOff(bool IsRuntime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.TurnLightsOnOrOff"));

	struct
	{
		bool                           IsRuntime;
	} params = {};

	params.IsRuntime = IsRuntime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.StaticMeshComponentHit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FVector                 ImpactVelocity                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Vehicle_01_C::StaticMeshComponentHit(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.StaticMeshComponentHit"));

	struct
	{
		struct FHitResult              HitResult;
		struct FVector                 ImpactVelocity;
	} params = {};

	params.HitResult = HitResult;
	params.ImpactVelocity = ImpactVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.TriggerAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::TriggerAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.TriggerAlarm"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnObjectActivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::OnObjectActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnObjectActivated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnObjectDeactivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::OnObjectDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnObjectDeactivated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnRebuild
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::OnRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnRebuild"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.ActivateAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Vehicle_01_C::ActivateAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.ActivateAlarm"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Vehicle_01_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnCharacterHit
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InOverlappingCharacter         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 InNormalImpulse                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              InHitResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ATBP_Vehicle_01_C::OnCharacterHit(class ATigerCharacter* InOverlappingCharacter, const struct FVector& InNormalImpulse, const struct FHitResult& InHitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnCharacterHit"));

	struct
	{
		class ATigerCharacter*         InOverlappingCharacter;
		struct FVector                 InNormalImpulse;
		struct FHitResult              InHitResult;
	} params = {};

	params.InOverlappingCharacter = InOverlappingCharacter;
	params.InNormalImpulse = InNormalImpulse;
	params.InHitResult = InHitResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vehicle_01.TBP_Vehicle_01_C.ExecuteUbergraph_TBP_Vehicle_01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Vehicle_01_C::ExecuteUbergraph_TBP_Vehicle_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01.TBP_Vehicle_01_C.ExecuteUbergraph_TBP_Vehicle_01"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
