// Fill out your copyright notice in the Description page of Project Settings.

#include "gaem.h"
#include "Gun.h"


AGun::AGun(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	damage = 10.f;
	fireRate = 10.f;
	speed = 100.f;

}


