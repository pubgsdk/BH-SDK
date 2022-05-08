// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weather_Controller_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weather_Controller.BP_Weather_Controller_C.GetCameraLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 OutVector                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::GetCameraLocation(struct FVector* OutVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.GetCameraLocation"));

	struct
	{
		struct FVector                 OutVector;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutVector != nullptr)
		*OutVector = params.OutVector;
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateOverrideSky
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UObject*>         InLoadedObjects                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_Weather_Controller_C::UpdateOverrideSky(TArray<class UObject*> InLoadedObjects)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateOverrideSky"));

	struct
	{
		TArray<class UObject*>         InLoadedObjects;
	} params = {};

	params.InLoadedObjects = InLoadedObjects;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherAudioRTPCs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Weather_Controller_C::SetWeatherAudioRTPCs()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherAudioRTPCs"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.LightningWave
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InTime                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InLightningLifetime            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InNrLightningStrikes           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          OutWave                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::LightningWave(float InTime, float InLightningLifetime, float InNrLightningStrikes, float* OutWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.LightningWave"));

	struct
	{
		float                          InTime;
		float                          InLightningLifetime;
		float                          InNrLightningStrikes;
		float                          OutWave;
	} params = {};

	params.InTime = InTime;
	params.InLightningLifetime = InLightningLifetime;
	params.InNrLightningStrikes = InNrLightningStrikes;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutWave != nullptr)
		*OutWave = params.OutWave;
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.Update Prague Sky
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UObject*>         InLoadedObjects                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_Weather_Controller_C::Update_Prague_Sky(TArray<class UObject*> InLoadedObjects)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.Update Prague Sky"));

	struct
	{
		TArray<class UObject*>         InLoadedObjects;
	} params = {};

	params.InLoadedObjects = InLoadedObjects;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateGlobalPPV
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Weather_Controller_C::UpdateGlobalPPV()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateGlobalPPV"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraSystem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNiagaraComponent*       InSystem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::UpdateNiagaraSystem(class UNiagaraComponent* InSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraSystem"));

	struct
	{
		class UNiagaraComponent*       InSystem;
	} params = {};

	params.InSystem = InSystem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateAllActors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Weather_Controller_C::UpdateAllActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateAllActors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenarioParameters
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDA_WeatherScenario_C*   WeatherScenario                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::SetWeatherScenarioParameters(class UDA_WeatherScenario_C* WeatherScenario)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenarioParameters"));

	struct
	{
		class UDA_WeatherScenario_C*   WeatherScenario;
	} params = {};

	params.WeatherScenario = WeatherScenario;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenario
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerWeatherScenarioData* WeatherScenario                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::SetWeatherScenario(class UTigerWeatherScenarioData* WeatherScenario)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenario"));

	struct
	{
		class UTigerWeatherScenarioData* WeatherScenario;
	} params = {};

	params.WeatherScenario = WeatherScenario;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.SetServerWeather
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            WeatherOverride                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::SetServerWeather(int WeatherOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.SetServerWeather"));

	struct
	{
		int                            WeatherOverride;
	} params = {};

	params.WeatherOverride = WeatherOverride;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraWeatherParameters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::UpdateNiagaraWeatherParameters(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraWeatherParameters"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraCameraAndNiagaraParticles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::UpdateNiagaraCameraAndNiagaraParticles(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraCameraAndNiagaraParticles"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.SetNPCSightModifier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Modifier                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::SetNPCSightModifier(float Modifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.SetNPCSightModifier"));

	struct
	{
		float                          Modifier;
	} params = {};

	params.Modifier = Modifier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherParameters
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDA_WeatherScenario_C*   WeatherScenario                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::SetWeatherParameters(class UDA_WeatherScenario_C* WeatherScenario)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherParameters"));

	struct
	{
		class UDA_WeatherScenario_C*   WeatherScenario;
	} params = {};

	params.WeatherScenario = WeatherScenario;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Weather_Controller_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_DC0B365449CA096251058EB8A8F31B9F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::OnLoaded_DC0B365449CA096251058EB8A8F31B9F(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_DC0B365449CA096251058EB8A8F31B9F"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_4BFA290045938F3D795460979602E7CF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::OnLoaded_4BFA290045938F3D795460979602E7CF(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_4BFA290045938F3D795460979602E7CF"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_20562D87404E74DCF4D9B889FFC5C3D6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::OnLoaded_20562D87404E74DCF4D9B889FFC5C3D6(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_20562D87404E74DCF4D9B889FFC5C3D6"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_7559EC034D4951730F8F999663014852
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::OnLoaded_7559EC034D4951730F8F999663014852(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_7559EC034D4951730F8F999663014852"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Weather_Controller_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.HandleOnWeatherSenarioChangedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerWeatherScenarioData* WeatherScenarioData            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::HandleOnWeatherSenarioChangedEvent(class UTigerWeatherScenarioData* WeatherScenarioData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.HandleOnWeatherSenarioChangedEvent"));

	struct
	{
		class UTigerWeatherScenarioData* WeatherScenarioData;
	} params = {};

	params.WeatherScenarioData = WeatherScenarioData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.TigerSetFogDensity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          FogDensity                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::TigerSetFogDensity(float FogDensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.TigerSetFogDensity"));

	struct
	{
		float                          FogDensity;
	} params = {};

	params.FogDensity = FogDensity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.Lightning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Weather_Controller_C::Lightning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.Lightning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_Weather_Controller.BP_Weather_Controller_C.ExecuteUbergraph_BP_Weather_Controller
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_Weather_Controller_C::ExecuteUbergraph_BP_Weather_Controller(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Weather_Controller.BP_Weather_Controller_C.ExecuteUbergraph_BP_Weather_Controller"));

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
