#pragma region Local Var //{
var uLocal_0 = 0;
var uLocal_1 = 0;
int iLocal_2 = 0;
int iLocal_3 = 0;
int iLocal_4 = 0;
int iLocal_5 = 0;
int iLocal_6 = 0;
int iLocal_7 = 0;
int iLocal_8 = 0;
int iLocal_9 = 0;
int iLocal_10 = 0;
int iLocal_11 = 0;
var uLocal_12 = 0;
var uLocal_13 = 0;
float fLocal_14 = 0f;
var uLocal_15 = 0;
var uLocal_16 = 0;
int iLocal_17 = 0;
var uLocal_18 = 0;
var uLocal_19 = 0;
char *sLocal_20 = NULL;
float fLocal_21 = 0f;
vector3 vLocal_22 = {0f, 0f, 0f};
float fLocal_25 = 0f;
float fLocal_26 = 0f;
var uLocal_27 = 0;
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
int iLocal_35 = 0;
int iLocal_36 = 0;
struct<4> Local_37[10];
bool bLocal_78 = 0;
int iLocal_79 = 0;
int iLocal_80 = 0;
int iLocal_81 = 0;
int iLocal_82 = 0;
struct<61> Local_83 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
		0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
float fLocal_144 = 0f;
float fLocal_145 = 0f;
float fLocal_146 = 0f;
float fLocal_147 = 0f;
float fLocal_148 = 0f;
float fLocal_149 = 0f;
int iLocal_150 = 0;
int iLocal_151 = 0;
float fLocal_152 = 0f;
float fLocal_153 = 0f;
int iLocal_154 = 0;
int iLocal_155 = 0;
int iLocal_156 = 0;
int iLocal_157 = 0;
vector3 vLocal_158 = {0f, 0f, 0f};
int iLocal_161 = 0;
vector3 vLocal_162[7] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_184[7] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_206 = {0f, 0f, 0f};
vector3 vLocal_209 = {0f, 0f, 0f};
vector3 vLocal_212 = {0f, 0f, 0f};
vector3 vLocal_215 = {0f, 0f, 0f};
vector3 vLocal_218 = {0f, 0f, 0f};
vector3 vLocal_221 = {0f, 0f, 0f};
vector3 vLocal_224 = {0f, 0f, 0f};
vector3 vLocal_227 = {0f, 0f, 0f};
vector3 vLocal_230 = {0f, 0f, 0f};
float fLocal_233[7] = {0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_241[7] = {0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_249 = 0f;
float fLocal_250 = 0f;
float fLocal_251 = 0f;
float fLocal_252 = 0f;
float fLocal_253 = 0f;
float fLocal_254 = 0f;
int iLocal_255 = 0;
int iLocal_256 = 0;
int iLocal_257 = 0;
int iLocal_258 = 0;
int iLocal_259 = 0;
int iLocal_260 = 0;
int iLocal_261 = 0;
int iLocal_262 = 0;
int iLocal_263 = 0;
int iLocal_264 = 0;
int iLocal_265 = 0;
int iLocal_266 = 0;
int iLocal_267 = 0;
int iLocal_268 = 0;
int iLocal_269 = 0;
int iLocal_270 = 0;
int iLocal_271 = 0;
int iLocal_272 = 0;
int iLocal_273 = 0;
int iLocal_274 = 0;
int iLocal_275 = 0;
int iLocal_276 = 0;
int iLocal_277 = 0;
int iLocal_278 = 0;
int iLocal_279 = 0;
int iLocal_280 = 0;
int iLocal_281 = 0;
int iLocal_282 = 0;
int iLocal_283 = 0;
int iLocal_284 = 0;
int iLocal_285 = 0;
int iLocal_286 = 0;
int iLocal_287 = 0;
int iLocal_288 = 0;
int iLocal_289 = 0;
int iLocal_290 = 0;
int iLocal_291 = 0;
int iLocal_292 = 0;
int iLocal_293 = 0;
int iLocal_294 = 0;
int iLocal_295 = 0;
int iLocal_296 = 0;
int iLocal_297 = 0;
int iLocal_298 = 0;
int iLocal_299 = 0;
int iLocal_300 = 0;
var uLocal_301 = 0;
var uLocal_302 = 0;
int iLocal_303 = 0;
int iLocal_304 = 0;
int iLocal_305 = 0;
int iLocal_306 = 0;
int iLocal_307 = 0;
int iLocal_308 = 0;
int iLocal_309 = 0;
int iLocal_310 = 0;
int iLocal_311 = 0;
int iLocal_312 = 0;
int iLocal_313 = 0;
int iLocal_314 = 0;
int iLocal_315 = 0;
int iLocal_316[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_324 = 0;
int iLocal_325 = 0;
int iLocal_326 = 0;
int iLocal_327 = 0;
int iLocal_328 = 0;
int iLocal_329 = 0;
int iLocal_330 = 0;
int iLocal_331 = 0;
int iLocal_332 = 0;
int iLocal_333 = 0;
int iLocal_334 = 0;
int iLocal_335 = 0;
int iLocal_336 = 0;
int iLocal_337 = 0;
int iLocal_338 = 0;
int iLocal_339 = 0;
int iLocal_340 = 0;
int iLocal_341[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_349 = 0;
int iLocal_350 = 0;
int iLocal_351 = 0;
int iLocal_352 = 0;
int iLocal_353 = 0;
int iLocal_354 = 0;
int iLocal_355 = 0;
int iLocal_356 = 0;
int iLocal_357 = 0;
int iLocal_358 = 0;
int iLocal_359 = 0;
int iLocal_360 = 0;
int iLocal_361 = 0;
int iLocal_362 = 0;
int iLocal_363 = 0;
int iLocal_364 = 0;
int iLocal_365 = 0;
int iLocal_366 = 0;
int iLocal_367 = 0;
int iLocal_368 = 0;
int iLocal_369 = 0;
int iLocal_370 = 0;
int iLocal_371 = 0;
int iLocal_372 = 0;
int iLocal_373 = 0;
int iLocal_374 = 0;
int iLocal_375 = 0;
int iLocal_376 = 0;
int iLocal_377 = 0;
int iLocal_378 = 0;
int iLocal_379 = 0;
int iLocal_380 = 0;
int iLocal_381 = 0;
int iLocal_382 = 0;
int iLocal_383 = 0;
int iLocal_384 = 0;
int iLocal_385 = 0;
char *sLocal_386 = NULL;
int iLocal_387 = 0;
int iLocal_388 = 0;
int iLocal_389 = 0;
var *uLocal_390 = NULL;
var uLocal_391 = 0;
var uLocal_392 = 0;
var uLocal_393 = 0;
var uLocal_394 = 0;
var uLocal_395 = 0;
var uLocal_396 = 0;
var uLocal_397 = 0;
var uLocal_398 = 0;
var uLocal_399 = 0;
var uLocal_400 = 0;
var uLocal_401 = 0;
var uLocal_402 = 0;
var uLocal_403 = 0;
var uLocal_404 = 0;
var uLocal_405 = 0;
var uLocal_406 = 0;
var uLocal_407 = 0;
var uLocal_408 = 0;
var uLocal_409 = 0;
var uLocal_410 = 0;
var uLocal_411 = 0;
var uLocal_412 = 0;
var uLocal_413 = 0;
var uLocal_414 = 0;
var uLocal_415 = 0;
var uLocal_416 = 0;
var uLocal_417 = 0;
var uLocal_418 = 0;
var uLocal_419 = 0;
var uLocal_420 = 0;
var uLocal_421 = 0;
var uLocal_422 = 0;
var uLocal_423 = 0;
var uLocal_424 = 0;
var uLocal_425 = 0;
var uLocal_426 = 0;
var uLocal_427 = 0;
var uLocal_428 = 0;
var uLocal_429 = 0;
var uLocal_430 = 0;
var uLocal_431 = 0;
var uLocal_432 = 0;
var uLocal_433 = 0;
var uLocal_434 = 0;
var uLocal_435 = 0;
var uLocal_436 = 0;
var uLocal_437 = 0;
var uLocal_438 = 0;
var uLocal_439 = 0;
var uLocal_440 = 0;
var uLocal_441 = 0;
var uLocal_442 = 0;
var uLocal_443 = 0;
var uLocal_444 = 0;
var uLocal_445 = 0;
var uLocal_446 = 0;
var uLocal_447 = 0;
var uLocal_448 = 0;
var uLocal_449 = 0;
var uLocal_450 = 0;
var uLocal_451 = 0;
var uLocal_452 = 0;
var uLocal_453 = 0;
var uLocal_454 = 0;
var uLocal_455 = 0;
var uLocal_456 = 0;
var uLocal_457 = 0;
var uLocal_458 = 0;
var uLocal_459 = 0;
var uLocal_460 = 0;
var uLocal_461 = 0;
var uLocal_462 = 0;
var uLocal_463 = 0;
var uLocal_464 = 0;
var uLocal_465 = 0;
var uLocal_466 = 0;
var uLocal_467 = 0;
var uLocal_468 = 0;
var uLocal_469 = 0;
var uLocal_470 = 0;
var uLocal_471 = 0;
var uLocal_472 = 0;
var uLocal_473 = 0;
var uLocal_474 = 0;
var uLocal_475 = 0;
var uLocal_476 = 0;
var uLocal_477 = 0;
var uLocal_478 = 0;
var uLocal_479 = 0;
var uLocal_480 = 0;
var uLocal_481 = 0;
var uLocal_482 = 0;
var uLocal_483 = 0;
var uLocal_484 = 0;
var uLocal_485 = 0;
var uLocal_486 = 0;
var uLocal_487 = 0;
var uLocal_488 = 0;
var uLocal_489 = 0;
var uLocal_490 = 0;
var uLocal_491 = 0;
var uLocal_492 = 0;
var uLocal_493 = 0;
var uLocal_494 = 0;
var uLocal_495 = 0;
var uLocal_496 = 0;
var uLocal_497 = 0;
var uLocal_498 = 0;
var uLocal_499 = 0;
var uLocal_500 = 0;
var uLocal_501 = 0;
var uLocal_502 = 0;
var uLocal_503 = 0;
var uLocal_504 = 0;
var uLocal_505 = 0;
var uLocal_506 = 0;
var uLocal_507 = 0;
var uLocal_508 = 0;
var uLocal_509 = 0;
var uLocal_510 = 0;
var uLocal_511 = 0;
var uLocal_512 = 0;
var uLocal_513 = 0;
var uLocal_514 = 0;
var uLocal_515 = 0;
var uLocal_516 = 0;
var uLocal_517 = 0;
var uLocal_518 = 0;
var uLocal_519 = 0;
var uLocal_520 = 0;
var uLocal_521 = 0;
var uLocal_522 = 0;
var uLocal_523 = 0;
var uLocal_524 = 0;
var uLocal_525 = 0;
var uLocal_526 = 0;
var uLocal_527 = 0;
var uLocal_528 = 0;
var uLocal_529 = 0;
var uLocal_530 = 0;
var uLocal_531 = 0;
var uLocal_532 = 0;
var uLocal_533 = 0;
var uLocal_534 = 0;
var uLocal_535 = 0;
var uLocal_536 = 0;
var uLocal_537 = 0;
var uLocal_538 = 0;
var uLocal_539 = 0;
var uLocal_540 = 0;
var uLocal_541 = 0;
var uLocal_542 = 0;
var uLocal_543 = 0;
var uLocal_544 = 0;
var uLocal_545 = 0;
var uLocal_546 = 0;
var uLocal_547 = 0;
var uLocal_548 = 0;
var uLocal_549 = 0;
var uLocal_550 = 0;
var uLocal_551 = 0;
var uLocal_552 = 0;
var uLocal_553 = 0;
var uLocal_554 = 0;
int *iLocal_555 = NULL;
var uLocal_556 = 0;
var uLocal_557 = -1;
var uLocal_558 = 0;
var uLocal_559 = 0;
var uLocal_560 = 0;
var uLocal_561 = 0;
var uLocal_562 = 0;
var uLocal_563 = 0;
var uLocal_564 = 1000;
var uLocal_565 = 1000;
var uLocal_566 = 0;
int iLocal_567 = 0;
int iLocal_568 = 0;
int iLocal_569 = 0;
var uLocal_570[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_578 = 0;
int iLocal_579 = 0;
var uLocal_580[7] = {0, 0, 0, 0, 0, 0, 0};
var uLocal_588[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_596 = 0;
var uLocal_597[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_608 = 0;
int iLocal_609 = 0;
var uLocal_610 = 2;
var uLocal_611 = 0;
var uLocal_612 = 0;
int iLocal_613 = 0;
int iLocal_614 = 0;
int iLocal_615 = 0;
var uLocal_616[7] = {0, 0, 0, 0, 0, 0, 0};
var uLocal_624[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_632 = 0;
int iLocal_633 = 0;
var uLocal_634[7] = {0, 0, 0, 0, 0, 0, 0};
var uLocal_642[7] = {0, 0, 0, 0, 0, 0, 0};
vector3 vLocal_650[7] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_672[7] = {0f, 0f, 0f, 0f, 0f, 0f, 0f};
var uLocal_680[7] = {0, 0, 0, 0, 0, 0, 0};
var uLocal_688[7] = {0, 0, 0, 0, 0, 0, 0};
vector3 vLocal_696[7] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_718[7] = {0f, 0f, 0f, 0f, 0f, 0f, 0f};
var uLocal_726[7] = {0, 0, 0, 0, 0, 0, 0};
var uLocal_734[7] = {0, 0, 0, 0, 0, 0, 0};
vector3 vLocal_742[7] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_764[7] = {0f, 0f, 0f, 0f, 0f, 0f, 0f};
var uLocal_772[7] = {0, 0, 0, 0, 0, 0, 0};
var uLocal_780[7] = {0, 0, 0, 0, 0, 0, 0};
vector3 vLocal_788[7] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_810[7] = {0f, 0f, 0f, 0f, 0f, 0f, 0f};
var uLocal_818[7] = {0, 0, 0, 0, 0, 0, 0};
var uLocal_826[7] = {0, 0, 0, 0, 0, 0, 0};
vector3 vLocal_834[7] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_856[7] = {0f, 0f, 0f, 0f, 0f, 0f, 0f};
var uLocal_864[7] = {0, 0, 0, 0, 0, 0, 0};
var uLocal_872[7] = {0, 0, 0, 0, 0, 0, 0};
vector3 vLocal_880[7] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_902[7] = {0f, 0f, 0f, 0f, 0f, 0f, 0f};
int iLocal_910 = 0;
int iLocal_911[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_919[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_927[7] = {0, 0, 0, 0, 0, 0, 0};
int *iLocal_935 = NULL;
int *iLocal_936 = NULL;
int *iLocal_937 = NULL;
int *iLocal_938 = NULL;
int *iLocal_939 = NULL;
int *iLocal_940 = NULL;
int *iLocal_941 = NULL;
int iLocal_942 = 0;
int iLocal_943 = 0;
int iLocal_944 = 0;
int iLocal_945 = 0;
int iLocal_946 = 0;
int iLocal_947 = 0;
struct<61> ScriptParam_0 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
		0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
#pragma endregion //}

void __EntryFunction__() {
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_80 = func_500(60);
	iLocal_81 = func_500(14);
	fLocal_144 = 400f;
	fLocal_145 = 150f;
	fLocal_146 = 450f;
	fLocal_147 = 0.7f;
	fLocal_148 = 1f;
	fLocal_149 = 0.7f;
	iLocal_150 = 4;
	iLocal_151 = 525000;
	fLocal_152 = 34.75f;
	fLocal_153 = 50f;
	iLocal_154 = 25;
	iLocal_155 = 10;
	iLocal_156 = 25;
	iLocal_157 = 75;
	vLocal_158 = {-363.3094f, -82.3607f, 44.6577f};
	iLocal_161 = 157;
	iLocal_279 = 1;
	iLocal_299 = -1;
	Local_83 = {ScriptParam_0};
	func_498(&Local_83);
	gameplay::set_mission_flag(1);
	if (player::has_force_cleanup_occurred(19)) {
		if (iLocal_311 == 1) {
			audio::trigger_music_event("EPS8_FAIL");
			func_497("Force cleanup [TERMINATING]");
			func_480(1);
			func_466();
		}
		else {
			func_497("Force cleanup [TERMINATING]");
			func_480(1);
			func_466();
		}
	}
	if (func_465()) {
		Global_69947 = 1;
		iLocal_79 = 0;
		while (!func_461(&Local_83)) {
			system::wait(0);
		}
		Global_69947 = 0;
	}
	ped::remove_scenario_blocking_area(func_460(), 0);
	gameplay::clear_bit(&Global_101700.f_17533.f_382, 1);
	ped::add_relationship_group("Epsilon", &iLocal_388);
	ped::add_relationship_group("EpsilonCivilian", &iLocal_389);
	iLocal_945 =
		ped::add_scenario_blocking_area(-711.6323f, 42.0868f, 14.5077f, -663.5175f, 118.0403f, 86.0362f, 0, 1, 1, 1);
	iLocal_946 =
		ped::add_scenario_blocking_area(-657.5416f, 38.5153f, 38.7892f, -665.8512f, 52.9232f, 42.3853f, 0, 1, 1, 1);
	iLocal_947 =
		ped::add_scenario_blocking_area(Vector(45.2982f, -36.1436f, -413.4749f) - Vector(5f, 7f, 7f),
										Vector(45.2982f, -36.1436f, -413.4749f) + Vector(5f, 7f, 7f), 0, 1, 1, 1);
	func_459(&Local_83, 0, 1);
	uLocal_570[0] = Local_83.f_28[0];
	uLocal_570[2] = Local_83.f_28[1];
	uLocal_580[0] = Local_83.f_28[2];
	uLocal_588[0] = Local_83.f_28[3];
	Local_83.f_28[0] = 0;
	Local_83.f_28[1] = 0;
	Local_83.f_28[2] = 0;
	Local_83.f_28[3] = 0;
	func_453(1);
	while (true) {
		vehicle::stop_all_garage_activity();
		unk1::_0x208784099002BC30("SF_Epsilon8", 0);
		system::wait(0);
		func_437(Local_83.f_9, 0, 0, 0, 0, 0);
		if (iLocal_568 != 0 && iLocal_568 != 1 && iLocal_568 != 2) {
			if (iLocal_568 != 10) {
				func_436();
			}
			func_431();
		}
		switch (iLocal_568) {
		case 0: func_423(); break;

		case 1: func_344(); break;

		case 2: func_335(); break;

		case 3: func_330(); break;

		case 4: func_306(); break;

		case 5: func_302(); break;

		case 6: func_301(); break;

		case 7: func_290(); break;

		case 8: func_53(); break;

		case 10: func_3(); break;
		}
		if (iLocal_568 != 10) {
			func_2();
			func_1();
		}
	}
}

// Position - 0x353
void func_1() {}

// Position - 0x35B
void func_2() {}

// Position - 0x363
void func_3() {
	switch (iLocal_569) {
	case 0:
		audio::trigger_music_event("EPS8_FAIL");
		if (iLocal_375 == 1) {
			func_25(0, 1, -iLocal_151, 0, 0);
		}
		func_23();
		ui::clear_prints();
		ui::clear_help(1);
		if (!gameplay::is_string_null_or_empty(sLocal_386)) {
			func_21(sLocal_386, 1);
		}
		else {
			func_480(1);
		}
		iLocal_569 = 1;
		break;

	case 1:
		if (func_20()) {
			func_4();
			func_466();
		}
		break;
	}
}

// Position - 0x3D9
void func_4() {
	func_19(&iLocal_555, 0);
	iLocal_567 = 0;
	fLocal_153 = 100f;
	ui::clear_prints();
	if (entity::does_entity_exist(uLocal_616[0])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[0], 0);
	}
	if (entity::does_entity_exist(uLocal_616[1])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[1], 0);
	}
	if (entity::does_entity_exist(uLocal_616[2])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[2], 0);
	}
	if (entity::does_entity_exist(uLocal_616[3])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[3], 0);
	}
	if (entity::does_entity_exist(uLocal_616[4])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[4], 0);
	}
	if (entity::does_entity_exist(uLocal_616[5])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[5], 0);
	}
	if (entity::does_entity_exist(uLocal_616[6])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[6], 0);
	}
	if (entity::does_entity_exist(uLocal_624[0])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_624[0], 0);
	}
	if (entity::does_entity_exist(uLocal_624[1])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_624[1], 0);
	}
	ped::remove_relationship_group(iLocal_388);
	ped::remove_relationship_group(iLocal_389);
	if (iLocal_370 == 0) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				pathfind::get_safe_coord_for_ped(entity::get_entity_coords(player::player_ped_id(), 1), 0, &vLocal_230,
												 0);
				entity::set_entity_coords(player::player_ped_id(), vLocal_230, 1, 0, 0, 1);
			}
			else if (entity::does_entity_exist(iLocal_632)) {
				if (!entity::is_entity_dead(iLocal_632, 0)) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
						pathfind::get_safe_coord_for_ped(entity::get_entity_coords(player::player_ped_id(), 1), 0,
														 &vLocal_230, 0);
						entity::set_entity_coords(player::player_ped_id(), vLocal_230, 1, 0, 0, 1);
					}
				}
			}
		}
	}
	ped::set_ped_component_variation(player::player_ped_id(), 9, 0, 0, 0);
	func_18(&iLocal_596);
	func_18(&iLocal_578);
	func_18(&iLocal_579);
	func_15(&iLocal_615);
	func_15(&iLocal_633);
	func_14(&uLocal_597[0]);
	func_14(&uLocal_597[1]);
	func_14(&uLocal_597[2]);
	func_14(&uLocal_597[3]);
	if (entity::does_entity_exist(iLocal_632)) {
		vehicle::remove_vehicle_stuck_check(iLocal_632);
		func_15(&iLocal_632);
	}
	iLocal_256 = 0;
	while (iLocal_256 < 7) {
		func_18(&uLocal_580[iLocal_256]);
		func_18(&uLocal_588[iLocal_256]);
		func_18(&uLocal_570[iLocal_256]);
		func_15(&uLocal_616[iLocal_256]);
		system::wait(0);
		iLocal_256++;
	}
	func_11();
	func_5(0);
	iLocal_256 = 0;
	iLocal_311 = 0;
	iLocal_312 = 0;
	iLocal_314 = 0;
	iLocal_313 = 0;
	iLocal_315 = 0;
	iLocal_261 = 0;
	iLocal_257 = 0;
	iLocal_258 = 0;
	iLocal_270 = 0;
	iLocal_261 = 0;
	iLocal_262 = 0;
	iLocal_316[0] = 0;
	iLocal_316[1] = 0;
	iLocal_316[2] = 0;
	iLocal_316[3] = 0;
	iLocal_316[4] = 0;
	iLocal_316[5] = 0;
	iLocal_316[6] = 0;
	iLocal_341[0] = 0;
	iLocal_341[1] = 0;
	iLocal_341[2] = 0;
	iLocal_341[3] = 0;
	iLocal_341[4] = 0;
	iLocal_341[5] = 0;
	iLocal_341[6] = 0;
	iLocal_265 = 0;
	iLocal_324 = 0;
	iLocal_325 = 0;
	iLocal_326 = 0;
	iLocal_328 = 0;
	iLocal_272 = 0;
	iLocal_275 = 0;
	iLocal_330 = 0;
	iLocal_331 = 0;
	iLocal_332 = 0;
	iLocal_333 = 0;
	iLocal_334 = 0;
	iLocal_335 = 0;
	iLocal_336 = 0;
	iLocal_277 = 0;
	iLocal_337 = 0;
	iLocal_338 = 0;
	iLocal_339 = 0;
	iLocal_279 = 1;
	iLocal_340 = 0;
	iLocal_349 = 0;
	iLocal_350 = 0;
	iLocal_351 = 0;
	iLocal_352 = 0;
	iLocal_353 = 0;
	iLocal_280 = 0;
	iLocal_281 = 0;
	iLocal_354 = 0;
	iLocal_355 = 0;
	iLocal_356 = 0;
	iLocal_286 = 0;
	iLocal_283 = 0;
	iLocal_358 = 0;
	fLocal_146 = 450f;
	iLocal_360 = 0;
	iLocal_284 = 0;
	iLocal_361 = 0;
	iLocal_362 = 0;
	iLocal_363 = 0;
	iLocal_364 = 0;
	iLocal_288 = 0;
	iLocal_365 = 0;
	iLocal_366 = 0;
	iLocal_367 = 0;
	iLocal_368 = 0;
	iLocal_369 = 0;
	iLocal_285 = 0;
	iLocal_295 = 0;
	iLocal_297 = 0;
	iLocal_298 = 0;
	iLocal_371 = 0;
	iLocal_373 = 0;
	iLocal_372 = 0;
	iLocal_374 = 0;
	iLocal_299 = -1;
	iLocal_375 = 0;
	iLocal_300 = 0;
	iLocal_376 = 0;
	iLocal_303 = 0;
	iLocal_304 = 0;
	iLocal_377 = 0;
	iLocal_306 = 0;
	iLocal_383 = 0;
	iLocal_308 = 0;
	iLocal_384 = 0;
	iLocal_385 = 0;
	iLocal_387 = 0;
	if (cam::does_cam_exist(iLocal_608)) {
		cam::set_cam_active(iLocal_608, 0);
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		cam::destroy_cam(iLocal_608, 0);
		if (cam::does_cam_exist(iLocal_609)) {
			cam::set_cam_active(iLocal_609, 0);
			cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			cam::destroy_cam(iLocal_609, 0);
		}
		ui::display_hud(1);
		ui::display_radar(1);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		cam::set_gameplay_cam_relative_heading(0f);
	}
	if (audio::is_audio_scene_active("EPSILONISM_08_CHOPPER")) {
		audio::stop_audio_scene("EPSILONISM_08_CHOPPER");
	}
	cam::set_cinematic_button_active(1);
}

// Position - 0x84B
void func_5(int iParam0) {
	if (iParam0) {
		func_10();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_9(0)) {
			func_6(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x8AE
void func_6(int iParam0) {
	if (Global_14604) {
		func_8(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&Global_2314, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 30);
	}
	else {
		gameplay::clear_bit(&Global_2313, 30);
	}
	if (!func_7()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x91E
bool func_7() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x945
void func_8(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_9(0)) {
			Global_14604 = 1;
			if (iParam1) {
				mobile::get_mobile_phone_position(&Global_14380);
			}
			Global_14371 = {Global_14389[Global_14388 /*3*/]};
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
	else if (Global_14604 == 1) {
		Global_14604 = 0;
		Global_14371 = {Global_14396[Global_14388 /*3*/]};
		if (iParam1) {
			mobile::set_mobile_phone_position(Global_14380);
		}
		else {
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
}

// Position - 0x9B9
bool func_9(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(Global_2313, 14)) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return true;
	}
	if (Global_14443.f_1 > 3) {
		return true;
	}
	return false;
}

// Position - 0xA13
void func_10() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

// Position - 0xA3C
void func_11() {
	streaming::set_model_as_no_longer_needed(joaat("taxi"));
	streaming::set_model_as_no_longer_needed(joaat("sadler"));
	streaming::set_model_as_no_longer_needed(joaat("habanero"));
	streaming::set_model_as_no_longer_needed(joaat("schafter2"));
	streaming::set_model_as_no_longer_needed(joaat("rumpo"));
	func_13(&uLocal_642[0], 1, 0, 1);
	func_13(&uLocal_642[1], 1, 0, 1);
	func_13(&uLocal_642[2], 1, 0, 1);
	func_13(&uLocal_642[3], 1, 0, 1);
	func_13(&uLocal_642[4], 1, 0, 1);
	func_13(&uLocal_642[5], 1, 0, 1);
	func_13(&uLocal_642[6], 1, 0, 1);
	func_12(&uLocal_634[0]);
	func_12(&uLocal_634[1]);
	func_12(&uLocal_634[2]);
	func_12(&uLocal_634[3]);
	func_12(&uLocal_634[4]);
	func_12(&uLocal_634[5]);
	func_12(&uLocal_634[6]);
	func_13(&uLocal_688[0], 1, 0, 1);
	func_13(&uLocal_688[1], 1, 0, 1);
	func_13(&uLocal_688[2], 1, 0, 1);
	func_13(&uLocal_688[3], 1, 0, 1);
	func_13(&uLocal_688[4], 1, 0, 1);
	func_13(&uLocal_688[5], 1, 0, 1);
	func_13(&uLocal_688[6], 1, 0, 1);
	func_12(&uLocal_680[0]);
	func_12(&uLocal_680[1]);
	func_12(&uLocal_680[2]);
	func_12(&uLocal_680[3]);
	func_12(&uLocal_680[4]);
	func_12(&uLocal_680[5]);
	func_12(&uLocal_680[6]);
	func_13(&uLocal_734[0], 1, 0, 1);
	func_13(&uLocal_734[1], 1, 0, 1);
	func_13(&uLocal_734[2], 1, 0, 1);
	func_13(&uLocal_734[3], 1, 0, 1);
	func_13(&uLocal_734[4], 1, 0, 1);
	func_13(&uLocal_734[5], 1, 0, 1);
	func_13(&uLocal_734[6], 1, 0, 1);
	func_12(&uLocal_726[0]);
	func_12(&uLocal_726[1]);
	func_12(&uLocal_726[2]);
	func_12(&uLocal_726[3]);
	func_12(&uLocal_726[4]);
	func_12(&uLocal_726[5]);
	func_12(&uLocal_726[6]);
	func_13(&uLocal_780[0], 1, 0, 1);
	func_13(&uLocal_780[1], 1, 0, 1);
	func_13(&uLocal_780[2], 1, 0, 1);
	func_13(&uLocal_780[3], 1, 0, 1);
	func_13(&uLocal_780[4], 1, 0, 1);
	func_13(&uLocal_780[5], 1, 0, 1);
	func_13(&uLocal_780[6], 1, 0, 1);
	func_12(&uLocal_772[0]);
	func_12(&uLocal_772[1]);
	func_12(&uLocal_772[2]);
	func_12(&uLocal_772[3]);
	func_12(&uLocal_772[4]);
	func_12(&uLocal_772[5]);
	func_12(&uLocal_772[6]);
	func_13(&uLocal_826[0], 1, 0, 1);
	func_13(&uLocal_826[1], 1, 0, 1);
	func_13(&uLocal_826[2], 1, 0, 1);
	func_13(&uLocal_826[3], 1, 0, 1);
	func_13(&uLocal_826[4], 1, 0, 1);
	func_13(&uLocal_826[5], 1, 0, 1);
	func_13(&uLocal_826[6], 1, 0, 1);
	func_12(&uLocal_818[0]);
	func_12(&uLocal_818[1]);
	func_12(&uLocal_818[2]);
	func_12(&uLocal_818[3]);
	func_12(&uLocal_818[4]);
	func_12(&uLocal_818[5]);
	func_12(&uLocal_818[6]);
	func_13(&uLocal_872[0], 1, 0, 1);
	func_13(&uLocal_872[1], 1, 0, 1);
	func_13(&uLocal_872[2], 1, 0, 1);
	func_13(&uLocal_872[3], 1, 0, 1);
	func_13(&uLocal_872[4], 1, 0, 1);
	func_13(&uLocal_872[5], 1, 0, 1);
	func_13(&uLocal_872[6], 1, 0, 1);
	func_12(&uLocal_864[0]);
	func_12(&uLocal_864[1]);
	func_12(&uLocal_864[2]);
	func_12(&uLocal_864[3]);
	func_12(&uLocal_864[4]);
	func_12(&uLocal_864[5]);
	func_12(&uLocal_864[6]);
}

// Position - 0xE37
void func_12(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0xE6F
void func_13(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!ped::is_ped_injured(*iParam0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
			if (iParam3 == 0) {
				ai::clear_ped_secondary_task(*iParam0);
			}
			ped::set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1) {
				ped::set_blocking_of_non_temporary_events(*iParam0, 0);
			}
		}
		entity::set_ped_as_no_longer_needed(iParam0);
	}
}

// Position - 0xEBE
void func_14(int *iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		object::delete_object(iParam0);
	}
}

// Position - 0xEE9
void func_15(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		if (func_17(*iParam0)) {
			if (entity::is_entity_a_mission_entity(*iParam0) &&
				entity::does_entity_belong_to_this_script(*iParam0, 1)) {
				if (func_16(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
						entity::set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				vehicle::delete_vehicle(iParam0);
			}
		}
		else {
			if (func_16(player::player_ped_id())) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
					entity::set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			vehicle::delete_vehicle(iParam0);
		}
	}
}

// Position - 0xF85
bool func_16(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xFA6
bool func_17(int iParam0) {
	if (func_16(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xFD0
void func_18(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_dead(*iParam0, 0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
		}
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		ped::delete_ped(iParam0);
	}
}

// Position - 0x1010
void func_19(int *iParam0, int iParam1) {
	if (iParam1) {
		iParam0->f_2 = gameplay::get_game_timer();
	}
	else {
		iParam0->f_2 = -1;
	}
}

// Position - 0x102D
bool func_20() {
	if (Global_3) {
		return true;
	}
	if (Global_91491 == 7 || Global_91491 == 8) {
		return true;
	}
	return false;
}

// Position - 0x105A
void func_21(char *sParam0, int iParam1) {
	func_22(sParam0);
	func_480(iParam1);
}

// Position - 0x106E
void func_22(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		if (ui::get_length_of_literal_string(sParam0) <= 16) {
			StringCopy(&Global_69934, sParam0, 16);
			StringCopy(&Global_69938, "", 16);
			if (unk1::_is_recording()) {
				unk1::_stop_recording_and_save_clip();
			}
		}
	}
}

// Position - 0x10AD
void func_23() {
	func_24(&iLocal_911[0]);
	func_24(&iLocal_911[1]);
	func_24(&iLocal_911[2]);
	func_24(&iLocal_911[3]);
	func_24(&iLocal_911[4]);
	func_24(&iLocal_911[5]);
	func_24(&iLocal_911[6]);
	func_24(&iLocal_919[0]);
	func_24(&iLocal_919[1]);
	func_24(&iLocal_919[2]);
	func_24(&iLocal_919[3]);
	func_24(&iLocal_919[4]);
	func_24(&iLocal_919[5]);
	func_24(&iLocal_919[6]);
	func_24(&iLocal_927[0]);
	func_24(&iLocal_927[1]);
	func_24(&iLocal_927[2]);
	func_24(&iLocal_927[3]);
	func_24(&iLocal_927[4]);
	func_24(&iLocal_927[5]);
	func_24(&iLocal_927[6]);
	func_24(&iLocal_935);
	func_24(&iLocal_936);
	func_24(&iLocal_937);
	func_24(&iLocal_938);
	func_24(&iLocal_939);
	func_24(&iLocal_940);
	func_24(&iLocal_941);
}

// Position - 0x11B8
void func_24(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x11D8
void func_25(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return;
	}
	func_26(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (iParam3) {
		iVar0 = 0;
		if (iParam4) {
			switch (iParam0) {
			case 0: iVar1 = joaat("sp0_money_made_from_random_peds"); break;

			case 1: iVar1 = joaat("sp1_money_made_from_random_peds"); break;

			case 2: iVar1 = joaat("sp2_money_made_from_random_peds"); break;

			default: return;
			}
		}
		else {
			switch (iParam0) {
			case 0: iVar1 = joaat("sp0_money_made_from_missions"); break;

			case 1: iVar1 = joaat("sp1_money_made_from_missions"); break;

			case 2: iVar1 = joaat("sp2_money_made_from_missions"); break;

			default: return;
			}
		}
		stats::stat_get_int(iVar1, &iVar0, -1);
		iVar0 += iParam2;
		stats::stat_set_int(iVar1, iVar0, 1);
	}
}

// Position - 0x12BF
int func_26(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_52();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_51(99, 1);
			func_50(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_50(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_50(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_34(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_33(5)) {
				fVar0 = 0.9f;
				iVar1 = 5;
			}
			break;

		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
			switch (iParam0) {
			case 0: func_50(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_50(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_50(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_33(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_50(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_50(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_50(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_50(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_50(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_50(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
			}
			break;

		case 98:
		case 99:
		case 100:
		case 101:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			switch (iParam0) {
			case 0: func_50(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_50(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_50(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_50(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_50(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_50(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_50(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_50(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_50(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_33(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_50(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_50(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_50(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_50(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_50(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_50(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_32(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_51(95, iParam3); break;

		case 1: func_51(97, iParam3); break;

		case 2: func_51(96, iParam3); break;
		}
		func_51(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_29(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_29(iVar1);
	}
	iVar5 = Global_52996[iVar2] + iParam3;
	switch (iParam1) {
	case 1:
		if (Global_52996[iVar2] >= 0 && iParam3 > 0) {
			if (iVar5 <= 0) {
				Global_52996[iVar2] = 2147483647;
			}
			else {
				Global_52996[iVar2] += iParam3;
			}
		}
		switch (iParam0) {
		case 0: func_50(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_50(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_50(joaat("sp2_total_cash_earned"), iParam3); break;
		}
		break;

	case 0:
		if (!iParam4) {
			if (Global_52996[iVar2] - iParam3 < 0) {
				return 0;
			}
		}
		iVar3 = Global_52996[iVar2];
		Global_52996[iVar2] -= iParam3;
		if (iParam4) {
			iVar4 = iVar3;
		}
		break;
	}
	if (iParam2 == 1) {
		if (iVar4 > 20) {
		}
	}
	else {
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 =
			iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 =
			iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10) {
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_28(iParam0);
	if (Global_35781 == 15) {
		func_27(0);
	}
	return 1;
}

// Position - 0x18BE
void func_27(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = 0;
		while (iVar1 < 11) {
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!iParam0) {
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

// Position - 0x1B40
void func_28(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x1B9A
void func_29(int iParam0) {
	bool bVar0;
	char cVar1[64];

	bVar0 = false;
	if (!network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0)) {
			bVar0 = true;
			gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		}
	}
	else if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0) ||
			 gameplay::is_bit_set(Global_2097152[func_31() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_31() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_30(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x1C5A
char *func_30(int iParam0) {
	switch (iParam0) {
	case 0: return "COUP_HAIRC";

	case 1: return "COUP_TATTOO";

	case 2: return "COUP_WARSTOCK";

	case 3: return "COUP_MOSPORT";

	case 4: return "COUP_ELITAS";

	case 5: return "COUP_MEDSPENS";

	case 6: return "COUP_SPRUNK";

	case 7: return "COUP_RESPRAY";

	default:
	}
	return "";
}

// Position - 0x1CCC
int func_31() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x1CD9
void func_32(int iParam0) {
	func_51(93, iParam0);
	func_51(29, iParam0);
	func_51(30, iParam0);
}

// Position - 0x1CF9
bool func_33(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_31() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x1D35
int func_34(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (player::has_achievement_been_passed(27)) {
		return 0;
	}
	if (stats::stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (iParam0) {
	}
	iVar2 = 0;
	stats::stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000) {
		stats::stat_set_int(joaat("num_cash_spent"), iVar1, 1);
		func_49(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_35(27, 1);
	return 1;
}

// Position - 0x1DEC
int func_35(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_36(iParam0, iParam1);
}

// Position - 0x1E07
int func_36(int iParam0, int iParam1) {
	if (func_48(14) && !func_47(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_46(&Global_2595550)) {
		if (func_44(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_37(&Global_2595550, iParam0)) {
			return 1;
		}
	}
	else {
		if (!player::give_achievement_to_player(iParam0)) {
			return 0;
		}
		if (player::has_achievement_been_passed(iParam0)) {
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x1EA4
bool func_37(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_48(14) && !func_47(iParam1)) {
		return false;
	}
	if (func_44(uParam0, iParam1)) {
		return false;
	}
	if (func_43(uParam0) < 0f) {
		func_42(uParam0, 0);
	}
	func_40(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_38(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x1F55
int func_38(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_48(14) && !func_47(iParam1)) {
		return 0;
	}
	if (func_44(uParam0, iParam1)) {
		return 0;
	}
	if (func_43(uParam0) < 0f) {
		func_42(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_39(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x1FD0
bool func_39(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x1FE1
void func_40(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_41(uParam0, iVar0);
		iVar0++;
	}
	func_42(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x2015
void func_41(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x2025
void func_42(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x2042
float func_43(var *uParam0) { return uParam0->f_72; }

// Position - 0x204E
bool func_44(var *uParam0, int iParam1) { return func_45(uParam0, iParam1) != -1; }

// Position - 0x2060
int func_45(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x208D
bool func_46(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x209B
int func_47(int iParam0) {
	switch (iParam0) {
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69: return 1;

	default:
	}
	return 0;
}

// Position - 0x20EB
bool func_48(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x20F9
int func_49(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 < 0) {
		return 0;
	}
	if (iParam0 > 70) {
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100) {
		return 0;
	}
	iVar0 = player::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0) {
		return player::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

// Position - 0x214A
void func_50(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x216D
void func_51(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 < 1) {
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2) {
		return;
	}
	if (network::network_is_game_in_progress()) {
		return;
	}
	if (Global_51564[iParam0 /*7*/]) {
		stats::stat_get_int(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stats::stat_set_int(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

// Position - 0x21CA
void func_52() {
	int iVar0;

	if (network::network_is_signed_in()) {
		stats::stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (Global_52996[0] != iVar0) {
			Global_52996[0] = iVar0;
		}
		stats::stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (Global_52996[1] != iVar0) {
			Global_52996[1] = iVar0;
		}
		stats::stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (Global_52996[2] != iVar0) {
			Global_52996[2] = iVar0;
		}
	}
}

// Position - 0x223F
void func_53() {
	int iVar0;
	vector3 vVar1;

	func_289();
	func_288();
	if (iLocal_303 == 0) {
		if (gameplay::get_game_timer() > iLocal_290 + 5000) {
			iLocal_303 = 1;
		}
	}
	else if (iLocal_303 == 1) {
		if (gameplay::get_game_timer() > iLocal_290 + 12000) {
			iLocal_303 = 2;
		}
	}
	if (gameplay::get_game_timer() > iLocal_290 + 9700) {
		if (iLocal_281 > 2 || iLocal_336 == 1) {
		}
	}
	if (iLocal_262 == 3 && iLocal_270 == 2 && !func_287()) {
		iLocal_376 = 1;
	}
	if (iLocal_258 > 10000 && iLocal_257 > 10000) {
		iLocal_258 -= 9000;
		iLocal_257 -= 9000;
	}
	if (iLocal_336 == 0) {
		if (iLocal_335 == 0) {
			if (func_17(iLocal_632)) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
					if (iLocal_258 != iLocal_257) {
						if (iLocal_314 == 0) {
							unk1::_0x293220DA1B46CEBC(15f, 4f, 1);
							func_286("EPS8_12", 7500, 0);
						}
						iLocal_335 = 1;
					}
				}
			}
		}
	}
	else if (ui::does_blip_exist(iLocal_941)) {
		if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (func_285(player::player_ped_id(), uLocal_597[3], 0) < 1f) {
				ui::remove_blip(&iLocal_941);
				object::delete_object(&uLocal_597[3]);
				func_25(0, 1, iLocal_151, 0, 0);
				iLocal_375 = 1;
				if (iLocal_258 != iLocal_257) {
					if (iLocal_335 == 0) {
						if (iLocal_314 == 0) {
							unk1::_0x293220DA1B46CEBC(15f, 4f, 1);
							func_286("EPS8_12", 7500, 0);
						}
						iLocal_335 = 1;
					}
				}
			}
		}
	}
	if (func_16(iLocal_615) && func_16(iLocal_579)) {
		vVar1 = {entity::get_entity_coords(iLocal_615, 1)};
		if (!entity::is_entity_in_angled_area(
				player::player_ped_id(),
				entity::get_offset_from_entity_in_world_coords(iLocal_615, 0f, 0f, vVar1.z - 200f),
				entity::get_offset_from_entity_in_world_coords(iLocal_615, 500f, 0f, vVar1.z + 200f), 1000f, 0, 1, 0)) {
			if (func_284(iLocal_579, iLocal_615, 2) && vehicle::is_vehicle_seat_free(iLocal_615, 1, 0)) {
				if (ai::get_script_task_status(iLocal_579, 242628503) != 1 ||
					ai::get_sequence_progress(iLocal_579) > 0) {
					ai::open_sequence_task(&iVar0);
					ai::task_shuffle_to_next_vehicle_seat(0, iLocal_615);
					ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
					ai::close_sequence_task(iVar0);
					ai::task_perform_sequence(iLocal_579, iVar0);
					ai::clear_sequence_task(&iVar0);
				}
			}
		}
		else if (func_284(iLocal_579, iLocal_615, 1) && vehicle::is_vehicle_seat_free(iLocal_615, 2, 0)) {
			if (ai::get_script_task_status(iLocal_579, 242628503) != 1 || ai::get_sequence_progress(iLocal_579) > 0) {
				ai::open_sequence_task(&iVar0);
				ai::task_shuffle_to_next_vehicle_seat(0, iLocal_615);
				ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
				ai::close_sequence_task(iVar0);
				ai::task_perform_sequence(iLocal_579, iVar0);
				ai::clear_sequence_task(&iVar0);
			}
		}
	}
	func_282();
	func_280();
	func_278();
	if (iLocal_315 == 1) {
		func_275();
	}
	if (iLocal_373 == 0) {
		if (func_17(iLocal_615)) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
				if (weapon::get_selected_ped_weapon(player::player_ped_id()) != joaat("weapon_stickybomb")) {
					if (gameplay::get_game_timer() > iLocal_290 + 5000) {
						if (iLocal_372 == 0) {
							iLocal_372 = 1;
						}
					}
				}
				else if (iLocal_372 == 1) {
					iLocal_372 = 0;
				}
			}
			else if (iLocal_372 == 1) {
				iLocal_372 = 0;
			}
		}
	}
	if (iLocal_258 == iLocal_257 && gameplay::get_game_timer() > iLocal_290 + 8000) {
		iLocal_259 = player::get_player_wanted_level(player::player_id());
		if (iLocal_259 == 0) {
			iLocal_263 = gameplay::get_game_timer();
			if (iLocal_263 > iLocal_264 + 1200) {
				if (iLocal_265 == 0) {
					player::clear_player_wanted_level(player::player_id());
					player::set_wanted_level_multiplier(0f);
					iLocal_332 = 0;
					iLocal_266 = gameplay::get_game_timer();
					iLocal_265 = 1;
				}
				else if (iLocal_265 == 1) {
					iLocal_267 = gameplay::get_game_timer();
					if (iLocal_267 > iLocal_266 + 2000) {
						if (!audio::is_mobile_phone_call_ongoing()) {
							if (iLocal_336 == 0) {
								if (iLocal_333 == 0) {
									if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
										audio::trigger_music_event("EPS8_ESCAPE");
										func_80();
									}
									else if (iLocal_332 == 0) {
										func_286("EPS8_06", 7500, 0);
										iLocal_332 = 1;
									}
								}
								else if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_615, 0)) {
									audio::trigger_music_event("EPS8_ESCAPE");
									func_80();
								}
								else if (iLocal_332 == 0) {
									func_286("EPS8_20", 7500, 0);
									iLocal_332 = 1;
								}
							}
							else {
								unk1::_0x293220DA1B46CEBC(15f, 4f, 1);
								func_80();
							}
						}
					}
				}
			}
		}
		else if (iLocal_314 == 0) {
			func_286("EPS8_03", 7500, 0);
			iLocal_314 = 1;
		}
	}
	func_54();
}

// Position - 0x26A0
void func_54() {
	int iVar0;

	if (!func_79("EPS8_12", 0, 0) && !func_79("EPS8_16", 0, 0) && !func_79("EPS8_11", 0, 0) &&
		!func_79("EPS8_25", 0, 0)) {
		iVar0 = 0;
	}
	else {
		iVar0 = 1;
	}
	if (func_78(iLocal_578)) {
		if (iLocal_281 == 0) {
			if (gameplay::get_game_timer() > iLocal_290 + 1800) {
				if (!func_287()) {
					if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH", "EPS8_CH_1", 6, iVar0, 0)) {
						iLocal_281 = 1;
					}
				}
			}
		}
		else if (iLocal_281 == 1) {
			if (gameplay::get_game_timer() > iLocal_290 + 3000) {
				if (!func_287()) {
					if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH", "EPS8_CH_2", 6, iVar0, 0)) {
						iLocal_281 = 2;
					}
				}
			}
		}
		else if (iLocal_281 == 2) {
			if (gameplay::get_game_timer() > iLocal_290 + 5000) {
				if (iLocal_360 == 0) {
					if (func_56(iLocal_578)) {
						if (!func_287()) {
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_1", 6, iVar0, 0)) {
								iLocal_281 = 3;
							}
						}
					}
				}
			}
		}
		else if (iLocal_281 == 3) {
			if (gameplay::get_game_timer() > iLocal_290 + 10000) {
				if (iLocal_360 == 0) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
						if (entity::get_entity_speed(iLocal_632) > 17f) {
							if (func_56(iLocal_578)) {
								if (!func_287()) {
									fLocal_251 = entity::get_entity_heading(iLocal_632);
									if (fLocal_251 >= 315f || fLocal_251 < 45f) {
										if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_2", 6, iVar0, 0)) {
											iLocal_281 = 4;
										}
									}
									if (fLocal_251 >= 45f && fLocal_251 < 135f) {
										if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_3", 6, iVar0, 0)) {
											iLocal_281 = 4;
										}
									}
									if (fLocal_251 >= 135f && fLocal_251 < 225f) {
										if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_4", 6, iVar0, 0)) {
											iLocal_281 = 4;
										}
									}
									if (fLocal_251 >= 225f && fLocal_251 < 315f) {
										if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_5", 6, iVar0, 0)) {
											iLocal_281 = 4;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (gameplay::get_game_timer() > iLocal_290 + 8000) {
			if (iLocal_354 == 0) {
				if (!func_287()) {
					iLocal_354 = 1;
				}
			}
			if (ped::is_ped_in_cover(player::player_ped_id(), 0)) {
				if (iLocal_355 == 0) {
					if (func_55(player::player_ped_id(), iLocal_615, 200f, 1)) {
						if (!func_287()) {
							if (iLocal_360 == 0) {
								if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_6", 6, iVar0, 0)) {
									iLocal_355 = 1;
								}
							}
						}
					}
				}
			}
			if (!entity::is_entity_dead(iLocal_579, 0)) {
				if (entity::has_entity_been_damaged_by_entity(player::player_ped_id(), iLocal_579, 1)) {
					if (iLocal_356 == 0) {
						if (!func_287()) {
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_7", 6, iVar0, 0)) {
								entity::clear_entity_last_damage_entity(player::player_ped_id());
								iLocal_356 = 1;
							}
						}
					}
				}
			}
			else if (iLocal_286 == 0) {
				iLocal_287 = gameplay::get_game_timer();
				iLocal_286 = 1;
			}
			else if (iLocal_286 == 1) {
				if (gameplay::get_game_timer() > iLocal_287 + 2400) {
					if (!func_287()) {
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_8", 6, iVar0, 0)) {
							iLocal_286 = 2;
						}
					}
				}
			}
		}
	}
	if (iLocal_257 > iLocal_258 + 2) {
		if (gameplay::get_game_timer() > iLocal_290 + 8000) {
			if (gameplay::get_random_int_in_range(0, 100) == 25) {
				if (iLocal_280 == 0) {
					if (!func_287()) {
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH3", "EPS8_CH3_1", 6, iVar0, 0)) {
							iLocal_280 = 1;
						}
					}
				}
				else if (iLocal_280 == 1) {
					if (!func_287()) {
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH3", "EPS8_CH3_2", 6, iVar0, 0)) {
							iLocal_280 = 2;
						}
					}
				}
				else if (iLocal_280 == 2) {
					if (!func_287()) {
						iLocal_280 = 3;
					}
				}
				else if (iLocal_280 == 3) {
					if (!func_287()) {
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH3", "EPS8_CH3_3", 6, iVar0, 0)) {
							iLocal_280 = 4;
						}
					}
				}
				else if (iLocal_280 == 4) {
					if (!func_287()) {
						iLocal_280 = 5;
					}
				}
				else if (iLocal_280 == 5) {
					if (!func_287()) {
						iLocal_280 = 6;
					}
				}
				else if (iLocal_280 == 6) {
					if (!func_287()) {
						iLocal_280 = 7;
					}
				}
				else if (iLocal_280 == 7) {
					if (!func_287()) {
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH3", "EPS8_CH3_4", 6, iVar0, 0)) {
							iLocal_280 = 8;
						}
					}
				}
			}
		}
	}
}

// Position - 0x2B3E
bool func_55(int iParam0, int iParam1, float fParam2, int iParam3) {
	return system::vdist2(entity::get_entity_coords(iParam0, iParam3), entity::get_entity_coords(iParam1, iParam3)) <=
		   fParam2 * fParam2;
}

// Position - 0x2B60
bool func_56(int iParam0) { return func_57(ped::get_vehicle_ped_is_in(iParam0, 0), player::player_ped_id(), 250, 7); }

// Position - 0x2B7A
bool func_57(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;

	iVar0 = func_62(iParam0, iParam1);
	if (!func_16(iParam0) || !func_16(iParam1)) {
		if (iVar0 != -1) {
			func_61(&Local_37[iVar0 /*4*/]);
		}
		return false;
	}
	if (iVar0 == -1) {
		iVar0 = func_60();
		if (iVar0 == -1) {
			return false;
		}
		Local_37[iVar0 /*4*/].f_1 = iParam0;
		Local_37[iVar0 /*4*/].f_2 = iParam1;
	}
	iVar1 = func_58(&Local_37[iVar0 /*4*/], entity::get_entity_coords(iParam0, 1), iParam1, &Local_37[iVar0 /*4*/].f_3,
					iParam0, iParam3);
	return iVar1 || gameplay::get_game_timer() - Local_37[iVar0 /*4*/].f_3 < iParam2;
}

// Position - 0x2C1A
int func_58(int *iParam0, vector3 vParam1, int iParam4, var *uParam5, int iParam6, int iParam7) {
	var uVar0;
	vector3 vVar1;
	var uVar4;
	int iVar7;
	int iVar8;

	iVar7 = 0;
	if (!func_16(iParam4)) {
		*iParam0 = 0;
		return 0;
	}
	if (*iParam0 == 0) {
		vVar1 = {func_59(iParam4, iParam7)};
		*iParam0 =
			worldprobe::start_shape_test_los_probe(vParam1, vVar1 + vVar1 - vParam1 * FtoV(0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = worldprobe::get_shape_test_result(*iParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0) {
		*iParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1) {
		return 0;
	}
	*iParam0 = 0;
	if (entity::is_entity_a_ped(iVar7)) {
		func_16(iVar7);
		if (entity::get_ped_index_from_entity_index(iVar7) == iParam4) {
			if (bLocal_78) {
				graphics::draw_debug_line_with_two_colours(vParam1, entity::get_entity_coords(iParam4, 1), 255, 0, 0,
														   255, 0, 0, 255, 255);
			}
			*uParam5 = gameplay::get_game_timer();
			return 1;
		}
		return 0;
	}
	if (entity::is_entity_a_vehicle(iVar7)) {
		func_16(iVar7);
		if (ped::is_ped_in_any_vehicle(iParam4, 0)) {
			if (entity::get_vehicle_index_from_entity_index(iVar7) == ped::get_vehicle_ped_is_in(iParam4, 0)) {
				if (bLocal_78) {
					graphics::draw_debug_line_with_two_colours(vParam1, entity::get_entity_coords(iParam4, 1), 255, 0,
															   0, 255, 0, 0, 255, 255);
				}
				*uParam5 = gameplay::get_game_timer();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

// Position - 0x2D46
Vector3 func_59(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == 7) {
		iVar0 = gameplay::get_random_int_in_range(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0) {
		return entity::get_entity_coords(iParam0, 1);
	}
	else if (iParam1 == 1) {
		return ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2) {
		return ped::get_ped_bone_coords(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3) {
		return ped::get_ped_bone_coords(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4) {
		return ped::get_ped_bone_coords(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5) {
		return ped::get_ped_bone_coords(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6) {
		return ped::get_ped_bone_coords(iParam0, 36864, 0f, 0f, 0f);
	}
	return entity::get_entity_coords(iParam0, 1);
}

// Position - 0x2E0B
int func_60() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_37) {
		if (Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0 && Local_37[iVar0 /*4*/].f_2 == 0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x2E55
void func_61(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

// Position - 0x2E70
int func_62(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_37) {
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x2EAF
bool func_63(var *uParam0, char *sParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6) {
	func_77(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7) {
		if (iParam4 < 12) {
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_64(sParam2, iParam4, 0);
}

// Position - 0x2F03
int func_64(char *sParam0, int iParam1, int iParam2) {
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2) {
		if (Global_15745 != 0) {
			if (iParam1 > Global_15747) {
				if (Global_15752 == 0) {
					audio::stop_scripted_conversation(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else {
					func_76();
					return 0;
				}
			}
			else {
				return 0;
			}
		}
		if (audio::is_scripted_conversation_ongoing()) {
			return 0;
		}
		if (func_75(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_74();
		Global_15034 = {Global_15199};
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = {Global_15776};
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = {Global_16749};
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751) {
			gameplay::clear_bit(&Global_2313, 20);
			gameplay::clear_bit(&Global_2314, 17);
			gameplay::clear_bit(&Global_2315, 0);
			if (iParam2) {
				func_68();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
					if (iParam1 == 13) {
					}
					else {
						return 0;
					}
				}
				if (Global_14443.f_1 > 3) {
					return 0;
				}
			}
			if (Global_14409 == 1) {
				return 0;
			}
			if (player::is_player_playing(player::player_id())) {
				if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
					return 0;
				}
				if (func_67()) {
					return 0;
				}
				if (ai::is_ped_sprinting(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_ragdoll(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_in_parachute_free_fall(player::player_ped_id())) {
					return 0;
				}
				if (weapon::get_is_ped_gadget_equipped(player::player_ped_id(), joaat("gadget_parachute"))) {
					return 0;
				}
				if (!Global_69702) {
					if (entity::is_entity_in_water(player::player_ped_id())) {
						return 0;
					}
					if (player::is_player_climbing(player::player_id())) {
						return 0;
					}
					if (ped::is_ped_planting_bomb(player::player_ped_id())) {
						return 0;
					}
					if (player::is_special_ability_active(player::player_id())) {
						return 0;
					}
				}
			}
			if (func_7()) {
				return 0;
			}
			else {
				switch (Global_14443.f_1) {
				case 7: return 0;

				case 8: return 0;

				case 9: break;

				case 10: break;

				default: break;
				}
				if (gameplay::is_bit_set(Global_2313, 9)) {
					return 0;
				}
			}
			func_66();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_65();
		return 1;
	}
	if (Global_15745 == 5) {
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747) {
		return 0;
	}
	if (iParam1 == 2) {
	}
	else {
		func_76();
	}
	return 0;
}

// Position - 0x31CF
void func_65() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x3200
void func_66() {
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = {Global_15827};
	Global_15845 = {Global_15833};
	Global_15800 = Global_15799;
	Global_15869 = {Global_15851};
	Global_15875 = {Global_15857};
	Global_15881 = {Global_15863};
	Global_15887 = {Global_15893};
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = {Global_15776};
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	gameplay::clear_bit(&Global_2314, 16);
}

// Position - 0x3295
bool func_67() {
	int iVar0;
	int iVar1;

	if (Global_69702) {
		iVar0 = 0;
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar1, 1);
		if (player::is_player_playing(player::player_id())) {
			if (iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper") ||
				iVar1 == joaat("weapon_remotesniper")) {
				iVar0 = 1;
			}
		}
		if (cam::is_aim_cam_active() && iVar0 == 1) {
			return true;
		}
		else {
			return false;
		}
	}
	if (player::is_player_playing(player::player_id())) {
		if (ped::get_ped_config_flag(player::player_ped_id(), 78, 1)) {
			return true;
		}
		else {
			return false;
		}
	}
	return true;
}

// Position - 0x332E
void func_68() {
	if (func_48(14)) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[0 /*29*/]) {
				Global_14443 = 0;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[1 /*29*/]) {
				Global_14443 = 1;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[2 /*29*/]) {
				Global_14443 = 2;
			}
			else {
				Global_14443 = 0;
			}
		}
	}
	else {
		Global_14443 = func_69();
		if (Global_14443 == 145) {
			Global_14443 = 3;
		}
		if (Global_69702) {
			Global_14443 = 3;
		}
		if (Global_14443 > 3) {
			Global_14443 = 3;
		}
	}
}

// Position - 0x33D0
int func_69() {
	func_70();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x33E9
void func_70() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_73(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_72(player::player_ped_id());
			if (func_71(iVar0) && (!func_48(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_71(Global_101700.f_2095.f_539.f_3549)) {
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else {
			if (Global_101700.f_2095.f_539.f_3549 != 145) {
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

// Position - 0x34E6
bool func_71(int iParam0) { return iParam0 < 3; }

// Position - 0x34F2
int func_72(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_73(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x352F
int func_73(int iParam0) {
	if (func_71(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x3559
void func_74() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15) {
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&Global_15034[iVar0 /*10*/].f_1, "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = {0f, 0f, 0f};
}

// Position - 0x35B0
bool func_75(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x35EB
void func_76() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_mobile_phone_call_ongoing() || Global_14443.f_1 == 9 || Global_14442 == 1) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0x3642
void func_77(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	Global_15199 = {*uParam0};
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0) {
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else {
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0) {
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else {
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

// Position - 0x3698
bool func_78(int iParam0) {
	if (func_16(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x36B8
bool func_79(char *sParam0, int iParam1, char *sParam2) {
	ui::begin_text_command_is_message_displayed(sParam0);
	if (iParam1 == 1) {
		ui::add_text_component_substring_text_label(sParam2);
	}
	return ui::end_text_command_is_message_displayed();
}

// Position - 0x36D6
void func_80() {
	int iVar0;

	if (iLocal_311 == 1) {
		if (iLocal_295 == iLocal_257) {
			func_274(753);
		}
		audio::trigger_music_event("EPS8_PASS");
		Global_101700.f_17533.f_388 = 1;
	}
	else {
		audio::trigger_music_event("EPS8_PASS");
		Global_101700.f_17533.f_388 = 0;
	}
	stats::stat_get_int(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 20) {
		stats::stat_set_int(joaat("num_epsilon_step"), 20, 1);
		func_49(23, 20);
	}
	func_35(23, 1);
	func_81(80, 1);
	iLocal_327 = 1;
	func_466();
}

// Position - 0x3760
void func_81(int iParam0, int iParam1) {
	int iVar0;
	char *sVar1;

	iVar0 = func_272();
	if (iVar0 == -1) {
		return;
	}
	if (!Global_100787[iVar0 /*10*/].f_4) {
		return;
	}
	if (Global_100787[iVar0 /*10*/].f_5) {
		return;
	}
	if (Global_100787[iVar0 /*10*/].f_6) {
		return;
	}
	func_243(iVar0, 0);
	gameplay::set_bit(&Global_69950, 1);
	if (Global_100787[iVar0 /*10*/].f_9 == -1) {
	}
	else {
		func_242(&Global_100787[iVar0 /*10*/].f_9);
	}
	if (iParam1) {
		if (player::is_player_playing(player::player_id())) {
			player::set_player_wanted_level(player::player_id(), 0, 0);
			player::set_player_wanted_level_now(player::player_id(), 0);
			player::start_firing_amnesty(5000);
		}
	}
	func_230(iVar0, 1, 0, 0);
	func_229(0, 0);
	MemCopy(&sVar1, {func_227(iVar0)}, 4);
	func_225(&sVar1, func_226());
	func_108();
	if (gameplay::is_bit_set(Global_101700.f_8975.f_25, 3)) {
		func_107();
	}
	func_89();
	if (iParam0 == 210 || iParam0 == 211) {
		func_84(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111) {
		func_84(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322) {
		func_84(iParam0, 0, 0);
	}
	func_82();
}

// Position - 0x3897
int func_82() {
	if (func_83(0)) {
		return 0;
	}
	if (Global_91530.f_8) {
		if (Global_91530.f_10 > 0) {
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1) {
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

// Position - 0x38E2
bool func_83(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x390D
void func_84(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_87(891 + iParam0, 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1) {
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12) {
			bVar0 = false;
		}
	}
	else {
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = iParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0) {
		func_85();
	}
}

// Position - 0x39F5
void func_85() {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	iVar0 = 0;
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321) {
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1) {
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6) {
			case 1:
				Global_101436++;
				fVar1 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 3:
				Global_101437++;
				fVar2 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 5:
				Global_101438++;
				fVar3 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 7:
				Global_101439++;
				fVar4 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 9:
				Global_101440++;
				fVar5 += Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f;
				break;

			case 11:
				Global_101441++;
				fVar6 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 13:
				Global_101442++;
				fVar7 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			default: break;
			}
		}
		iVar0++;
	}
	if (Global_101419 > 0) {
		if (Global_101436 == Global_101419) {
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0) {
		if (Global_101437 == Global_101420) {
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0) {
		if (Global_101438 == Global_101421) {
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0) {
		if (Global_101439 == Global_101422) {
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0) {
		if (Global_101440 == Global_101423 || Global_101423 * 10 / Global_101440 < 41 ||
			Global_101440 > Global_101426 || Global_101440 == Global_101426) {
			if (!gameplay::is_bit_set(Global_101700.f_9153.f_3856, 14)) {
				if (Global_101440 == Global_101423) {
					stats::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_101423, 0);
					gameplay::set_bit(&Global_101700.f_9153.f_3856, 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0) {
		if (Global_101441 == Global_101424) {
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0) {
		if (Global_101442 == Global_101425) {
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426) {
		iVar9 = Global_101426;
	}
	else {
		iVar9 = Global_101440;
	}
	stats::stat_set_int(joaat("num_missions_completed"), Global_101436, 1);
	stats::stat_set_int(joaat("num_missions_available"), Global_101419, 1);
	stats::stat_set_int(joaat("num_minigames_completed"), Global_101437, 1);
	stats::stat_set_int(joaat("num_minigames_available"), Global_101420, 1);
	stats::stat_set_int(joaat("num_oddjobs_completed"), Global_101438, 1);
	stats::stat_set_int(joaat("num_oddjobs_available"), Global_101421, 1);
	stats::stat_set_int(joaat("num_rndpeople_completed"), Global_101439, 1);
	stats::stat_set_int(joaat("num_rndpeople_available"), Global_101422, 1);
	stats::stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stats::stat_set_int(joaat("num_rndevents_available"), Global_101426, 1);
	stats::stat_set_int(joaat("num_misc_completed"), Global_101442 + Global_101441, 1);
	stats::stat_set_int(joaat("num_misc_available"), Global_101425 + Global_101424, 1);
	Global_101443 = Global_101436 * 100 / Global_101419;
	Global_101445 = Global_101438 + Global_101437 * 100 / (Global_101421 + Global_101420);
	Global_101444 = Global_101439 + iVar9 * 100 / (Global_101422 + Global_101426);
	Global_101446 = Global_101441 + Global_101442 * 100 / (Global_101424 + Global_101425);
	stats::stat_set_float(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	stats::stat_set_int(joaat("percent_story_missions"), Global_101443, 1);
	stats::stat_set_int(joaat("percent_ambient_missions"), Global_101444, 1);
	stats::stat_set_int(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_101700.f_9153.f_3853)) {
		func_49(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_86() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_82();
				}
			}
		}
	}
}

// Position - 0x3EB6
int func_86() { return Global_25190; }

// Position - 0x3EC1
int func_87(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;

	if (iParam2 == -1) {
		iParam2 = func_88();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		uVar2 = stats::_get_pstat_bool_hash(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - stats::_0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		uVar3 = stats::_get_pstat_bool_hash(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - stats::_0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		uVar4 = stats::_get_pstat_bool_hash(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - stats::_0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		uVar5 = stats::_get_pstat_bool_hash(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - stats::_0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		uVar6 = stats::_get_tupstat_bool_hash(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - stats::_0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		uVar7 = stats::_get_tupstat_bool_hash(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - stats::_0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		uVar8 = stats::_get_ngstat_bool_hash(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		uVar9 = stats::_get_ngstat_bool_hash(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		uVar10 = stats::_get_ngstat_bool_hash(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - stats::_0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		uVar11 = stats::_get_ngstat_bool_hash(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		uVar12 = stats::_get_ngstat_bool_hash(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		uVar13 = stats::_get_ngstat_bool_hash(iParam0 - 9361, 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = iParam0 - 9361 - stats::_0xF4D8E7AC2A27758C(iParam0 - 9361) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

// Position - 0x4256
var func_88() { return Global_1312735; }

// Position - 0x4262
void func_89() {
	func_106();
	func_98();
	func_94();
	func_93();
	func_92();
	func_91();
	Global_91528 = 0;
	Global_85999 = -1;
	gameplay::clear_bit(&Global_91491.f_20, 17);
	Global_91526 = 0;
	gameplay::_disable_automatic_respawn(0);
	gameplay::ignore_next_restart(0);
	gameplay::set_fade_in_after_death_arrest(1);
	gameplay::set_fade_out_after_arrest(1);
	gameplay::set_fade_out_after_death(1);
	func_90(0);
}

// Position - 0x42BB
void func_90(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_91491.f_20, 13);
	}
	else {
		gameplay::clear_bit(&Global_91491.f_20, 13);
	}
}

// Position - 0x42E4
void func_91() {
	Global_69942 = {0f, 0f, 0f};
	Global_69945 = 0f;
	Global_91491.f_21 = 145;
}

// Position - 0x4302
void func_92() {
	StringCopy(&Global_69934, "", 16);
	StringCopy(&Global_69938, "", 16);
}

// Position - 0x431C
void func_93() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6) {
		Global_91491.f_22[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x4341
void func_94() {
	Global_91491 = 13;
	Global_91491.f_1 = -1;
	Global_91491.f_2 = 0;
	Global_91491.f_30 = 0f;
	gameplay::clear_bit(&Global_91491.f_20, 25);
	Global_91525 = 0;
	func_97(0);
	func_96();
	func_95();
	Global_91491.f_18 = -1;
	Global_91491.f_19 = -1;
}

// Position - 0x4390
void func_95() {
	gameplay::clear_bit(&Global_91491.f_20, 22);
	gameplay::clear_bit(&Global_91491.f_20, 8);
}

// Position - 0x43B0
void func_96() {
	if (Global_91491.f_16 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_91491.f_16);
		Global_91491.f_16 = 0;
	}
	if (Global_91491.f_17 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_91491.f_17);
		Global_91491.f_17 = 0;
	}
}

// Position - 0x43EE
void func_97(int iParam0) {
	if (iParam0 == 1) {
		Global_36330 = 1;
	}
	else {
		Global_36330 = 0;
	}
}

// Position - 0x4407
void func_98() { func_99(&Global_96040); }

// Position - 0x4417
void func_99(var *uParam0) {
	int iVar0;
	int iVar1;

	*uParam0 = 145;
	func_105(&uParam0->f_1);
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3) {
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_104(&uParam0->f_25[0 /*295*/][iVar1 /*98*/]);
		func_104(&uParam0->f_25[1 /*295*/][iVar1 /*98*/]);
		iVar0 = 0;
		while (iVar0 < 12) {
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9) {
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4) {
			uParam0->f_1665[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10) {
			uParam0->f_1665[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15) {
			uParam0->f_1665[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1762[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3) {
			uParam0->f_2259[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			uParam0->f_1766[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_103(&uParam0->f_2305);
	func_101(&uParam0->f_2311);
	func_100(&uParam0->f_2401);
}

// Position - 0x495F
void func_100(var *uParam0) {
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

// Position - 0x497A
void func_101(var *uParam0) {
	func_102(&uParam0->f_12);
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = {0f, 0f, 0f};
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

// Position - 0x49A9
void func_102(var *uParam0) {
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&uParam0->f_1, "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49) {
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

// Position - 0x4A59
void func_103(var *uParam0) {
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

// Position - 0x4A77
void func_104(var *uParam0) {
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11) {
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&uParam0->f_27, "", 16);
	iVar0 = 0;
	while (iVar0 <= 48) {
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

// Position - 0x4B57
void func_105(int *iParam0) { *iParam0 = -15; }

// Position - 0x4B65
void func_106() {
	StringCopy(&Global_93627, "", 32);
	func_99(&Global_93635);
}

// Position - 0x4B7E
void func_107() {
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 0) {
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 0) {
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 0) {
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	gameplay::set_bit(&Global_2313, 25);
	gameplay::set_bit(&Global_2314, 11);
}

// Position - 0x4BFB
void func_108() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 8) {
		iVar1 = Global_89193[iVar0];
		if (entity::does_entity_exist(iVar1) && !ped::is_ped_injured(iVar1)) {
			iVar3 = func_72(iVar1);
			iVar2 = -99;
			switch (iVar3) {
			case 0: iVar2 = 112; break;

			case 1: iVar2 = 158; break;

			case 2: iVar2 = 154; break;
			}
			if (iVar2 != -99) {
				if (func_224(iVar1, 14, iVar2)) {
					func_109(iVar1, 14, iVar2);
				}
				if (Global_101700.f_2095.f_539[iVar3 /*65*/].f_39[2] == iVar2) {
					Global_101700.f_2095.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x4CBC
int func_109(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar19;
	int iVar20;
	var uVar21;
	var uVar31;
	int iVar48;

	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_160(iVar0, iParam1, iParam2)};
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return 0;
	}
	if (!func_224(iParam0, iParam1, iParam2)) {
		return 0;
	}
	if (iParam1 == 12) {
		uVar2 = {func_156(iVar0, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 14) {
			if (uVar2[iVar1] != -99) {
				func_109(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13) {
		uVar21 = {func_153(iVar0, iParam2)};
		iVar19 = 0;
		while (iVar19 <= 8) {
			if (!func_109(iParam0, 14, uVar21[iVar19])) {
				iVar20 = 0;
			}
			iVar19++;
		}
		return iVar20;
	}
	else if (iParam1 == 14) {
		ped::clear_ped_prop(iParam0, Global_69523[1 /*14*/].f_12);
	}
	else {
		uVar31 = {func_156(iVar0, 0)};
		Global_69523[1 /*14*/] = {func_160(iVar0, iParam1, uVar31[iParam1])};
		if (ped::get_number_of_ped_drawable_variations(iParam0, func_152(iParam1)) > 0 &&
			ped::get_number_of_ped_texture_variations(iParam0, func_152(iParam1), Global_69523[1 /*14*/].f_3) > 0) {
			ped::set_ped_component_variation(iParam0, func_152(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, 0);
		}
	}
	if (func_151(iParam0, iVar0, &iVar48, 0)) {
		func_112(iParam0, 2, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_110(iParam0, iVar0, &iVar48)) {
		func_112(iParam0, 1, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

// Position - 0x4E79
bool func_110(int iParam0, int iParam1, int *iParam2) {
	int iVar0;

	iVar0 = func_111(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 != -99) {
		if (!func_224(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_64,
					  Global_101700.f_2095.f_539[iVar0 /*65*/].f_63)) {
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

// Position - 0x4F05
int func_111(int iParam0) {
	switch (iParam0) {
	case joaat("player_zero"): return 0;

	case joaat("player_one"): return 1;

	case joaat("player_two"): return 2;

	default: break;
	}
	return 145;
}

// Position - 0x4F40
int func_112(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int *iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var *uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;

	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	Global_69522++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = entity::get_entity_model(iParam0);
	if (iParam5 == 0) {
		Global_69523[1 /*14*/] = {func_160(iVar10, iParam1, iParam2)};
		if (!func_150(iParam3)) {
			Global_69522--;
			return 0;
		}
		func_143(iParam1);
	}
	if (iParam1 == 12) {
		if (iParam7 == 1) {
			if (iVar10 == joaat("player_one")) {
				iVar5 = func_141(iParam0, 8);
				if (iVar5 != 9) {
					iVar5 = -99;
				}
			}
			iVar6 = func_141(iParam0, 9);
			if (iVar10 == joaat("player_zero")) {
				if (iVar6 >= 9 && iVar6 <= 14) {
				}
				else {
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one")) {
				if (iVar6 >= 5 && iVar6 <= 10) {
				}
				else {
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two")) {
				if (iVar6 >= 9 && iVar6 <= 14 || iVar6 >= 15 && iVar6 <= 16) {
				}
				else {
					iVar6 = -99;
				}
			}
			iVar7 = func_140(iParam0, 1);
			if (!func_139(iVar10, 14, iVar7, -1)) {
				iVar7 = -99;
			}
			iVar8 = func_140(iParam0, 0);
			if (!func_138(iVar10, 14, iVar8, -1) && !func_137(iVar10, 14, iVar8, -1)) {
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one")) {
				iVar9 = func_140(iParam0, 2);
			}
		}
		ped::clear_all_ped_props(iParam0);
		uVar11 = 15;
		if (iParam5 == 1) {
			uVar11 = {Global_69566};
		}
		else {
			uVar11 = {func_156(iVar10, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14) {
			if (uVar11[iVar0] != -99) {
				Global_69523[1 /*14*/] = {func_160(iVar10, iVar0, uVar11[iVar0])};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
					if (iVar0 == 13) {
						uVar28 = 9;
						if (iParam5 == 1) {
							uVar28 = {Global_69583};
						}
						else {
							uVar28 = {func_153(iVar10, uVar11[iVar0])};
						}
						iVar1 = 0;
						while (iVar1 <= 8) {
							Global_69523[1 /*14*/] = {func_160(iVar10, 14, uVar28[iVar1])};
							func_128(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3,
									 Global_69523[1 /*14*/].f_4);
							func_143(14);
							if (Global_69522 == 1) {
								iVar2 = 0;
								while (iVar2 < 15) {
									iVar3 = func_120(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99) {
										func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12) {
						if (iVar10 == joaat("player_one") && iVar0 == 2 && uVar11[iVar0] == 20) {
							func_119(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1) {
							ped::set_ped_component_variation(iParam0, func_152(iVar0), Global_69523[1 /*14*/].f_3,
															 Global_69523[1 /*14*/].f_4,
															 ped::get_ped_palette_variation(iParam0, func_152(iVar0)));
						}
						else {
							ped::set_ped_component_variation(iParam0, func_152(iVar0), Global_69523[1 /*14*/].f_3,
															 Global_69523[1 /*14*/].f_4, iParam4);
						}
						func_143(iVar0);
						if (Global_69522 == 1) {
							iVar2 = 0;
							while (iVar2 < 15) {
								iVar3 = func_120(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99) {
									func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14) {
				Global_69523[1 /*14*/] = {func_160(iVar10, iVar0, func_118(iParam0, iVar0, -1))};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 3)) {
					if (iVar0 == 2) {
						if (iVar10 == joaat("player_one")) {
							if (func_151(iParam0, iVar10, &iVar4, 1)) {
								func_112(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else {
						uVar38 = {func_156(iVar10, 0)};
						func_112(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1) {
			Var55 = {func_160(iVar10, 8, iVar5)};
			if (iVar5 != -99) {
				if (func_116(iVar10, iParam2, 8, iVar5, &uVar11, &Var55)) {
					func_112(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_160(iVar10, 9, iVar6)};
			if (iVar6 != -99) {
				if (func_116(iVar10, iParam2, 9, iVar6, &uVar11, &Var55)) {
					func_112(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_160(iVar10, 14, iVar7)};
			if (iVar7 != -99) {
				if (func_116(iVar10, iParam2, 14, iVar7, &uVar11, &Var55)) {
					func_112(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_160(iVar10, 14, iVar8)};
			if (iVar8 != -99) {
				if (func_116(iVar10, iParam2, 14, iVar8, &uVar11, &Var55)) {
					func_112(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_160(iVar10, 14, iVar9)};
			if (iVar9 != -99) {
				if (func_116(iVar10, iParam2, 14, iVar9, &uVar11, &Var55)) {
					func_112(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13) {
		uVar69 = {func_153(iVar10, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8) {
			Global_69523[1 /*14*/] = {func_160(iVar10, 14, uVar69[iVar1])};
			func_128(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
			func_143(14);
			if (Global_69522 == 1) {
				iVar2 = 0;
				while (iVar2 < 15) {
					iVar3 = func_120(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99) {
						func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14) {
		func_128(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
		func_143(iParam1);
		if (Global_69522 == 1) {
			iVar2 = 0;
			while (iVar2 < 15) {
				iVar3 = func_120(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99) {
					func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else {
		if (iParam4 == -1) {
			ped::set_ped_component_variation(iParam0, func_152(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4,
											 ped::get_ped_palette_variation(iParam0, func_152(iParam1)));
		}
		else {
			ped::set_ped_component_variation(iParam0, func_152(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, iParam4);
		}
		if (Global_69522 == 1) {
			iVar2 = 0;
			while (iVar2 < 15) {
				iVar3 = func_120(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99) {
					func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0) {
			func_113(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69522 == 1) {
		if (func_151(iParam0, iVar10, &iVar4, 0)) {
			func_112(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_110(iParam0, iVar10, &iVar4)) {
			func_112(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_69522--;
	return 1;
}

// Position - 0x574C
void func_113(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (iParam0 == joaat("player_zero")) {
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one")) {
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two")) {
		iVar0 = 4;
	}
	if (func_115(iParam0, 12, iVar0)) {
		if (func_114(iParam0, iParam1, iParam2)) {
			iVar1 = func_111(iParam0);
			if (iParam1 == 3) {
				Global_101700.f_2095.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4) {
				Global_101700.f_2095.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

// Position - 0x57D6
bool func_114(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == joaat("player_zero")) {
		if (iParam1 == 4) {
			if (iParam2 >= 47 && iParam2 <= 54) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 77 && iParam2 <= 84) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (iParam1 == 4) {
			if (iParam2 >= 14 && iParam2 <= 21) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 41 && iParam2 <= 56) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 4) {
			if (iParam2 >= 18 && iParam2 <= 29) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 54 && iParam2 <= 69) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x58B4
bool func_115(int iParam0, int iParam1, int iParam2) {
	Global_69523[1 /*14*/] = {func_160(iParam0, iParam1, iParam2)};
	return gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2);
}

// Position - 0x58DE
bool func_116(int iParam0, int iParam1, int iParam2, int iParam3, var *uParam4, var *uParam5) {
	var uVar0;
	int iVar10;

	if ((*uParam4)[iParam2] == iParam3) {
		return true;
	}
	if ((*uParam4)[iParam2] == -99 && iParam2 != 14 && iParam2 != 13) {
		return true;
	}
	if (iParam2 == 13 || iParam2 == 14 && (*uParam4)[13] == 31) {
		if (iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 ||
			iParam3 == 6 || iParam3 == 7 || iParam3 == 8) {
			return true;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1) {
		return true;
	}
	if (iParam2 == 14) {
		uVar0 = {func_153(iParam0, (*uParam4)[13])};
		iVar10 = 0;
		while (iVar10 <= 8) {
			if (uVar0[iVar10] == iParam3) {
				return true;
			}
			iVar10++;
		}
	}
	if (func_117(iParam0, iParam2, iParam3)) {
		return true;
	}
	if (iParam0 == joaat("player_zero")) {
		if (func_139(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 18 ||
				iParam1 == 50) {
				return false;
			}
			return true;
		}
		else if (func_138(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 0) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
			}
			return true;
		}
		else if (func_137(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (func_139(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7) {
				return false;
			}
			return true;
		}
		else if (func_138(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				if (iParam2 == 8) {
					if (iParam3 == 9) {
						if (iParam1 == 8 || iParam1 == 21) {
							return true;
						}
					}
					else {
						return false;
					}
				}
				else {
					return false;
				}
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 26) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 5 && iParam3 <= 10) {
						return false;
					}
				}
			}
			else if (iParam2 == 14) {
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 26 && iParam3 <= 39) {
						return false;
					}
				}
			}
			return true;
		}
		else if (func_137(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				return false;
			}
			return true;
		}
		else if (iParam2 == 14) {
			if (iParam3 >= 159 && iParam3 <= 174) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 2) {
			if (iParam2 == 14 && iParam3 == 0) {
				return true;
			}
		}
		if (func_139(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 6 || iParam1 == 8 || iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			return true;
		}
		else if (func_138(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 15) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
			}
			return true;
		}
		else if (func_137(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 12) {
				return false;
			}
			return true;
		}
	}
	return false;
}

// Position - 0x5EE2
bool func_117(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 15) {
				return true;
			}
			break;

		case 9:
			if (iParam2 == 6) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 1 || iParam2 == 10) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 4) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x5F7B
int func_118(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 == 12) {
			iVar0 = 0;
			while (iVar0 <= 53) {
				if (func_224(iParam0, iParam1, iVar0)) {
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13) {
			iVar1 = 0;
			while (iVar1 <= 19) {
				if (func_224(iParam0, iParam1, iVar1)) {
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14) {
			if (iParam2 == -1) {
			}
			else {
				return func_140(iParam0, iParam2);
			}
		}
		else {
			return func_141(iParam0, iParam1);
		}
	}
	return -99;
}

// Position - 0x601C
int func_119(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;

	*iParam3 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 7 || iParam2 == 23) {
				*iParam3 = 1;
			}
			break;

		case 9:
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14) {
				*iParam3 = 1;
			}
			break;

		case 10:
			if (iParam2 >= 44 && iParam2 <= 47) {
				*iParam3 = 1;
			}
			break;

		case 14:
			if (iParam2 >= 31 && iParam2 <= 32 || iParam2 >= 33 && iParam2 <= 34 || iParam2 >= 35 && iParam2 <= 36 ||
				iParam2 == 37 || iParam2 >= 40 && iParam2 <= 41 || iParam2 == 46) {
				*iParam3 = 1;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 2:
			if (iParam2 == 20) {
				*iParam3 = 20;
			}
			break;

		case 8:
			if (iParam2 == 4) {
				*iParam3 = 19;
			}
			break;

		case 9:
			if (iParam2 >= 5 && iParam2 <= 10) {
				*iParam3 = 19;
			}
			break;

		case 10:
			if (iParam2 >= 47 && iParam2 <= 50) {
				*iParam3 = 19;
			}
			break;

		case 14:
			if (iParam2 >= 26 && iParam2 <= 27 || iParam2 >= 28 && iParam2 <= 29 || iParam2 >= 30 && iParam2 <= 31 ||
				iParam2 == 32 || iParam2 >= 35 && iParam2 <= 36) {
				*iParam3 = 19;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 7) {
				*iParam3 = 2;
			}
			break;

		case 9:
			if (iParam2 >= 9 && iParam2 <= 14 || iParam2 >= 15 && iParam2 <= 16) {
				*iParam3 = 2;
			}
			break;

		case 10:
			if (iParam2 >= 29 && iParam2 <= 32) {
				*iParam3 = 2;
			}
			break;

		case 14:
			if (iParam2 >= 47 && iParam2 <= 48 || iParam2 >= 49 && iParam2 <= 50 || iParam2 >= 51 && iParam2 <= 52 ||
				iParam2 == 53 || iParam2 >= 56 && iParam2 <= 57 || iParam2 == 62) {
				*iParam3 = 2;
			}
			break;
		}
		break;
	}
	if (*iParam3 != -99) {
		iVar0 = func_111(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

// Position - 0x6323
var func_120(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int *iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = -99;
	if (iParam4 == 0) {
		switch (iParam2) {
		case 2:
			iVar1 = func_141(iParam0, 1);
			iVar0 = func_127(iParam1, iParam3, iVar1);
			break;

		case 1:
			iVar2 = func_141(iParam0, 2);
			iVar0 = func_127(iParam1, iVar2, iParam3);
			break;
		}
	}
	else if (iParam4 == 2) {
		func_119(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1) {
		func_126(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6) {
		if (iParam2 == 4) {
			if (func_125(iParam1, iParam3, &iVar0)) {
			}
		}
	}
	else {
		switch (iParam1) {
		case joaat("player_zero"):
			switch (iParam4) {
			case 3:
				switch (iParam2) {
				case 10:
					switch (iParam3) {
					case 36: iVar0 = 17; break;

					case 37: iVar0 = 17; break;

					case 38: iVar0 = 18; break;

					case 39: iVar0 = 18; break;

					case 40: iVar0 = 19; break;

					case 41: iVar0 = 19; break;

					case 42: iVar0 = 20; break;

					case 43: iVar0 = 20; break;
					}
					break;

				case 11:
					if (iParam3 >= 2 && iParam3 <= 7) {
						if (!func_124(iParam0, 3, 44, 59)) {
							iVar0 = 44;
						}
					}
					else if (iParam3 >= 8 && iParam3 <= 17 || iParam3 >= 18 && iParam3 <= 27 ||
							 iParam3 >= 28 && iParam3 <= 43) {
						if (!func_124(iParam0, 3, 135, 150)) {
							iVar0 = func_123(iParam1, 3, 135, 150);
						}
					}
					break;
				}
				break;

			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 63: iVar0 = 4; break;

					case 61: iVar0 = 3; break;

					case 16: iVar0 = 1; break;

					case 114: iVar0 = 15; break;

					case 115: iVar0 = 17; break;

					case 116: iVar0 = 16; break;

					case 117: iVar0 = 18; break;

					case 118: iVar0 = 20; break;

					case 119: iVar0 = 19; break;

					case 125: iVar0 = 21; break;

					case 120: iVar0 = 22; break;

					case 124: iVar0 = 23; break;

					case 126: iVar0 = 24; break;

					case 121: iVar0 = 25; break;

					case 127: iVar0 = 26; break;

					case 128: iVar0 = 27; break;

					case 85: iVar0 = 6; break;

					case 77: iVar0 = 7; break;

					case 78: iVar0 = 8; break;

					case 79: iVar0 = 9; break;

					case 80: iVar0 = 10; break;

					case 81: iVar0 = 11; break;

					case 82: iVar0 = 12; break;

					case 83: iVar0 = 13; break;

					case 84: iVar0 = 14; break;

					case 21: iVar0 = 31; break;

					case 22: iVar0 = 30; break;

					case 23: iVar0 = 29; break;

					case 24: iVar0 = 28; break;

					case 25: iVar0 = 33; break;

					case 26: iVar0 = 35; break;

					case 27: iVar0 = 34; break;

					case 28: iVar0 = 32; break;

					default:
						if (iParam3 >= 17 && iParam3 <= 20) {
						}
						else {
							iVar0 = 0;
						}
						break;
					}
					break;

				case 11:
					if (iParam3 != 0) {
						iVar0 = 0;
					}
					break;
				}
				break;

			case 11:
				if (iParam2 == 3) {
					if (iParam3 >= 44 && iParam3 <= 59 || iParam3 >= 135 && iParam3 <= 150) {
					}
					else {
						iVar0 = 0;
					}
				}
				else if (iParam2 == 10) {
					if (iParam3 >= 36 && iParam3 <= 43) {
						iVar0 = 0;
					}
				}
				break;
			}
			break;

		case joaat("player_one"):
			switch (iParam4) {
			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 17: iVar0 = 2; break;

					case 90: iVar0 = 1; break;

					case 268: iVar0 = 3; break;

					case 269: iVar0 = 5; break;

					case 270: iVar0 = 4; break;

					case 271: iVar0 = 6; break;

					case 272: iVar0 = 8; break;

					case 273: iVar0 = 7; break;

					case 279: iVar0 = 9; break;

					case 274: iVar0 = 10; break;

					case 278: iVar0 = 11; break;

					case 280: iVar0 = 12; break;

					case 275: iVar0 = 13; break;

					case 281: iVar0 = 14; break;

					case 282: iVar0 = 15; break;

					case 107: iVar0 = 16; break;

					case 108: iVar0 = 17; break;

					case 109: iVar0 = 18; break;

					case 110: iVar0 = 19; break;

					case 111: iVar0 = 20; break;

					case 112: iVar0 = 21; break;

					case 113: iVar0 = 22; break;

					case 114: iVar0 = 23; break;

					case 115: iVar0 = 24; break;

					case 116: iVar0 = 25; break;

					case 117: iVar0 = 52; break;

					case 118: iVar0 = 27; break;

					case 119: iVar0 = 28; break;

					case 120: iVar0 = 29; break;

					case 121: iVar0 = 30; break;

					case 122: iVar0 = 31; break;

					case 296: iVar0 = 32; break;

					case 297: iVar0 = 33; break;

					case 298: iVar0 = 34; break;

					case 299: iVar0 = 35; break;

					case 300: iVar0 = 36; break;

					case 301: iVar0 = 37; break;

					case 302: iVar0 = 38; break;

					case 309: iVar0 = 39; break;

					case 310: iVar0 = 40; break;

					case 311: iVar0 = 41; break;

					case 312: iVar0 = 42; break;

					case 313: iVar0 = 43; break;

					case 314: iVar0 = 44; break;

					case 315: iVar0 = 45; break;

					case 316: iVar0 = 46; break;

					case 317: iVar0 = 51; break;

					default: iVar0 = 0; break;
					}
					break;

				case 11:
					if (iParam3 != 0) {
						iVar0 = 0;
					}
					break;
				}
				break;

			case 3:
				switch (iParam2) {
				case 11:
					if (iParam3 >= 47 && iParam3 <= 62) {
						if (!func_124(iParam0, 3, 209, 222)) {
							iVar0 = func_123(iParam1, 3, 209, 222);
						}
					}
					else if (iParam3 >= 1 && iParam3 <= 4 || iParam3 >= 5 && iParam3 <= 8) {
						if (!func_124(iParam0, 3, 243, 258)) {
							if (iParam3 == 1 || iParam3 == 5) {
								iVar0 = func_123(iParam1, 3, 243, 246);
							}
							else if (iParam3 == 2 || iParam3 == 6) {
								iVar0 = func_123(iParam1, 3, 247, 250);
							}
							else if (iParam3 == 3 || iParam3 == 7) {
								iVar0 = func_123(iParam1, 3, 251, 254);
							}
							else if (iParam3 == 4 || iParam3 == 8) {
								iVar0 = func_123(iParam1, 3, 255, 258);
							}
						}
					}
					else if (iParam3 == 41 || iParam3 == 42) {
						if (!func_124(iParam0, 3, 176, 191) && !func_124(iParam0, 3, 227, 242)) {
							iVar0 = func_123(iParam1, 3, 176, 191);
						}
					}
					break;
				}
				break;

			case 8:
				if (iParam2 == 11 || iParam2 == 3) {
					if (iParam2 == 11) {
						iVar5 = iParam3;
						iVar4 = func_141(iParam0, 3);
					}
					else if (iParam2 == 3) {
						iVar4 = iParam3;
						iVar5 = func_141(iParam0, 11);
						iVar5 = func_122(iParam1, iVar4, iVar5, 0);
					}
					iVar3 = func_141(iParam0, 8);
					if (iVar5 >= 5 && iVar5 <= 8 || iVar5 >= 25 && iVar5 <= 40 || iVar5 >= 42 && iVar5 <= 43) {
						if (!func_121(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6)) {
							if (iVar6 != -99) {
								iVar0 = iVar6;
							}
						}
					}
					else if (iVar3 >= 27 && iVar3 <= 42 || iVar3 >= 43 && iVar3 <= 58 || iVar3 >= 59 && iVar3 <= 74) {
						iVar0 = 26;
					}
				}
				break;

			case 11:
				if (iParam2 == 3) {
					if (iParam3 >= 209 && iParam3 <= 222) {
					}
					else if (iParam3 >= 176 && iParam3 <= 191 || iParam3 >= 227 && iParam3 <= 242 ||
							 iParam3 >= 243 && iParam3 <= 258) {
						iVar7 = func_141(iParam0, 8);
						iVar8 = func_141(iParam0, 11);
						if (iVar7 >= 27 && iVar7 <= 42 || iVar7 >= 43 && iVar7 <= 58 || iVar7 >= 59 && iVar7 <= 74) {
							iVar0 = func_122(iParam1, iParam3, iVar8, 0);
						}
						else {
							iVar0 = func_122(iParam1, iParam3, iVar8, 1);
						}
					}
					else if (iParam3 >= 41 && iParam3 <= 56) {
						iVar0 = 45;
					}
					else if (iParam3 >= 223 && iParam3 <= 226) {
						iVar0 = 44;
					}
					else {
						iVar0 = 0;
					}
				}
				else if (iParam2 == 8) {
					if (iParam3 >= 27 && iParam3 <= 42 || iParam3 >= 43 && iParam3 <= 58 ||
						iParam3 >= 59 && iParam3 <= 74) {
						iVar9 = func_141(iParam0, 11);
						iVar0 = func_122(iParam1, -99, iVar9, 0);
					}
				}
				break;
			}
			break;

		case joaat("player_two"):
			switch (iParam4) {
			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 50: iVar0 = 3; break;

					case 81: iVar0 = 5; break;

					case 82: iVar0 = 6; break;

					case 83: iVar0 = 7; break;

					case 84: iVar0 = 10; break;

					case 85: iVar0 = 9; break;

					case 86: iVar0 = 8; break;

					case 92: iVar0 = 22; break;

					case 87: iVar0 = 23; break;

					case 91: iVar0 = 24; break;

					case 93: iVar0 = 25; break;

					case 88: iVar0 = 26; break;

					case 94: iVar0 = 27; break;

					case 120: iVar0 = 11; break;

					case 121: iVar0 = 13; break;

					case 122: iVar0 = 14; break;

					case 124: iVar0 = 12; break;

					case 126: iVar0 = 18; break;

					case 128: iVar0 = 17; break;

					case 130: iVar0 = 19; break;

					case 131: iVar0 = 16; break;

					case 134: iVar0 = 15; break;

					case 135: iVar0 = 20; break;

					default: iVar0 = 0; break;
					}
					break;
				}
				break;
			}
			break;
		}
	}
	return iVar0;
}

// Position - 0x6ED6
int func_121(int iParam0, int iParam1, int iParam2, int iParam3, int *iParam4) {
	int iVar0;

	switch (iParam0) {
	case joaat("player_zero"): break;

	case joaat("player_one"):
		*iParam4 = 0;
		if (iParam1 >= 27 && iParam1 <= 42) {
			if (iParam2 != -99) {
				if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
				}
				else {
					if (iParam2 >= 42 && iParam2 <= 43) {
						if (iParam3 >= 176 && iParam3 <= 191) {
							iVar0 = iParam1 - 27;
							*iParam4 = 59 + iVar0;
						}
						else if (iParam3 >= 227 && iParam3 <= 242) {
							iVar0 = iParam1 - 27;
							*iParam4 = 43 + iVar0;
						}
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 227 && iParam3 <= 242 || iParam3 >= 176 && iParam3 <= 191 ||
					iParam3 >= 243 && iParam3 <= 258) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 43 && iParam1 <= 58) {
			if (iParam2 != -99) {
				if (iParam2 >= 42 && iParam2 <= 43) {
				}
				else {
					if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 43;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 227 && iParam3 <= 242) {
				}
				else {
					if (iParam3 >= 176 && iParam3 <= 191) {
						if (iParam2 >= 42 && iParam2 <= 43) {
							iVar0 = iParam1 - 43;
							*iParam4 = 59 + iVar0;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 59 && iParam1 <= 74) {
			if (iParam2 != -99) {
				if (iParam2 >= 42 && iParam2 <= 43) {
				}
				else {
					if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 59;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 176 && iParam3 <= 191) {
				}
				else {
					if (iParam3 >= 227 && iParam3 <= 242) {
						if (iParam2 >= 42 && iParam2 <= 43) {
							iVar0 = iParam1 - 59;
							*iParam4 = 43 + iVar0;
						}
					}
					else if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 59;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 12) {
			if (iParam3 != 241) {
				return 0;
			}
		}
		break;
	}
	return 1;
}

// Position - 0x71BA
int func_122(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (iParam1 >= 243 && iParam1 <= 246) {
		if (iParam3 == 1) {
			return 1;
		}
		else {
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250) {
		if (iParam3 == 1) {
			return 2;
		}
		else {
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254) {
		if (iParam3 == 1) {
			return 3;
		}
		else {
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258) {
		if (iParam3 == 1) {
			return 4;
		}
		else {
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258) {
		if (iParam3 == 1) {
			return 4;
		}
		else {
			return 8;
		}
	}
	else if (iParam1 >= 176 && iParam1 <= 191 || iParam1 >= 227 && iParam1 <= 242) {
		if (iParam2 >= 9 && iParam2 <= 24) {
			if (iParam3 == 1) {
				return iParam2;
			}
			else {
				iVar0 = iParam2 - 9;
				iParam2 = 25 + iVar0;
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40) {
			if (iParam3 == 1) {
				iVar0 = iParam2 - 25;
				iParam2 = 9 + iVar0;
				return iParam2;
			}
			else {
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42) {
			if (iParam3 == 1) {
				return 41;
			}
			else {
				return 42;
			}
		}
		else {
			if (iParam3 == 1) {
				iParam2 = func_123(iParam0, 11, 9, 24);
			}
			else {
				iParam2 = func_123(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99) {
				if (iParam3 == 1) {
					return 41;
				}
				else {
					return 42;
				}
			}
			else {
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4) {
		if (iParam3 == 1) {
			return iParam2;
		}
		else {
			iVar0 = iParam2 - 1;
			iParam2 = 5 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8) {
		if (iParam3 == 1) {
			iVar0 = iParam2 - 5;
			iParam2 = 1 + iVar0;
			return iParam2;
		}
		else {
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24) {
		if (iParam3 == 1) {
			return iParam2;
		}
		else {
			iVar0 = iParam2 - 9;
			iParam2 = 25 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40) {
		if (iParam3 == 1) {
			iVar0 = iParam2 - 25;
			iParam2 = 9 + iVar0;
			return iParam2;
		}
		else {
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42) {
		if (iParam3 == 1) {
			return 41;
		}
		else {
			return 42;
		}
	}
	return -99;
}

// Position - 0x7481
int func_123(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;

	iVar0 = iParam2;
	while (iVar0 <= iParam3 - 1) {
		iVar1 = iVar0;
		if (func_115(iParam0, iParam1, iVar1)) {
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

// Position - 0x74B8
int func_124(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = func_141(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3) {
		return 1;
	}
	return 0;
}

// Position - 0x74E1
bool func_125(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 16 || iParam1 == 17 || iParam1 == 21 || iParam1 == 22 || iParam1 == 32 ||
			iParam1 >= 34 && iParam1 <= 39 || iParam1 >= 41 && iParam1 <= 45 || iParam1 == 46 ||
			iParam1 >= 47 && iParam1 <= 54 || iParam1 >= 55 && iParam1 <= 70 || iParam1 >= 72 && iParam1 <= 79 ||
			iParam1 == 80 || iParam1 >= 81 && iParam1 <= 83 || iParam1 >= 84 && iParam1 <= 87 || iParam1 == 88 ||
			iParam1 >= 89 && iParam1 <= 91 || iParam1 == 95 || iParam1 >= 96 && iParam1 <= 111 || iParam1 == 112) {
			*iParam2 = 6;
			return true;
		}
		break;

	case joaat("player_one"):
		if (iParam1 == 12 || iParam1 >= 14 && iParam1 <= 21 || iParam1 == 32 || iParam1 == 52 ||
			iParam1 >= 69 && iParam1 <= 70 || iParam1 == 71 || iParam1 >= 72 && iParam1 <= 77) {
			*iParam2 = 17;
			return true;
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 4 || iParam1 == 5 || iParam1 == 6 || iParam1 == 7 || iParam1 == 14 ||
			iParam1 >= 18 && iParam1 <= 29 || iParam1 == 31 || iParam1 == 32 || iParam1 == 33 || iParam1 == 34 ||
			iParam1 >= 35 && iParam1 <= 42 || iParam1 >= 43 && iParam1 <= 53 || iParam1 >= 54 && iParam1 <= 61 ||
			iParam1 >= 71 && iParam1 <= 80 || iParam1 >= 81 && iParam1 <= 90 || iParam1 >= 94 && iParam1 <= 103) {
			*iParam2 = 8;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x77AB
int func_126(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;

	*iParam3 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 10:
			if (iParam2 >= 44 && iParam2 <= 47) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 31 && iParam2 <= 32 || iParam2 >= 33 && iParam2 <= 34 || iParam2 >= 35 && iParam2 <= 36 ||
				iParam2 == 37 || iParam2 >= 38 && iParam2 <= 39 || iParam2 >= 40 && iParam2 <= 41 ||
				iParam2 >= 42 && iParam2 <= 44) {
				*iParam3 = 0;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 10:
			if (iParam2 >= 47 && iParam2 <= 50) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 26 && iParam2 <= 27 || iParam2 >= 28 && iParam2 <= 29 || iParam2 >= 30 && iParam2 <= 31 ||
				iParam2 == 32 || iParam2 >= 35 && iParam2 <= 36) {
				*iParam3 = 0;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 9:
			if (iParam2 >= 15 && iParam2 <= 16) {
				*iParam3 = 0;
			}
			break;

		case 10:
			if (iParam2 >= 29 && iParam2 <= 32) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 47 && iParam2 <= 48 || iParam2 >= 49 && iParam2 <= 50 || iParam2 >= 51 && iParam2 <= 52 ||
				iParam2 == 53 || iParam2 >= 54 && iParam2 <= 55 || iParam2 >= 56 && iParam2 <= 57 ||
				iParam2 >= 58 && iParam2 <= 60) {
				*iParam3 = 0;
			}
			break;
		}
		break;
	}
	if (*iParam3 != -99) {
		iVar0 = func_111(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

// Position - 0x7A35
int func_127(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 1) {
			if (iParam2 == 0) {
				return 1;
			}
			else if (iParam2 == 4) {
				return 5;
			}
			else {
				return 3;
			}
		}
		else if (iParam2 == 0) {
			return 0;
		}
		else if (iParam2 == 4) {
			return 4;
		}
		else {
			return 2;
		}
		break;

	case joaat("player_one"):
		if (iParam1 >= 0 && iParam1 <= 15) {
			if (iParam2 == 0) {
				return 0;
			}
			else {
				return 3;
			}
		}
		else if (iParam1 >= 16 && iParam1 <= 17) {
			if (iParam2 == 0) {
				return 2;
			}
			else {
				return 5;
			}
		}
		else if (iParam1 == 18) {
			if (iParam2 == 0) {
				return 6;
			}
			else {
				return 7;
			}
		}
		else if (iParam1 == 19) {
			if (iParam2 == 0) {
				return 1;
			}
			else {
				return 4;
			}
		}
		else if (iParam2 == 0) {
			return 1;
		}
		else {
			return 4;
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 2) {
			if (iParam2 == 0) {
				return 2;
			}
			else {
				return 3;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 == 0) {
				return 4;
			}
			else {
				return 6;
			}
		}
		else if (iParam1 == 8) {
			return 5;
		}
		else if (iParam2 == 0) {
			return 0;
		}
		else {
			return 1;
		}
		break;
	}
	return -99;
}

// Position - 0x7B8C
void func_128(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (iParam2 == -1) {
		ped::clear_ped_prop(iParam0, iParam1);
		if (iParam1 == 0) {
			ped::set_ped_config_flag(iParam0, 34, 0);
			ped::set_ped_config_flag(iParam0, 36, 0);
		}
	}
	else {
		ped::set_ped_prop_index(iParam0, iParam1, iParam2, iParam3, network::network_is_game_in_progress());
		if (iParam1 == 0) {
			iVar0 = func_133(iParam0, iParam2, iParam3, iParam1);
			if (func_129(entity::get_entity_model(iParam0), 14, iVar0,
						 dlc1::get_hash_name_for_prop(iParam0, 0, iParam2, iParam3))) {
				ped::set_ped_config_flag(iParam0, 34, 1);
				ped::set_ped_config_flag(iParam0, 36, 1);
			}
			else {
				ped::set_ped_config_flag(iParam0, 34, 0);
				ped::set_ped_config_flag(iParam0, 36, 0);
			}
		}
	}
}

// Position - 0x7C24
bool func_129(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_130(iParam0, iParam2, 14, 3);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_130(iParam0, iParam2, 14, 4);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x7CF2
int func_130(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = iParam1 - func_132(iParam0);
		if (iVar19 < 0) {
			return -1;
		}
		iVar20 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iVar18 == iVar19) {
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var21);
		iVar39 = 0;
		iVar40 = iParam1 - func_131(iParam0, func_152(iParam2));
		if (iVar40 < 0) {
			return -1;
		}
		if (iParam0 == Global_69645.f_26[iParam2] && iParam1 == Global_69645[iParam2] &&
			Global_69645.f_13[iParam2] != 0) {
			return Global_69645.f_13[iParam2];
		}
		iVar41 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_152(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41) {
			dlc1::get_shop_ped_query_component(iVar38, &Var21);
			if (!dlc1::_is_dlc_data_empty(Var21)) {
				if (iVar39 == iVar40) {
					Global_69645.f_13[iParam2] = Var21.f_1;
					Global_69645[iParam2] = iParam1;
					Global_69645.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

// Position - 0x7E4E
int func_131(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 5;

		case 2: return 6;

		case 3: return 181;

		case 4: return 113;

		case 5: return 14;

		case 6: return 99;

		case 7: return 1;

		case 8: return 24;

		case 9: return 20;

		case 10: return 48;

		case 11: return 45;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 5;

		case 2: return 21;

		case 3: return 318;

		case 4: return 117;

		case 5: return 7;

		case 6: return 134;

		case 7: return 1;

		case 8: return 77;

		case 9: return 12;

		case 10: return 53;

		case 11: return 63;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 6;

		case 2: return 9;

		case 3: return 242;

		case 4: return 104;

		case 5: return 7;

		case 6: return 84;

		case 7: return 1;

		case 8: return 18;

		case 9: return 17;

		case 10: return 33;

		case 11: return 1;
		}
		break;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 91;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 92;

		case 8: return 241;

		case 9: return 46;

		case 10: return 7;

		case 11: return 237;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 92;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 55;

		case 8: return 136;

		case 9: return 36;

		case 10: return 6;

		case 11: return 256;
		}
		break;
	}
	return -99;
}

// Position - 0x8229
int func_132(int iParam0) {
	switch (iParam0) {
	case joaat("player_zero"): return 113;

	case joaat("player_one"): return 175;

	case joaat("player_two"): return 155;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"): return 327;

	case joaat("mp_f_freemode_01"): return 327;
	}
	return -99;
}

// Position - 0x828A
int func_133(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1) {
		return func_136(iParam3);
	}
	iVar0 = entity::get_entity_model(iParam0);
	iVar1 = dlc1::get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0) {
		if (iVar0 == joaat("mp_m_freemode_01")) {
			return func_135(entity::get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			return func_135(entity::get_entity_model(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = ped::get_number_of_ped_prop_drawable_variations(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= iVar2 - 1) {
		iVar6 = ped::get_number_of_ped_prop_texture_variations(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1) {
			iVar3 += iVar6;
		}
		else {
			iVar5 = 0;
			while (iVar5 <= iVar6 - 1) {
				if (iVar4 == iParam1 && iVar5 == iParam2) {
					iVar3 += func_134(iParam0, iParam3);
					return iVar3;
				}
				else {
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_136(iParam3);
}

// Position - 0x8386
int func_134(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = entity::get_entity_model(iParam0);
	switch (iVar0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 58;

		case 2: return 112;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 82;

		case 2: return 158;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 88;

		case 2: return 154;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;
	}
	return -99;
}

// Position - 0x84C4
int func_135(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iParam1 == Var0.f_1) {
					return func_132(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_152(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39) {
			dlc1::get_shop_ped_query_component(iVar37, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iParam1 == Var20.f_1) {
					return func_131(iParam0, func_152(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

// Position - 0x85A4
int func_136(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;
	}
	return 0;
}

// Position - 0x862A
bool func_137(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 16) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 40 || iParam2 >= 41 && iParam2 <= 56 || iParam2 >= 64 && iParam2 <= 79) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 17 && iParam2 <= 18 || iParam2 >= 71 && iParam2 <= 86) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_130(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_130(iParam0, iParam2, 14, 3), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_130(iParam0, iParam2, 1, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_130(iParam0, iParam2, 1, 3), -1842686353, 0);
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_130(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_130(iParam0, iParam2, 14, 4), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_130(iParam0, iParam2, 1, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_130(iParam0, iParam2, 1, 4), -1842686353, 0);
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x88A7
bool func_138(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0 == joaat("player_zero")) {
		if (iParam1 == 6) {
			if (iParam2 == 10) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 9 || iParam2 == 7 || iParam2 == 23) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 9 && iParam2 <= 14) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 12 || iParam2 == 59 || iParam2 == 60 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 ||
				iParam2 == 34 || iParam2 == 35 || iParam2 == 36 || iParam2 == 37 || iParam2 == 38 || iParam2 == 39 ||
				iParam2 == 40 || iParam2 == 41 || iParam2 >= 42 && iParam2 <= 44 || iParam2 == 54 || iParam2 == 55) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (iParam1 == 2) {
			if (iParam2 == 20) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 3 || iParam2 == 5 || iParam2 == 9) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 5 && iParam2 <= 10) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 82 || iParam2 == 10 || iParam2 == 26 || iParam2 == 27 || iParam2 == 28 || iParam2 == 29 ||
				iParam2 == 30 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 || iParam2 == 34 || iParam2 == 35 ||
				iParam2 == 36 || iParam2 >= 37 && iParam2 <= 39) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 8) {
			if (iParam2 == 14 || iParam2 == 7) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14 || iParam2 == 15 || iParam2 == 16) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 88 || iParam2 == 12 || iParam2 == 47 || iParam2 == 48 || iParam2 == 49 || iParam2 == 50 ||
				iParam2 == 51 || iParam2 == 52 || iParam2 == 53 || iParam2 == 54 || iParam2 == 55 || iParam2 == 56 ||
				iParam2 == 57 || iParam2 >= 58 && iParam2 <= 60) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_130(iParam0, iParam2, 1, 3);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_130(iParam0, iParam2, 1, 4);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

// Position - 0x8CA8
bool func_139(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 14) {
			if (iParam2 == 58 || iParam2 == 61 || iParam2 >= 62 && iParam2 <= 69 || iParam2 >= 70 && iParam2 <= 79 ||
				iParam2 >= 80 && iParam2 <= 89 || iParam2 == 90 || iParam2 >= 91 && iParam2 <= 102 ||
				iParam2 >= 103 && iParam2 <= 110 || iParam2 == 111) {
				return true;
			}
		}
		break;

	case joaat("player_one"):
		if (iParam1 == 14) {
			if (iParam2 >= 83 && iParam2 <= 92 || iParam2 == 93 || iParam2 == 94 || iParam2 >= 95 && iParam2 <= 101 ||
				iParam2 >= 102 && iParam2 <= 111 || iParam2 >= 112 && iParam2 <= 121 ||
				iParam2 >= 122 && iParam2 <= 131 || iParam2 >= 132 && iParam2 <= 139 ||
				iParam2 >= 140 && iParam2 <= 149 || iParam2 >= 150 && iParam2 <= 156 || iParam2 == 157) {
				return true;
			}
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 14) {
			if (iParam2 == 89 || iParam2 >= 90 && iParam2 <= 99 || iParam2 >= 100 && iParam2 <= 109 || iParam2 == 111 ||
				iParam2 == 112 || iParam2 >= 113 && iParam2 <= 122 || iParam2 >= 123 && iParam2 <= 132 ||
				iParam2 >= 133 && iParam2 <= 142 || iParam2 >= 143 && iParam2 <= 152 || iParam2 == 153) {
				return true;
			}
		}
		break;

	case joaat("mp_m_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_130(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_130(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;
	}
	return false;
}

// Position - 0x8F9B
int func_140(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = ped::get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1) {
		return func_136(iParam1);
	}
	iVar1 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	return func_133(iParam0, iVar0, iVar1, iParam1);
}

// Position - 0x8FE1
int func_141(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = func_152(iParam1);
	iVar1 = ped::get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = ped::get_ped_texture_variation(iParam0, iVar0);
	return func_142(iParam0, iVar1, iVar2, iParam1);
}

// Position - 0x9041
int func_142(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_152(iParam3);
	iVar1 = ped::get_number_of_ped_drawable_variations(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= iVar1 - 1) {
		iVar5 = ped::get_number_of_ped_texture_variations(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1) {
			iVar2 += iVar5;
		}
		else {
			iVar4 = 0;
			while (iVar4 <= iVar5 - 1) {
				if (iVar3 == iParam1 && iVar4 == iParam2) {
					return iVar2;
				}
				else {
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

// Position - 0x90C5
void func_143(int iParam0) {
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		func_149(iParam0, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 2, Global_69523[1 /*14*/].f_1, 1, 0);
	}
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1) && gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam0 == 12) {
			func_144(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13) {
		}
		else if (iParam0 == 14) {
			func_144(Global_2621444, 2, 1, 1, -1);
		}
		else {
			func_144(Global_2621444, 2, 1, 1, -1);
		}
	}
}

// Position - 0x917D
void func_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_148(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_147(iVar2, iVar0, 0);
		gameplay::set_bit(&iVar3, iVar1);
		func_145(iVar2, iVar3, iVar0, 1, 0);
	}
}

// Position - 0x91C7
void func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_146(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x91F7
int func_146(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_88();
		if (iVar1 > -1) {
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else {
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

// Position - 0x922B
int func_147(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_146(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x925D
bool func_148(int iParam0, int iParam1, int *iParam2, int *iParam3, bool bParam4, bool bParam5) {
	int iVar0;

	*iParam2 = 6022;
	if (bParam4 && Global_2592887 || !bParam4 && bParam5) {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;

			case -1071423629:
			case -1382822784:
			case 385813134:
				*iParam2 = 930;
				*iParam3 = 0;
				return true;

			case -833094692:
			case -1731353868:
			case 675392787:
				*iParam2 = 930;
				*iParam3 = 1;
				return true;

			case -1836153782:
			case -1960638561:
			case -238272479:
				*iParam2 = 930;
				*iParam3 = 2;
				return true;

			case -1598414687:
			case 147161830:
			case 67757212:
				*iParam2 = 930;
				*iParam3 = 3;
				return true;

			case 123661793:
			case -92608943:
			case -536372072:
				*iParam2 = 930;
				*iParam3 = 4;
				return true;

			case 330958487:
			case -162931217:
			case -247578875:
				*iParam2 = 930;
				*iParam3 = 5;
				return true;

			case -142717408:
			case 1665087452:
			case -854821214:
				*iParam2 = 930;
				*iParam3 = 7;
				return true;

			case 1290696959:
			case 1012984348:
			case -1458295118:
				*iParam2 = 930;
				*iParam3 = 8;
				return true;

			case 2059568454:
			case 933072050:
			case -1454802604:
				*iParam2 = 930;
				*iParam3 = 11;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	else {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	iVar0 = -1;
	if (bParam4) {
		if (Global_2592887) {
			iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else {
			iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5) {
		iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else {
		iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1) {
		return false;
	}
	switch (iParam1) {
	case 1:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1753; break;

		case 1: *iParam2 = 1754; break;

		case 2: *iParam2 = 1755; break;

		case 3: *iParam2 = 1756; break;

		case 4: *iParam2 = 1757; break;

		case 5: *iParam2 = 1758; break;

		case 6: *iParam2 = 1765; break;

		case 7: *iParam2 = 1766; break;

		case 8: *iParam2 = 1767; break;

		case 9: *iParam2 = 1768; break;

		case 10: *iParam2 = 1769; break;

		case 11: *iParam2 = 1770; break;

		case 12: *iParam2 = 1771; break;

		case 13: *iParam2 = 1779; break;

		case 14: *iParam2 = 1780; break;

		case 15: *iParam2 = 1881; break;

		case 16: *iParam2 = 1882; break;

		case 17: *iParam2 = 1913; break;

		case 18: *iParam2 = 1927; break;

		case 19: *iParam2 = 1928; break;

		case 20: *iParam2 = 1929; break;

		case 21: *iParam2 = 1930; break;

		case 22: *iParam2 = 1931; break;

		case 23: *iParam2 = 2035; break;

		case 24: *iParam2 = 2036; break;

		case 25: *iParam2 = 2062; break;

		case 26: *iParam2 = 2063; break;

		case 27: *iParam2 = 2064; break;

		case 28: *iParam2 = 2065; break;

		case 29: *iParam2 = 2066; break;

		case 30: *iParam2 = 2067; break;

		case 31: *iParam2 = 2068; break;

		case 32: *iParam2 = 2069; break;

		case 33: *iParam2 = 2070; break;

		case 34: *iParam2 = 2071; break;

		case 35: *iParam2 = 2318; break;

		case 36: *iParam2 = 2319; break;

		case 37: *iParam2 = 2371; break;

		case 38: *iParam2 = 2372; break;

		case 39: *iParam2 = 2373; break;

		case 40: *iParam2 = 2374; break;

		case 41: *iParam2 = 2433; break;

		case 42: *iParam2 = 2434; break;

		case 43: *iParam2 = 2435; break;

		case 44: *iParam2 = 2436; break;

		case 45: *iParam2 = 2437; break;

		case 46: *iParam2 = 2438; break;

		case 47: *iParam2 = 2439; break;

		case 48: *iParam2 = 2440; break;

		case 49: *iParam2 = 2441; break;

		case 50: *iParam2 = 2442; break;

		case 51: *iParam2 = 2571; break;

		case 52: *iParam2 = 2572; break;

		case 53: *iParam2 = 2573; break;

		case 54: *iParam2 = 2574; break;

		case 55: *iParam2 = 2575; break;

		case 56: *iParam2 = 2576; break;

		case 57: *iParam2 = 2577; break;

		case 58: *iParam2 = 2578; break;

		case 59: *iParam2 = 2579; break;

		case 60: *iParam2 = 2580; break;

		case 61: *iParam2 = 2581; break;

		case 62: *iParam2 = 3178; break;

		case 63: *iParam2 = 3179; break;

		case 64: *iParam2 = 3180; break;

		case 65: *iParam2 = 3181; break;

		case 66: *iParam2 = 3182; break;

		case 67: *iParam2 = 3183; break;

		case 68: *iParam2 = 3651; break;

		case 69: *iParam2 = 3652; break;

		case 70: *iParam2 = 3653; break;

		case 71: *iParam2 = 3654; break;

		case 72: *iParam2 = 3655; break;

		case 73: *iParam2 = 3656; break;

		case 74: *iParam2 = 3657; break;

		case 75: *iParam2 = 3658; break;

		case 76: *iParam2 = 3659; break;

		case 77: *iParam2 = 3660; break;

		case 78: *iParam2 = 3764; break;

		case 79: *iParam2 = 3765; break;

		case 80: *iParam2 = 3766; break;

		case 81: *iParam2 = 3767; break;

		case 82: *iParam2 = 3768; break;

		case 83: *iParam2 = 3769; break;

		case 84: *iParam2 = 3770; break;

		case 85: *iParam2 = 3771; break;

		case 86: *iParam2 = 3874; break;

		case 87: *iParam2 = 3875; break;

		case 88: *iParam2 = 3876; break;

		case 89: *iParam2 = 5309; break;

		case 90: *iParam2 = 5310; break;

		case 91: *iParam2 = 5311; break;

		case 92: *iParam2 = 5312; break;

		case 93: *iParam2 = 5313; break;

		case 94: *iParam2 = 5314; break;

		case 95: *iParam2 = 5315; break;

		case 96: *iParam2 = 5316; break;

		case 97: *iParam2 = 5317; break;

		case 98: *iParam2 = 5318; break;

		case 99: *iParam2 = 5319; break;

		case 100: *iParam2 = 5320; break;

		default: break;
		}
		break;

	case 2:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1759; break;

		case 1: *iParam2 = 1760; break;

		case 2: *iParam2 = 1761; break;

		case 3: *iParam2 = 1762; break;

		case 4: *iParam2 = 1763; break;

		case 5: *iParam2 = 1764; break;

		case 6: *iParam2 = 1772; break;

		case 7: *iParam2 = 1773; break;

		case 8: *iParam2 = 1774; break;

		case 9: *iParam2 = 1775; break;

		case 10: *iParam2 = 1776; break;

		case 11: *iParam2 = 1777; break;

		case 12: *iParam2 = 1778; break;

		case 13: *iParam2 = 1781; break;

		case 14: *iParam2 = 1782; break;

		case 15: *iParam2 = 1883; break;

		case 16: *iParam2 = 1884; break;

		case 17: *iParam2 = 1914; break;

		case 18: *iParam2 = 1932; break;

		case 19: *iParam2 = 1933; break;

		case 20: *iParam2 = 1934; break;

		case 21: *iParam2 = 1935; break;

		case 22: *iParam2 = 1936; break;

		case 23: *iParam2 = 2037; break;

		case 24: *iParam2 = 2038; break;

		case 25: *iParam2 = 2072; break;

		case 26: *iParam2 = 2073; break;

		case 27: *iParam2 = 2074; break;

		case 28: *iParam2 = 2075; break;

		case 29: *iParam2 = 2076; break;

		case 30: *iParam2 = 2077; break;

		case 31: *iParam2 = 2078; break;

		case 32: *iParam2 = 2079; break;

		case 33: *iParam2 = 2080; break;

		case 34: *iParam2 = 2081; break;

		case 35: *iParam2 = 2320; break;

		case 36: *iParam2 = 2321; break;

		case 37: *iParam2 = 2375; break;

		case 38: *iParam2 = 2376; break;

		case 39: *iParam2 = 2377; break;

		case 40: *iParam2 = 2378; break;

		case 41: *iParam2 = 2443; break;

		case 42: *iParam2 = 2444; break;

		case 43: *iParam2 = 2445; break;

		case 44: *iParam2 = 2446; break;

		case 45: *iParam2 = 2447; break;

		case 46: *iParam2 = 2448; break;

		case 47: *iParam2 = 2449; break;

		case 48: *iParam2 = 2450; break;

		case 49: *iParam2 = 2451; break;

		case 50: *iParam2 = 2452; break;

		case 51: *iParam2 = 2582; break;

		case 52: *iParam2 = 2583; break;

		case 53: *iParam2 = 2584; break;

		case 54: *iParam2 = 2585; break;

		case 55: *iParam2 = 2586; break;

		case 56: *iParam2 = 2587; break;

		case 57: *iParam2 = 2588; break;

		case 58: *iParam2 = 2589; break;

		case 59: *iParam2 = 2590; break;

		case 60: *iParam2 = 2591; break;

		case 61: *iParam2 = 2592; break;

		case 62: *iParam2 = 3184; break;

		case 63: *iParam2 = 3185; break;

		case 64: *iParam2 = 3186; break;

		case 65: *iParam2 = 3187; break;

		case 66: *iParam2 = 3188; break;

		case 67: *iParam2 = 3189; break;

		case 68: *iParam2 = 3661; break;

		case 69: *iParam2 = 3662; break;

		case 70: *iParam2 = 3663; break;

		case 71: *iParam2 = 3664; break;

		case 72: *iParam2 = 3665; break;

		case 73: *iParam2 = 3666; break;

		case 74: *iParam2 = 3667; break;

		case 75: *iParam2 = 3668; break;

		case 76: *iParam2 = 3669; break;

		case 77: *iParam2 = 3670; break;

		case 78: *iParam2 = 3772; break;

		case 79: *iParam2 = 3773; break;

		case 80: *iParam2 = 3774; break;

		case 81: *iParam2 = 3775; break;

		case 82: *iParam2 = 3776; break;

		case 83: *iParam2 = 3777; break;

		case 84: *iParam2 = 3778; break;

		case 85: *iParam2 = 3779; break;

		case 86: *iParam2 = 3877; break;

		case 87: *iParam2 = 3878; break;

		case 88: *iParam2 = 3879; break;

		case 89: *iParam2 = 5321; break;

		case 90: *iParam2 = 5322; break;

		case 91: *iParam2 = 5323; break;

		case 92: *iParam2 = 5324; break;

		case 93: *iParam2 = 5325; break;

		case 94: *iParam2 = 5326; break;

		case 95: *iParam2 = 5327; break;

		case 96: *iParam2 = 5328; break;

		case 97: *iParam2 = 5329; break;

		case 98: *iParam2 = 5330; break;

		case 99: *iParam2 = 5331; break;

		case 100: *iParam2 = 5332; break;

		default: break;
		}
		break;
	}
	*iParam3 = iVar0 % 32;
	return *iParam2 != 6022;
}

// Position - 0xA44C
bool func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	if (iParam0 == 0) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

// Position - 0xB36A
int func_150(int iParam0) {
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return 0;
	}
	if (iParam0 == 1) {
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
			return 0;
		}
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2)) {
			return 0;
		}
	}
	return 1;
}

// Position - 0xB3BB
bool func_151(int iParam0, int iParam1, int *iParam2, int iParam3) {
	int iVar0;

	iVar0 = func_111(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 != -99) {
		if (!func_224(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_61,
					  Global_101700.f_2095.f_539[iVar0 /*65*/].f_60) ||
			iParam3 == 1) {
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

// Position - 0xB451
int func_152(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0xB501
struct<10> func_153(int iParam0, int iParam1) {
	int iVar0;
	struct<10> Var1;

	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 31: func_155(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_155(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_155(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_155(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_155(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_155(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8); break;

		case 5: func_155(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8); break;

		case 6: func_155(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_155(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_155(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_155(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8); break;

		default: func_154(&Var1, iParam0, iParam1, 10); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 31: func_155(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_155(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_155(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8); break;

		case 2: func_155(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8); break;

		case 3: func_155(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_155(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_155(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_155(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_155(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_155(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_154(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 31: func_155(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_155(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_155(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_155(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_155(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8); break;

		case 4: func_155(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8); break;

		case 5: func_155(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_155(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_155(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_155(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_154(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 31: func_155(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_155(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_155(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_155(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_155(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_155(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_155(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_155(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_155(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_155(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_155(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_155(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_155(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_155(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_155(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 14: func_155(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_155(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_155(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_155(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_155(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_155(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_155(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_155(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_155(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_155(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 24: func_155(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_154(&Var1, iParam0, iParam1, 25); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 31: func_155(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_155(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_155(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_155(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_155(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_155(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_155(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_155(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_155(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_155(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_155(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_155(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_155(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_155(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_155(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8); break;

		case 14: func_155(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_155(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_155(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_155(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_155(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_155(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_155(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_155(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_155(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_155(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_154(&Var1, iParam0, iParam1, 25); break;
		}
		break;
	}
	return Var1;
}

//Position - 0xBE30
void func_154(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;

	if (iParam2 != 0 && iParam2 != -99) {
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero")) {
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one")) {
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two")) {
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01")) {
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01")) {
			iVar0 = 4;
		}
		dlc1::get_shop_ped_outfit(iParam2, &Var1);
		if (!dlc1::_is_dlc_data_empty(Var1)) {
			iVar19 = 0;
			while (iVar19 < Var1.f_3) {
				if (dlc1::_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1) {
					if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
						(*iParam0)[vVar16.z] = func_135(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1) {
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

// Position - 0xBF5A
void func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9) {
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

// Position - 0xBFA2
struct<17> func_156(int iParam0, int iParam1) {
	int iVar0;
	struct<17> Var1;

	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0:
			if (Global_101700.f_8044.f_99.f_58[120]) {
				func_159(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			else {
				func_159(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			break;

		case 1: func_159(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0); break;

		case 2: func_159(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8); break;

		case 3: func_159(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31); break;

		case 4: func_159(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2); break;

		case 5:
			func_159(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[0], Global_101700.f_2095.f_539.f_200[0], 6, 3, 0,
					 0, 0, -99, 0, 0, 3);
			break;

		case 6: func_159(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_159(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 8: func_159(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 9: func_159(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 10: func_159(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4); break;

		case 11: func_159(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5); break;

		case 12: func_159(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31); break;

		case 13: func_159(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 14: func_159(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6); break;

		case 15: func_159(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31); break;

		case 16: func_159(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31); break;

		case 17: func_159(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 18: func_159(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7); break;

		case 19: func_159(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 20: func_159(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 21: func_159(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_159(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 23: func_159(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31); break;

		case 24: func_159(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31); break;

		case 25: func_159(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 26: func_159(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 27: func_159(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 28: func_159(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 29: func_159(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 30: func_159(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 31: func_159(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31); break;

		case 32: func_159(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 33: func_159(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 34: func_159(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31); break;

		case 35: func_159(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 36: func_159(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 37: func_159(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 38: func_159(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 39: func_159(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 40: func_159(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 41: func_159(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_159(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_159(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_159(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 45: func_159(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 46: func_159(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_159(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 48: func_159(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31); break;

		case 49: func_159(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 50: func_159(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9); break;

		case 51: func_159(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 52: func_159(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		default: func_157(&Var1, iParam0, iParam1, 53); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: func_159(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 1: func_159(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 2:
			func_159(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[1], Global_101700.f_2095.f_539.f_200[1], 17, 2,
					 26, 0, 0, -99, 0, 45, 31);
			break;

		case 3: func_159(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1); break;

		case 4: func_159(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2); break;

		case 5: func_159(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 6: func_159(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_159(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3); break;

		case 8: func_159(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5); break;

		case 9: func_159(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 10: func_159(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 11: func_159(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 12: func_159(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 13: func_159(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 14: func_159(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 15: func_159(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 16: func_159(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 17: func_159(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 18: func_159(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31); break;

		case 19: func_159(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 20: func_159(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 21: func_159(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4); break;

		case 22: func_159(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31); break;

		case 23: func_159(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31); break;

		case 24: func_159(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31); break;

		case 25: func_159(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31); break;

		case 26: func_159(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31); break;

		case 27: func_159(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31); break;

		case 28: func_159(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31); break;

		case 29: func_159(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31); break;

		case 30: func_159(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31); break;

		case 31: func_159(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31); break;

		case 32: func_159(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31); break;

		case 33: func_159(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31); break;

		case 34: func_159(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31); break;

		case 35: func_159(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31); break;

		case 36: func_159(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31); break;

		case 37: func_159(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31); break;

		case 38: func_159(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 39: func_159(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 40: func_159(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 41: func_159(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 42: func_159(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31); break;

		case 43: func_159(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6); break;

		case 44: func_159(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 45: func_159(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8); break;

		case 46: func_159(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31); break;

		default: func_157(&Var1, iParam0, iParam1, 47); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: func_159(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 1: func_159(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8); break;

		case 2: func_159(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1); break;

		case 3: func_159(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2); break;

		case 4:
			func_159(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[2], Global_101700.f_2095.f_539.f_200[2], 8, 0, 0,
					 0, 0, -99, 0, 0, 31);
			break;

		case 5: func_159(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6); break;

		case 6: func_159(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3); break;

		case 7: func_159(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4); break;

		case 8: func_159(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31); break;

		case 9: func_159(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 10: func_159(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 11: func_159(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5); break;

		case 12: func_159(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 13: func_159(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31); break;

		case 14: func_159(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31); break;

		case 15: func_159(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 16: func_159(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 17: func_159(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 18: func_159(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 19: func_159(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 20: func_159(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 21: func_159(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_159(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 23: func_159(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 24: func_159(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 25: func_159(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 26: func_159(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 27: func_159(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 28: func_159(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 29: func_159(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 30: func_159(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 31: func_159(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 32: func_159(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 33: func_159(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 34: func_159(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 35: func_159(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 36: func_159(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 37: func_159(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 38: func_159(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 39: func_159(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 40: func_159(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 41: func_159(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_159(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_159(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_159(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31); break;

		case 45: func_159(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 46: func_159(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_159(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31); break;

		default: func_157(&Var1, iParam0, iParam1, 48); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: func_159(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31); break;

		case 1: func_159(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0); break;

		case 2: func_159(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1); break;

		case 3: func_159(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2); break;

		case 4: func_159(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3); break;

		case 5: func_159(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4); break;

		case 6: func_159(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5); break;

		case 7: func_159(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6); break;

		case 8: func_159(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7); break;

		case 9: func_159(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8); break;

		case 10: func_159(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9); break;

		case 11: func_159(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10); break;

		case 12: func_159(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11); break;

		case 13: func_159(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12); break;

		case 14: func_159(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13); break;

		case 15: func_159(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14); break;

		case 16: func_159(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15); break;

		case 17: func_159(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16); break;

		case 18: func_159(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17); break;

		case 19: func_159(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18); break;

		case 20: func_159(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19); break;

		case 21: func_159(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20); break;

		case 22: func_159(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21); break;

		case 23: func_159(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22); break;

		case 24: func_159(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23); break;

		case 25: func_159(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24); break;

		default: func_157(&Var1, iParam0, iParam1, 26); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: func_159(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31); break;

		case 1: func_159(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31); break;

		case 2: func_159(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0); break;

		case 3: func_159(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1); break;

		case 4: func_159(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2); break;

		case 5: func_159(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3); break;

		case 6: func_159(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4); break;

		case 7: func_159(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5); break;

		case 8: func_159(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6); break;

		case 9: func_159(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7); break;

		case 10: func_159(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8); break;

		case 11: func_159(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9); break;

		case 12: func_159(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10); break;

		case 13: func_159(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31); break;

		case 14: func_159(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11); break;

		case 15: func_159(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12); break;

		case 16: func_159(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13); break;

		case 17: func_159(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14); break;

		case 18: func_159(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15); break;

		case 19: func_159(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16); break;

		case 20: func_159(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17); break;

		case 21: func_159(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31); break;

		case 22: func_159(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18); break;

		case 23: func_159(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19); break;

		case 24: func_159(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20); break;

		case 25: func_159(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21); break;

		case 26: func_159(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22); break;

		case 27: func_159(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23); break;

		default: func_157(&Var1, iParam0, iParam1, 28); break;
		}
		break;
	}
	return Var1;
}

//Position - 0xDDF3
void func_157(var* uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;

	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero")) {
		iVar0 = 0;
		(*uParam0)[13] = 10 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_one")) {
		iVar0 = 1;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_two")) {
		iVar0 = 2;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("mp_m_freemode_01")) {
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01")) {
		iVar0 = 4;
	}
	dlc1::_0xF3FBE2D50A6A8C28(iVar0, 0);
	dlc1::get_shop_ped_query_outfit(iParam2 - iParam3, &Var1);
	if (!dlc1::_is_dlc_data_empty(Var1)) {
		iVar36 = 0;
		while (iVar36 < Var1.f_4) {
			if (dlc1::_get_prop_from_outfit(Var1.f_1, iVar36, &vVar16)) {
				if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
					if (vVar16.z == 10) {
						dlc1::init_shop_ped_component(&Var19);
						dlc1::get_shop_ped_component(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1) {
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16) {
						(*uParam0)[func_158(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else {
						(*uParam0)[func_158(vVar16.z)] = func_135(iParam1, vVar16.x, func_158(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1) {
					(*uParam0)[func_158(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0) {
			(*uParam0)[13] = -99;
		}
		else {
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

// Position - 0xDFDD
int func_158(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0xE08D
void func_159(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

// Position - 0xE0FE
struct<14> func_160(int iParam0, int iParam1, int iParam2) {
	func_223();
	if (iParam0 == joaat("player_zero")) {
		func_205(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one")) {
		func_186(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two")) {
		func_161(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

//Position - 0xE150
void func_161(int iParam0, int iParam1)
{
	switch (iParam0) {
	case 0: func_185(iParam1); break;

	case 2: func_184(iParam1); break;

	case 3: func_181(iParam1); break;

	case 4: func_180(iParam1); break;

	case 6: func_179(iParam1); break;

	case 5: func_178(iParam1); break;

	case 8: func_177(iParam1); break;

	case 9: func_176(iParam1); break;

	case 10: func_175(iParam1); break;

	case 1: func_174(iParam1); break;

	case 7: func_173(iParam1); break;

	case 11: func_172(iParam1); break;

	case 12: func_171(iParam1); break;

	case 13: func_170(iParam1); break;

	case 14: func_162(iParam1); break;
	}
}

// Position - 0xE240
void func_162(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 154:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	case 88:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P2_E1", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 45;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P2_E2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P2_E2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P2_E2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P2_E2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 52;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P2_E2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 54;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P2_E2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 54;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P2_E2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P2_E2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P2_E2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P2_E2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P2_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P2_E3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P2_E3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P2_E3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P2_E3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P2_E3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P2_E3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P2_E3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P2_E3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P2_E3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 113:
		StringCopy(&Var2, "PROPS_P2_E7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 114:
		StringCopy(&Var2, "PROPS_P2_E7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 115:
		StringCopy(&Var2, "PROPS_P2_E7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 116:
		StringCopy(&Var2, "PROPS_P2_E7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 59;
		iVar8 = 10;
		break;

	case 117:
		StringCopy(&Var2, "PROPS_P2_E7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 118:
		StringCopy(&Var2, "PROPS_P2_E7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 119:
		StringCopy(&Var2, "PROPS_P2_E7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 120:
		StringCopy(&Var2, "PROPS_P2_E7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 59;
		iVar8 = 10;
		break;

	case 121:
		StringCopy(&Var2, "PROPS_P2_E7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 79;
		iVar8 = 10;
		break;

	case 122:
		StringCopy(&Var2, "PROPS_P2_E7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 79;
		iVar8 = 10;
		break;

	case 123:
		StringCopy(&Var2, "PROPS_P2_E8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 124:
		StringCopy(&Var2, "PROPS_P2_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 125:
		StringCopy(&Var2, "PROPS_P2_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 126:
		StringCopy(&Var2, "PROPS_P2_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 127:
		StringCopy(&Var2, "PROPS_P2_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 128:
		StringCopy(&Var2, "PROPS_P2_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 129:
		StringCopy(&Var2, "PROPS_P2_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 130:
		StringCopy(&Var2, "PROPS_P2_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 131:
		StringCopy(&Var2, "PROPS_P2_E8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 132:
		StringCopy(&Var2, "PROPS_P2_E8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 215;
		iVar8 = 10;
		break;

	case 133:
		StringCopy(&Var2, "PROPS_P2_E9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 134:
		StringCopy(&Var2, "PROPS_P2_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 135:
		StringCopy(&Var2, "PROPS_P2_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 169;
		iVar8 = 10;
		break;

	case 136:
		StringCopy(&Var2, "PROPS_P2_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 169;
		iVar8 = 10;
		break;

	case 137:
		StringCopy(&Var2, "PROPS_P2_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 138:
		StringCopy(&Var2, "PROPS_P2_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 139:
		StringCopy(&Var2, "PROPS_P2_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 140:
		StringCopy(&Var2, "PROPS_P2_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 141:
		StringCopy(&Var2, "PROPS_P2_E9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 142:
		StringCopy(&Var2, "PROPS_P2_E9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 143:
		StringCopy(&Var2, "PROPS_P2_E10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 49;
		iVar8 = 10;
		break;

	case 144:
		StringCopy(&Var2, "PROPS_P2_E10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 145:
		StringCopy(&Var2, "PROPS_P2_E10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 52;
		iVar8 = 10;
		break;

	case 146:
		StringCopy(&Var2, "PROPS_P2_E10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 147:
		StringCopy(&Var2, "PROPS_P2_E10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 148:
		StringCopy(&Var2, "PROPS_P2_E10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 149:
		StringCopy(&Var2, "PROPS_P2_E10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 150:
		StringCopy(&Var2, "PROPS_P2_E10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 63;
		iVar8 = 10;
		break;

	case 151:
		StringCopy(&Var2, "PROPS_P2_E10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 152:
		StringCopy(&Var2, "PROPS_P2_E10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 153:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "PROPS_P2_H2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "PROPS_P2_H7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "PROPS_P2_H7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 12;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 13;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 14;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 15;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 59:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 60:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 64:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 65:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 66:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 67:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 68:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 69:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P1_H26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P1_H26_1", 16);
		iVar6 = 26;
		iVar7 = 1;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P1_H26_2", 16);
		iVar6 = 26;
		iVar7 = 2;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P1_H26_3", 16);
		iVar6 = 26;
		iVar7 = 3;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P1_H26_4", 16);
		iVar6 = 26;
		iVar7 = 4;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P1_H26_5", 16);
		iVar6 = 26;
		iVar7 = 5;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P1_H26_6", 16);
		iVar6 = 26;
		iVar7 = 6;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P1_H26_7", 16);
		iVar6 = 26;
		iVar7 = 7;
		iVar1 = 24;
		iVar8 = 0;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P1_H26_8", 16);
		iVar6 = 26;
		iVar7 = 8;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 80:
		StringCopy(&Var2, "PROPS_P1_H26_9", 16);
		iVar6 = 26;
		iVar7 = 9;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 81:
		StringCopy(&Var2, "PROPS_P1_H26_10", 16);
		iVar6 = 26;
		iVar7 = 10;
		iVar1 = 18;
		iVar8 = 0;
		break;

	case 82:
		StringCopy(&Var2, "PROPS_P1_H26_11", 16);
		iVar6 = 26;
		iVar7 = 11;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P1_H26_12", 16);
		iVar6 = 26;
		iVar7 = 12;
		iVar1 = 24;
		iVar8 = 0;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P1_H26_13", 16);
		iVar6 = 26;
		iVar7 = 13;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P1_H26_14", 16);
		iVar6 = 26;
		iVar7 = 14;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P1_H26_15", 16);
		iVar6 = 26;
		iVar7 = 15;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 87:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar8 = 0;
		break;

	default: func_169(iVar10, iParam0, 155); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF4B6
void func_163(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9, int iParam10) {
	int iVar0;
	int iVar1;

	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = iParam2 % 32;
	uParam0->f_2 = iParam2 / 32;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&uParam0->f_8, sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_168(iParam8);
	if (uParam0->f_2 >= 10 && uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		if (!iParam10) {
		}
		uParam0->f_2 = 0;
	}
	if (gameplay::get_hash_key(sParam3) != gameplay::get_hash_key("NO_LABEL")) {
	}
	if (iParam7) {
		gameplay::set_bit(&uParam0->f_6, 3);
	}
	if (iParam10) {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
			gameplay::set_bit(&uParam0->f_6, 5);
		}
		gameplay::set_bit(&uParam0->f_6, 1);
		gameplay::set_bit(&uParam0->f_6, 2);
		gameplay::set_bit(&uParam0->f_6, 6);
		if (func_48(14)) {
			return;
		}
		if (iParam1 == 1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0)) {
				gameplay::set_bit(&uParam0->f_6, 7);
			}
		}
		if (iParam1 == 12) {
			if (!func_167(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_167(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else if (iParam1 == 13) {
		}
		else if (iParam1 == 14) {
			if (!func_167(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_167(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else {
			if (!func_167(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_167(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		gameplay::set_bit(&uParam0->f_6, 0);
		gameplay::set_bit(&uParam0->f_6, 5);
		if (func_149(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 1);
		}
		if (func_149(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 2);
		}
		if (!func_149(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 4);
		}
	}
	else {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 ||
			iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12) {
			if (func_48(14)) {
				return;
			}
			iVar0 = func_147(func_166(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 1);
			}
			iVar0 = func_147(func_165(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 2);
			}
			if (func_164(iParam1, uParam0->f_2, &iVar1)) {
				iVar0 = func_147(iVar1, Global_69521, 0);
				if (!gameplay::is_bit_set(iVar0, uParam0->f_1)) {
					gameplay::set_bit(&uParam0->f_6, 4);
				}
			}
		}
		else {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
	if (iParam1 == 14) {
		if (iParam4 == -1) {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
}

// Position - 0xF847
bool func_164(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = 973;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: *iParam2 = 974; break;

		case 3: *iParam2 = 1424; break;

		case 4: *iParam2 = 990; break;

		case 6: *iParam2 = 998; break;

		case 8: *iParam2 = 1425; break;

		case 9: *iParam2 = 1433; break;

		case 10: *iParam2 = 1435; break;

		case 1: *iParam2 = 1006; break;

		case 7: *iParam2 = 1436; break;

		case 11: *iParam2 = 982; break;

		case 14: *iParam2 = 1014; break;

		case 12: *iParam2 = 1025; break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: *iParam2 = 975; break;

		case 4: *iParam2 = 991; break;

		case 6: *iParam2 = 999; break;

		case 8: *iParam2 = 1426; break;

		case 9: *iParam2 = 1434; break;

		case 7: *iParam2 = 1437; break;

		case 11: *iParam2 = 983; break;

		case 14: *iParam2 = 1015; break;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: *iParam2 = 976; break;

		case 4: *iParam2 = 992; break;

		case 6: *iParam2 = 1000; break;

		case 8: *iParam2 = 1427; break;

		case 7: *iParam2 = 1438; break;

		case 11: *iParam2 = 984; break;

		case 14: *iParam2 = 1016; break;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: *iParam2 = 993; break;

		case 6: *iParam2 = 1001; break;

		case 8: *iParam2 = 1428; break;

		case 11: *iParam2 = 985; break;

		case 14: *iParam2 = 1017; break;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: *iParam2 = 994; break;

		case 6: *iParam2 = 1002; break;

		case 8: *iParam2 = 1429; break;

		case 11: *iParam2 = 986; break;

		case 14: *iParam2 = 1018; break;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: *iParam2 = 995; break;

		case 6: *iParam2 = 1003; break;

		case 8: *iParam2 = 1430; break;

		case 11: *iParam2 = 987; break;

		case 14: *iParam2 = 1019; break;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: *iParam2 = 996; break;

		case 6: *iParam2 = 1004; break;

		case 8: *iParam2 = 1431; break;

		case 11: *iParam2 = 988; break;

		case 14: *iParam2 = 1020; break;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: *iParam2 = 997; break;

		case 6: *iParam2 = 1005; break;

		case 8: *iParam2 = 1432; break;

		case 11: *iParam2 = 989; break;

		case 14: *iParam2 = 1021; break;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: *iParam2 = 1022; break;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: *iParam2 = 1023; break;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: *iParam2 = 1024; break;
		}
		break;
	}
	return *iParam2 != 973;
}

// Position - 0xFC4C
int func_165(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 922;

		case 3: return 1409;

		case 4: return 938;

		case 6: return 946;

		case 8: return 1410;

		case 9: return 1418;

		case 10: return 1420;

		case 1: return 954;

		case 7: return 1421;

		case 11: return 930;

		case 14: return 962;

		case 12: return 973;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 923;

		case 4: return 939;

		case 6: return 947;

		case 8: return 1411;

		case 9: return 1419;

		case 7: return 1422;

		case 11: return 931;

		case 14: return 963;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 924;

		case 4: return 940;

		case 6: return 948;

		case 8: return 1412;

		case 7: return 1423;

		case 11: return 932;

		case 14: return 964;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 941;

		case 6: return 949;

		case 8: return 1413;

		case 11: return 933;

		case 14: return 965;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 942;

		case 6: return 950;

		case 8: return 1414;

		case 11: return 934;

		case 14: return 966;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 943;

		case 6: return 951;

		case 8: return 1415;

		case 11: return 935;

		case 14: return 967;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 944;

		case 6: return 952;

		case 8: return 1416;

		case 11: return 936;

		case 14: return 968;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 945;

		case 6: return 953;

		case 8: return 1417;

		case 11: return 937;

		case 14: return 969;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 970;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 971;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 972;
		}
		break;
	}
	return 930;
}

// Position - 0x10047
int func_166(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 870;

		case 3: return 1394;

		case 4: return 886;

		case 6: return 894;

		case 8: return 1395;

		case 9: return 1403;

		case 10: return 1405;

		case 1: return 902;

		case 7: return 1406;

		case 11: return 878;

		case 14: return 910;

		case 12: return 921;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 871;

		case 4: return 887;

		case 6: return 895;

		case 8: return 1396;

		case 9: return 1404;

		case 7: return 1407;

		case 11: return 879;

		case 14: return 911;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 872;

		case 4: return 888;

		case 6: return 896;

		case 8: return 1397;

		case 7: return 1408;

		case 11: return 880;

		case 14: return 912;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 889;

		case 6: return 897;

		case 8: return 1398;

		case 11: return 881;

		case 14: return 913;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 890;

		case 6: return 898;

		case 8: return 1399;

		case 11: return 882;

		case 14: return 914;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 891;

		case 6: return 899;

		case 8: return 1400;

		case 11: return 883;

		case 14: return 915;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 892;

		case 6: return 900;

		case 8: return 1401;

		case 11: return 884;

		case 14: return 916;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 893;

		case 6: return 901;

		case 8: return 1402;

		case 11: return 885;

		case 14: return 917;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 918;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 919;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 920;
		}
		break;
	}
	return 878;
}

// Position - 0x10442
int func_167(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_148(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_147(iVar2, iVar0, 0);
		return gameplay::is_bit_set(iVar3, iVar1);
	}
	return 0;
}

// Position - 0x10484
int func_168(int iParam0) {
	switch (iParam0) {
	case -1: return 0;

	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;

	case 9: return 0;

	case 10: return 1;

	case 11: return 0;

	case 12: return 0;

	case 13: return 0;
	}
	return 0;
}

// Position - 0x10558
void func_169(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;

	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;
	if (iVar0 < 0) {
		return;
	}
	iVar1 = Global_69523[0 /*14*/].f_5;
	if (iParam0 == 12) {
		iVar18 = 0;
		iVar19 = dlc1::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_outfit(iVar17, &Var2);
			if (!dlc1::_is_dlc_data_empty(Var2)) {
				if (iVar18 == iParam1 - iParam2) {
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_163(&Global_69523[0 /*14*/], iParam0, iParam1, &Var2.f_7, 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13) {
		func_163(&Global_69523[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14) {
		dlc1::init_shop_ped_prop(&Var20);
		iVar39 = 0;
		iVar40 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40) {
			dlc1::get_shop_ped_query_prop(iVar38, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iVar39 == iParam1 - iParam2) {
					if (Var20.f_6 == 0) {
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1) {
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2) {
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3) {
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4) {
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5) {
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6) {
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7) {
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8) {
						iVar37 = 8;
					}
					else {
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_163(&Global_69523[0 /*14*/], iParam0, iParam1, &Var20.f_9, Var20.f_3, Var20.f_4, Var20.f_5,
							 dlc1::_0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var41);
		iVar59 = 0;
		iVar60 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_152(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60) {
			dlc1::get_shop_ped_query_component(iVar58, &Var41);
			if (!dlc1::_is_dlc_data_empty(Var41)) {
				if (iVar59 == iParam1 - iParam2) {
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_163(&Global_69523[0 /*14*/], iParam0, iParam1, &Var41.f_9, Var41.f_3, Var41.f_4, Var41.f_5,
							 dlc1::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

// Position - 0x107D3
void func_170(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_169(iVar10, iParam0, 9); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x10929
void func_171(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P2_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "OUTFIT_P2_5", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "OUTFIT_P2_6", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P2_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P2_8", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P2_9", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "OUTFIT_P2_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P2_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P2_13", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "OUTFIT_P2_14", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P2_15", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P2_16", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P2_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P2_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P2_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P2_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P2_21", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P2_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P2_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P2_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P2_25", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P2_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P2_27", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P2_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 119;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P2_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 99;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P2_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 129;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P2_44", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P2_45", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P2_46", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 139;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P2_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 149;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P2_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 145;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P2_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 140;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P2_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 135;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P2_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P2_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P2_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P2_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P2_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P2_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P2_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P2_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P2_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P2_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P2_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P2_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P2_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 47:
		StringCopy(&Var2, "OUTFIT_P2_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 48); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x10E36
void func_172(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 1); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x10EAA
void func_173(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 1); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x10F1D
void func_174(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P2_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P2_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "BERD_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 6); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x11003
void func_175(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 7;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 8;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 9;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 5;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 6;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		break;

	default: func_169(iVar10, iParam0, 33); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x11365
void func_176(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 11:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 12:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 13:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 14:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 15:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 270;
		break;

	case 16:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 270;
		break;

	default: func_169(iVar10, iParam0, 17); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x11575
void func_177(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "SPEC_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "SPEC_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_169(iVar10, iParam0, 18); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x117A4
void func_178(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_169(iVar10, iParam0, 7); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x118B3
void func_179(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 22;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 45;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 65;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P2_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 58;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P2_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 72;
		break;

	case 6:
		StringCopy(&Var2, "FEET_P2_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 68;
		break;

	case 7:
		StringCopy(&Var2, "FEET_P2_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 60;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "FEET_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "FEET_P2_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "FEET_P2_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "FEET_P2_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P2_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 19:
		StringCopy(&Var2, "FEET_P2_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P2_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P2_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P2_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P2_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 24:
		StringCopy(&Var2, "FEET_P2_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P2_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P2_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P2_9_11", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 700;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P2_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 38:
		StringCopy(&Var2, "FEET_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P2_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P2_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P2_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P2_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P2_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P2_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P2_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P2_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P2_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P2_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P2_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P2_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P2_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P2_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P2_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P2_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P2_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P2_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 73:
		StringCopy(&Var2, "FEET_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P2_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P2_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P2_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P2_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P2_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P2_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P2_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 110;
		break;

	default: func_169(iVar10, iParam0, 84); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12251
void func_180(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 129;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 115;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "LEGS_P2_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "LEGS_P2_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 20:
		StringCopy(&Var2, "LEGS_P2_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 21:
		StringCopy(&Var2, "LEGS_P2_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 22:
		StringCopy(&Var2, "LEGS_P2_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 850;
		break;

	case 23:
		StringCopy(&Var2, "LEGS_P2_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 750;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P2_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 690;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P2_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 820;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P2_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 650;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P2_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 690;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P2_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 690;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P2_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 820;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "LEGS_P2_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "LEGS_P2_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "LEGS_P2_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "LEGS_P2_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 58;
		break;

	case 36:
		StringCopy(&Var2, "LEGS_P2_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 68;
		break;

	case 37:
		StringCopy(&Var2, "LEGS_P2_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 65;
		break;

	case 38:
		StringCopy(&Var2, "LEGS_P2_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 60;
		break;

	case 39:
		StringCopy(&Var2, "LEGS_P2_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 40:
		StringCopy(&Var2, "LEGS_P2_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 63;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P2_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 60;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P2_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 58;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 99;
		break;

	case 46:
		StringCopy(&Var2, "LEGS_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 105;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 110;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 110;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P2_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 99;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P2_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 110;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P2_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 110;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P2_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P2_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 105;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 15;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 15;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 15;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 15;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 15;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 15;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 15;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 15;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 600;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 600;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 600;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 600;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 600;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 600;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 600;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 600;
		break;

	case 70:
		StringCopy(&Var2, "LEGS_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 600;
		break;

	case 71:
		StringCopy(&Var2, "LEGS_P2_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 80;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P2_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P2_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P2_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P2_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 80;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P2_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P2_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 80;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P2_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 80;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P2_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 80;
		break;

	case 80:
		StringCopy(&Var2, "LEGS_P2_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 80;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P2_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P2_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 12;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P2_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 12;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P2_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P2_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 18;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P2_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 20;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P2_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 30;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P2_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 30;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P2_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 30;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P2_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P2_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		break;

	case 92:
		StringCopy(&Var2, "LEGS_P2_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		break;

	case 93:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 95:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 1;
		break;

	case 96:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 2;
		break;

	case 97:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 3;
		break;

	case 98:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 4;
		break;

	case 99:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 5;
		break;

	case 100:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 6;
		break;

	case 101:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 7;
		break;

	case 102:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 8;
		break;

	case 103:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 9;
		break;

	default: func_169(iVar10, iParam0, 104); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12DC3
void func_181(int iParam0) {
	if (iParam0 < 136) {
		func_183(iParam0);
	}
	else {
		func_182(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_169(3, iParam0, 242);
	}
}

// Position - 0x12DF7
void func_182(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 136:
		StringCopy(&Var2, "TORSO_P2_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 32;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P2_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 39;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P2_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 40;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P2_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 42;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P2_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 45;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P2_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 48;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P2_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 52;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P2_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P2_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P2_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P2_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 560;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P2_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 390;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P2_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 390;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P2_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 390;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P2_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 560;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P2_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 390;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P2_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 390;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P2_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 390;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P2_22_10", 16);
		iVar6 = 22;
		iVar7 = 10;
		iVar1 = 390;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P2_22_11", 16);
		iVar6 = 22;
		iVar7 = 11;
		iVar1 = 3950;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P2_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P2_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P2_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P2_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P2_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P2_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P2_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 19;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P2_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 20;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P2_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 19;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P2_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P2_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 20;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P2_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 28;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P2_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 28;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P2_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 25;
		break;

	case 170:
		StringCopy(&Var2, "TORSO_P2_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 22;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P2_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 19;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P2_24_10", 16);
		iVar6 = 24;
		iVar7 = 10;
		iVar1 = 22;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P2_24_11", 16);
		iVar6 = 24;
		iVar7 = 11;
		iVar1 = 19;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P2_24_12", 16);
		iVar6 = 24;
		iVar7 = 12;
		iVar1 = 20;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P2_24_13", 16);
		iVar6 = 24;
		iVar7 = 13;
		iVar1 = 25;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P2_24_14", 16);
		iVar6 = 24;
		iVar7 = 14;
		iVar1 = 20;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P2_24_15", 16);
		iVar6 = 24;
		iVar7 = 15;
		iVar1 = 28;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P2_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar1 = 35;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P2_25_1", 16);
		iVar6 = 25;
		iVar7 = 1;
		iVar1 = 40;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P2_25_2", 16);
		iVar6 = 25;
		iVar7 = 2;
		iVar1 = 45;
		break;

	case 181:
		StringCopy(&Var2, "TORSO_P2_25_3", 16);
		iVar6 = 25;
		iVar7 = 3;
		iVar1 = 45;
		break;

	case 182:
		StringCopy(&Var2, "TORSO_P2_25_4", 16);
		iVar6 = 25;
		iVar7 = 4;
		iVar1 = 49;
		break;

	case 183:
		StringCopy(&Var2, "TORSO_P2_25_5", 16);
		iVar6 = 25;
		iVar7 = 5;
		iVar1 = 820;
		break;

	case 184:
		StringCopy(&Var2, "TORSO_P2_25_6", 16);
		iVar6 = 25;
		iVar7 = 6;
		iVar1 = 790;
		break;

	case 185:
		StringCopy(&Var2, "TORSO_P2_25_7", 16);
		iVar6 = 25;
		iVar7 = 7;
		iVar1 = 820;
		break;

	case 186:
		StringCopy(&Var2, "TORSO_P2_25_8", 16);
		iVar6 = 25;
		iVar7 = 8;
		iVar1 = 929;
		break;

	case 187:
		StringCopy(&Var2, "TORSO_P2_25_9", 16);
		iVar6 = 25;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 188:
		StringCopy(&Var2, "TORSO_P2_25_10", 16);
		iVar6 = 25;
		iVar7 = 10;
		iVar1 = 850;
		break;

	case 189:
		StringCopy(&Var2, "TORSO_P2_25_11", 16);
		iVar6 = 25;
		iVar7 = 11;
		iVar1 = 790;
		break;

	case 190:
		StringCopy(&Var2, "TORSO_P2_26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 191:
		StringCopy(&Var2, "TORSO_P2_26_1", 16);
		iVar6 = 26;
		iVar7 = 1;
		break;

	case 192:
		StringCopy(&Var2, "TORSO_P2_26_2", 16);
		iVar6 = 26;
		iVar7 = 2;
		break;

	case 193:
		StringCopy(&Var2, "TORSO_P2_26_3", 16);
		iVar6 = 26;
		iVar7 = 3;
		break;

	case 194:
		StringCopy(&Var2, "TORSO_P2_26_4", 16);
		iVar6 = 26;
		iVar7 = 4;
		break;

	case 195:
		StringCopy(&Var2, "TORSO_P2_26_5", 16);
		iVar6 = 26;
		iVar7 = 5;
		break;

	case 196:
		StringCopy(&Var2, "TORSO_P2_26_6", 16);
		iVar6 = 26;
		iVar7 = 6;
		break;

	case 197:
		StringCopy(&Var2, "TORSO_P2_26_7", 16);
		iVar6 = 26;
		iVar7 = 7;
		break;

	case 198:
		StringCopy(&Var2, "TORSO_P2_26_8", 16);
		iVar6 = 26;
		iVar7 = 8;
		break;

	case 199:
		StringCopy(&Var2, "TORSO_P2_26_9", 16);
		iVar6 = 26;
		iVar7 = 9;
		break;

	case 200:
		StringCopy(&Var2, "TORSO_P2_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar1 = 2200;
		break;

	case 201:
		StringCopy(&Var2, "TORSO_P2_27_1", 16);
		iVar6 = 27;
		iVar7 = 1;
		iVar1 = 2500;
		break;

	case 202:
		StringCopy(&Var2, "TORSO_P2_27_2", 16);
		iVar6 = 27;
		iVar7 = 2;
		iVar1 = 2500;
		break;

	case 203:
		StringCopy(&Var2, "TORSO_P2_27_3", 16);
		iVar6 = 27;
		iVar7 = 3;
		iVar1 = 2200;
		break;

	case 204:
		StringCopy(&Var2, "TORSO_P2_27_4", 16);
		iVar6 = 27;
		iVar7 = 4;
		iVar1 = 2500;
		break;

	case 205:
		StringCopy(&Var2, "TORSO_P2_27_5", 16);
		iVar6 = 27;
		iVar7 = 5;
		iVar1 = 2500;
		break;

	case 206:
		StringCopy(&Var2, "TORSO_P2_27_6", 16);
		iVar6 = 27;
		iVar7 = 6;
		iVar1 = 2200;
		break;

	case 207:
		StringCopy(&Var2, "TORSO_P2_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 1100;
		break;

	case 208:
		StringCopy(&Var2, "TORSO_P2_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 1200;
		break;

	case 209:
		StringCopy(&Var2, "TORSO_P2_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 1220;
		break;

	case 210:
		StringCopy(&Var2, "TORSO_P2_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 1250;
		break;

	case 211:
		StringCopy(&Var2, "TORSO_P2_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 1300;
		break;

	case 212:
		StringCopy(&Var2, "TORSO_P2_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 1360;
		break;

	case 213:
		StringCopy(&Var2, "TORSO_P2_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 214:
		StringCopy(&Var2, "TORSO_P2_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 215:
		StringCopy(&Var2, "TORSO_P2_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 216:
		StringCopy(&Var2, "TORSO_P2_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 42;
		break;

	case 217:
		StringCopy(&Var2, "TORSO_P2_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 218:
		StringCopy(&Var2, "TORSO_P2_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 45;
		break;

	case 219:
		StringCopy(&Var2, "TORSO_P2_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 45;
		break;

	case 220:
		StringCopy(&Var2, "TORSO_P2_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 44;
		break;

	case 221:
		StringCopy(&Var2, "TORSO_P2_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 46;
		break;

	case 222:
		StringCopy(&Var2, "TORSO_P2_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 52;
		break;

	case 223:
		StringCopy(&Var2, "TORSO_P2_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar1 = 3200;
		break;

	case 224:
		StringCopy(&Var2, "TORSO_P2_29_1", 16);
		iVar6 = 29;
		iVar7 = 1;
		iVar1 = 3200;
		break;

	case 225:
		StringCopy(&Var2, "TORSO_P2_29_2", 16);
		iVar6 = 29;
		iVar7 = 2;
		iVar1 = 2550;
		break;

	case 226:
		StringCopy(&Var2, "TORSO_P2_29_3", 16);
		iVar6 = 29;
		iVar7 = 3;
		iVar1 = 2750;
		break;

	case 227:
		StringCopy(&Var2, "TORSO_P2_29_4", 16);
		iVar6 = 29;
		iVar7 = 4;
		iVar1 = 2590;
		break;

	case 228:
		StringCopy(&Var2, "TORSO_P2_29_5", 16);
		iVar6 = 29;
		iVar7 = 5;
		iVar1 = 2750;
		break;

	case 229:
		StringCopy(&Var2, "TORSO_P2_29_6", 16);
		iVar6 = 29;
		iVar7 = 6;
		iVar1 = 2550;
		break;

	case 230:
		StringCopy(&Var2, "TORSO_P2_29_7", 16);
		iVar6 = 29;
		iVar7 = 7;
		iVar1 = 2590;
		break;

	case 231:
		StringCopy(&Var2, "TORSO_P2_29_8", 16);
		iVar6 = 29;
		iVar7 = 8;
		iVar1 = 2720;
		break;

	case 232:
		StringCopy(&Var2, "TORSO_P2_29_9", 16);
		iVar6 = 29;
		iVar7 = 9;
		iVar1 = 2750;
		break;

	case 233:
		StringCopy(&Var2, "TORSO_P2_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 3250;
		break;

	case 234:
		StringCopy(&Var2, "TORSO_P2_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 2950;
		break;

	case 235:
		StringCopy(&Var2, "TORSO_P2_30_2", 16);
		iVar6 = 30;
		iVar7 = 2;
		iVar1 = 3100;
		break;

	case 236:
		StringCopy(&Var2, "TORSO_P2_30_3", 16);
		iVar6 = 30;
		iVar7 = 3;
		iVar1 = 3150;
		break;

	case 237:
		StringCopy(&Var2, "TORSO_P2_30_4", 16);
		iVar6 = 30;
		iVar7 = 4;
		iVar1 = 3240;
		break;

	case 238:
		StringCopy(&Var2, "TORSO_P2_30_5", 16);
		iVar6 = 30;
		iVar7 = 5;
		iVar1 = 3350;
		break;

	case 239:
		StringCopy(&Var2, "TORSO_P2_30_6", 16);
		iVar6 = 30;
		iVar7 = 6;
		iVar1 = 3400;
		break;

	case 240:
		StringCopy(&Var2, "TORSO_P2_30_7", 16);
		iVar6 = 30;
		iVar7 = 7;
		iVar1 = 3280;
		break;

	case 241:
		StringCopy(&Var2, "TORSO_P2_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		break;

	default: return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x139FB
void func_183(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 25;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 15;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P2_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P2_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 25;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P2_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P2_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 22;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P2_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 20;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P2_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 20;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P2_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 24;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P2_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 26;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P2_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 28;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P2_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 29;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P2_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 22;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P2_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 20;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "TORSO_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 35;
		break;

	case 19:
		StringCopy(&Var2, "TORSO_P2_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 22;
		break;

	case 20:
		StringCopy(&Var2, "TORSO_P2_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 25;
		break;

	case 21:
		StringCopy(&Var2, "TORSO_P2_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 38;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P2_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 23:
		StringCopy(&Var2, "TORSO_P2_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 40;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P2_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 40;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P2_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 40;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P2_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P2_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 500;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P2_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 560;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P2_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 600;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 650;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 500;
		break;

	case 33:
		StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 560;
		break;

	case 34:
		StringCopy(&Var2, "TORSO_P2_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 500;
		break;

	case 35:
		StringCopy(&Var2, "TORSO_P2_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 650;
		break;

	case 36:
		StringCopy(&Var2, "TORSO_P2_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 540;
		break;

	case 37:
		StringCopy(&Var2, "TORSO_P2_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 690;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P2_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 560;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P2_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 590;
		break;

	case 40:
		StringCopy(&Var2, "TORSO_P2_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 690;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P2_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 540;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P2_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 500;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 53:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P2_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P2_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P2_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 25;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P2_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 27;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P2_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 22;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P2_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 350;
		break;

	case 60:
		StringCopy(&Var2, "TORSO_P2_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 27;
		break;

	case 61:
		StringCopy(&Var2, "TORSO_P2_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 370;
		break;

	case 62:
		StringCopy(&Var2, "TORSO_P2_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 25;
		break;

	case 63:
		StringCopy(&Var2, "TORSO_P2_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 22;
		break;

	case 64:
		StringCopy(&Var2, "TORSO_P2_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 25;
		break;

	case 65:
		StringCopy(&Var2, "TORSO_P2_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		break;

	case 66:
		StringCopy(&Var2, "TORSO_P2_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 22;
		break;

	case 67:
		StringCopy(&Var2, "TORSO_P2_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 27;
		break;

	case 68:
		StringCopy(&Var2, "TORSO_P2_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 25;
		break;

	case 69:
		StringCopy(&Var2, "TORSO_P2_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 27;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 1;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P2_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P2_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 39;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P2_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 42;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P2_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 49;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P2_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 35;
		break;

	case 76:
		StringCopy(&Var2, "TORSO_P2_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P2_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P2_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P2_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P2_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 88;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P2_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 60;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P2_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P2_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 70;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P2_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P2_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P2_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 90;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P2_14_8", 16);
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 95;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P2_14_9", 16);
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 89:
		StringCopy(&Var2, "TORSO_P2_14_10", 16);
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 95;
		break;

	case 90:
		StringCopy(&Var2, "TORSO_P2_14_11", 16);
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 110;
		break;

	case 91:
		StringCopy(&Var2, "TORSO_P2_14_12", 16);
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 98;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P2_14_13", 16);
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 88;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P2_14_14", 16);
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 98;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P2_14_15", 16);
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 110;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P2_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P2_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P2_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 520;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 490;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 450;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 420;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 420;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 85;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 85;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 107:
		StringCopy(&Var2, "TORSO_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 68;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 68;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 78;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 85;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P2_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P2_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P2_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 78;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P2_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 75;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P2_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 75;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P2_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 75;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P2_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 78;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P2_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 78;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 40;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 32;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 32;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 32;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 38;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 29;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P2_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 32;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P2_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 29;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P2_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P2_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 32;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P2_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 35;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P2_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 32;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P2_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 40;
		break;

	default: return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1490A
void func_184(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P2_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P2_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "HAIR_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "HAIR_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "HAIR_P2_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "HAIR_P2_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 9); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14A36
void func_185(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	default: func_169(iVar10, iParam0, 7); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14B33
void func_186(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_204(iParam1); break;

	case 2: func_203(iParam1); break;

	case 3: func_199(iParam1); break;

	case 4: func_198(iParam1); break;

	case 6: func_197(iParam1); break;

	case 5: func_196(iParam1); break;

	case 8: func_195(iParam1); break;

	case 9: func_194(iParam1); break;

	case 10: func_193(iParam1); break;

	case 1: func_192(iParam1); break;

	case 7: func_191(iParam1); break;

	case 11: func_190(iParam1); break;

	case 12: func_189(iParam1); break;

	case 13: func_188(iParam1); break;

	case 14: func_187(iParam1); break;
	}
}

// Position - 0x14C23
void func_187(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 158:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	case 159:
		StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 4590;
		iVar8 = 2;
		break;

	case 160:
		StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 4100;
		iVar8 = 2;
		break;

	case 161:
		StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 3850;
		iVar8 = 2;
		break;

	case 162:
		StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 1850;
		iVar8 = 2;
		break;

	case 163:
		StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 5250;
		iVar8 = 2;
		break;

	case 164:
		StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 2700;
		iVar8 = 2;
		break;

	case 165:
		StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 3100;
		iVar8 = 2;
		break;

	case 166:
		StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 5050;
		iVar8 = 2;
		break;

	case 167:
		StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 2500;
		iVar8 = 2;
		break;

	case 168:
		StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 1950;
		iVar8 = 2;
		break;

	case 169:
		StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 3900;
		iVar8 = 2;
		break;

	case 170:
		StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 3550;
		iVar8 = 2;
		break;

	case 171:
		StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 4500;
		iVar8 = 2;
		break;

	case 172:
		StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 2700;
		iVar8 = 2;
		break;

	case 173:
		StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 3100;
		iVar8 = 2;
		break;

	case 174:
		StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 2950;
		iVar8 = 2;
		break;

	case 82:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P1_E1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P1_E1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P1_E1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P1_E1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 87:
		StringCopy(&Var2, "PROPS_P1_E1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 88:
		StringCopy(&Var2, "PROPS_P1_E1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P1_E1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P1_E1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P1_E1_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P1_E1_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P1_E2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P1_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P1_E4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 120;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P1_E4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 128;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P1_E4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 130;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P1_E4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P1_E4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P1_E4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 135;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P1_E4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P1_E5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P1_E5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 112;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P1_E5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P1_E5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 118;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P1_E5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P1_E5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 125;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P1_E5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 128;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P1_E5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "PROPS_P1_E5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "PROPS_P1_E5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "PROPS_P1_E6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 113:
		StringCopy(&Var2, "PROPS_P1_E6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 114:
		StringCopy(&Var2, "PROPS_P1_E6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 115:
		StringCopy(&Var2, "PROPS_P1_E6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 116:
		StringCopy(&Var2, "PROPS_P1_E6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 117:
		StringCopy(&Var2, "PROPS_P1_E6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 62;
		iVar8 = 10;
		break;

	case 118:
		StringCopy(&Var2, "PROPS_P1_E6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 119:
		StringCopy(&Var2, "PROPS_P1_E6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 120:
		StringCopy(&Var2, "PROPS_P1_E6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 121:
		StringCopy(&Var2, "PROPS_P1_E6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 72;
		iVar8 = 10;
		break;

	case 122:
		StringCopy(&Var2, "PROPS_P1_E7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 123:
		StringCopy(&Var2, "PROPS_P1_E7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 149;
		iVar8 = 10;
		break;

	case 124:
		StringCopy(&Var2, "PROPS_P1_E7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 139;
		iVar8 = 10;
		break;

	case 125:
		StringCopy(&Var2, "PROPS_P1_E7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 149;
		iVar8 = 10;
		break;

	case 126:
		StringCopy(&Var2, "PROPS_P1_E7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 135;
		iVar8 = 10;
		break;

	case 127:
		StringCopy(&Var2, "PROPS_P1_E7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 128:
		StringCopy(&Var2, "PROPS_P1_E7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 129:
		StringCopy(&Var2, "PROPS_P1_E7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 130:
		StringCopy(&Var2, "PROPS_P1_E7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 159;
		iVar8 = 10;
		break;

	case 131:
		StringCopy(&Var2, "PROPS_P1_E7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 132:
		StringCopy(&Var2, "PROPS_P1_E8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 198;
		iVar8 = 10;
		break;

	case 133:
		StringCopy(&Var2, "PROPS_P1_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 134:
		StringCopy(&Var2, "PROPS_P1_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 135:
		StringCopy(&Var2, "PROPS_P1_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 220;
		iVar8 = 10;
		break;

	case 136:
		StringCopy(&Var2, "PROPS_P1_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 190;
		iVar8 = 10;
		break;

	case 137:
		StringCopy(&Var2, "PROPS_P1_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 200;
		iVar8 = 10;
		break;

	case 138:
		StringCopy(&Var2, "PROPS_P1_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 208;
		iVar8 = 10;
		break;

	case 139:
		StringCopy(&Var2, "PROPS_P1_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 140:
		StringCopy(&Var2, "PROPS_P1_E9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 141:
		StringCopy(&Var2, "PROPS_P1_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 142:
		StringCopy(&Var2, "PROPS_P1_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 190;
		iVar8 = 10;
		break;

	case 143:
		StringCopy(&Var2, "PROPS_P1_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 144:
		StringCopy(&Var2, "PROPS_P1_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 145:
		StringCopy(&Var2, "PROPS_P1_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 168;
		iVar8 = 10;
		break;

	case 146:
		StringCopy(&Var2, "PROPS_P1_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 147:
		StringCopy(&Var2, "PROPS_P1_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 148:
		StringCopy(&Var2, "PROPS_P1_E9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 149:
		StringCopy(&Var2, "PROPS_P1_E9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 150:
		StringCopy(&Var2, "PROPS_P1_E10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 151:
		StringCopy(&Var2, "PROPS_P1_E10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 152:
		StringCopy(&Var2, "PROPS_P1_E10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 153:
		StringCopy(&Var2, "PROPS_P1_E10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 154:
		StringCopy(&Var2, "PROPS_P1_E10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 168;
		iVar8 = 10;
		break;

	case 155:
		StringCopy(&Var2, "PROPS_P1_E10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 156:
		StringCopy(&Var2, "PROPS_P1_E10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 160;
		iVar8 = 10;
		break;

	case 157:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 10:
		StringCopy(&Var2, "PROPS_P1_H0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 13:
		StringCopy(&Var2, "PROPS_P1_H3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "PROPS_P1_H19_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "PROPS_P1_H19_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "PROPS_P1_H19_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "PROPS_P1_H19_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "PROPS_P1_H19_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "PROPS_P1_H19_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "PROPS_P1_H19_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "PROPS_P1_H19_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "PROPS_P1_H19_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "PROPS_P1_H19_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "PROPS_P1_H19_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "PROPS_P1_H19_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "PROPS_P1_H19_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "PROPS_P1_H19_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "PROPS_P1_H19_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "PROPS_P1_H19_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 59:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 64:
		StringCopy(&Var2, "PROPS_P1_H19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 65:
		StringCopy(&Var2, "PROPS_P1_H19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 66:
		StringCopy(&Var2, "PROPS_P1_H19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 32;
		iVar8 = 0;
		break;

	case 67:
		StringCopy(&Var2, "PROPS_P1_H19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 35;
		iVar8 = 0;
		break;

	case 68:
		StringCopy(&Var2, "PROPS_P1_H19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 38;
		iVar8 = 0;
		break;

	case 69:
		StringCopy(&Var2, "PROPS_P1_H19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 42;
		iVar8 = 0;
		break;

	case 70:
		StringCopy(&Var2, "PROPS_P1_H19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 42;
		iVar8 = 0;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P1_H19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 40;
		iVar8 = 0;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P1_H19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 45;
		iVar8 = 0;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P1_H19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 48;
		iVar8 = 0;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P1_H19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P1_H19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P1_H19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P1_H19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P1_H19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P1_H19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 35;
		iVar8 = 0;
		break;

	case 80:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 81:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	default: func_169(iVar10, iParam0, 175); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16113
void func_188(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 9); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16263
void func_189(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P1_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "OUTFIT_P1_2", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "OUTFIT_P1_4", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P1_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P1_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P1_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "OUTFIT_P1_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P1_13", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P1_15", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "OUTFIT_P1_16", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P1_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P1_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P1_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P1_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P1_21", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P1_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P1_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P1_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P1_25", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P1_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P1_27", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P1_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4000;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P1_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P1_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P1_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4650;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P1_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P1_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P1_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4750;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P1_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4750;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P1_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5200;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P1_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5200;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P1_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P1_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P1_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P1_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P1_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P1_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P1_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P1_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P1_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P1_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P1_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P1_51", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P1_52", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P1_53", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P1_54", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 47); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1676D
void func_190(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		StringCopy(&Var2, "JBIB_P1_1_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "JBIB_P1_1_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 7:
		StringCopy(&Var2, "JBIB_P1_1_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 8:
		StringCopy(&Var2, "JBIB_P1_1_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 9:
		StringCopy(&Var2, "JBIB_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "JBIB_P1_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 11:
		StringCopy(&Var2, "JBIB_P1_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 12:
		StringCopy(&Var2, "JBIB_P1_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 13:
		StringCopy(&Var2, "JBIB_P1_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 14:
		StringCopy(&Var2, "JBIB_P1_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		break;

	case 15:
		StringCopy(&Var2, "JBIB_P1_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		break;

	case 16:
		StringCopy(&Var2, "JBIB_P1_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		break;

	case 17:
		StringCopy(&Var2, "JBIB_P1_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		break;

	case 18:
		StringCopy(&Var2, "JBIB_P1_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		break;

	case 19:
		StringCopy(&Var2, "JBIB_P1_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		break;

	case 20:
		StringCopy(&Var2, "JBIB_P1_3_11", 16);
		iVar6 = 3;
		iVar7 = 11;
		break;

	case 21:
		StringCopy(&Var2, "JBIB_P1_3_12", 16);
		iVar6 = 3;
		iVar7 = 12;
		break;

	case 22:
		StringCopy(&Var2, "JBIB_P1_3_13", 16);
		iVar6 = 3;
		iVar7 = 13;
		break;

	case 23:
		StringCopy(&Var2, "JBIB_P1_3_14", 16);
		iVar6 = 3;
		iVar7 = 14;
		break;

	case 24:
		StringCopy(&Var2, "JBIB_P1_3_15", 16);
		iVar6 = 3;
		iVar7 = 15;
		break;

	case 25:
		StringCopy(&Var2, "JBIB_P1_3_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 26:
		StringCopy(&Var2, "JBIB_P1_3_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 27:
		StringCopy(&Var2, "JBIB_P1_3_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 28:
		StringCopy(&Var2, "JBIB_P1_3_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 29:
		StringCopy(&Var2, "JBIB_P1_3_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 30:
		StringCopy(&Var2, "JBIB_P1_3_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		break;

	case 31:
		StringCopy(&Var2, "JBIB_P1_3_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		break;

	case 32:
		StringCopy(&Var2, "JBIB_P1_3_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		break;

	case 33:
		StringCopy(&Var2, "JBIB_P1_3_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		break;

	case 34:
		StringCopy(&Var2, "JBIB_P1_3_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		break;

	case 35:
		StringCopy(&Var2, "JBIB_P1_3_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		break;

	case 36:
		StringCopy(&Var2, "JBIB_P1_3_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		break;

	case 37:
		StringCopy(&Var2, "JBIB_P1_3_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		break;

	case 38:
		StringCopy(&Var2, "JBIB_P1_3_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		break;

	case 39:
		StringCopy(&Var2, "JBIB_P1_3_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		break;

	case 40:
		StringCopy(&Var2, "JBIB_P1_3_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		break;

	case 41:
		StringCopy(&Var2, "JBIB_P1_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "JBIB_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "JBIB_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 44:
		StringCopy(&Var2, "JBIB_P1_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "JBIB_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "JBIB_P1_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 47:
		StringCopy(&Var2, "JBIB_P1_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "JBIB_P1_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 49:
		StringCopy(&Var2, "JBIB_P1_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 35;
		break;

	case 50:
		StringCopy(&Var2, "JBIB_P1_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 32;
		break;

	case 51:
		StringCopy(&Var2, "JBIB_P1_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 35;
		break;

	case 52:
		StringCopy(&Var2, "JBIB_P1_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 48;
		break;

	case 53:
		StringCopy(&Var2, "JBIB_P1_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 52;
		break;

	case 54:
		StringCopy(&Var2, "JBIB_P1_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 55:
		StringCopy(&Var2, "JBIB_P1_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 42;
		break;

	case 56:
		StringCopy(&Var2, "JBIB_P1_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 38;
		break;

	case 57:
		StringCopy(&Var2, "JBIB_P1_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 58:
		StringCopy(&Var2, "JBIB_P1_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 48;
		break;

	case 59:
		StringCopy(&Var2, "JBIB_P1_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 42;
		break;

	case 60:
		StringCopy(&Var2, "JBIB_P1_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 45;
		break;

	case 61:
		StringCopy(&Var2, "JBIB_P1_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 62:
		StringCopy(&Var2, "JBIB_P1_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 49;
		break;

	default: func_169(iVar10, iParam0, 63); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16DDA
void func_191(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 1); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16E4D
void func_192(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P1_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 5); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16F1C
void func_193(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 5;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 5;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 6;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 6;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 7;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 8;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 9;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 10;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 11;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 12;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 13;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 14;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 15;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 41:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 42:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 5;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 6;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 7;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 53); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1744B
void func_194(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 6:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 7:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 8:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 12); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x175E1
void func_195(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC_P1_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "SPEC_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 195;
		break;

	case 12:
		StringCopy(&Var2, "SPEC_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 195;
		break;

	case 13:
		StringCopy(&Var2, "SPEC_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 195;
		break;

	case 14:
		StringCopy(&Var2, "SPEC_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 250;
		break;

	case 15:
		StringCopy(&Var2, "SPEC_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 250;
		break;

	case 16:
		StringCopy(&Var2, "SPEC_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 250;
		break;

	case 17:
		StringCopy(&Var2, "SPEC_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 195;
		break;

	case 18:
		StringCopy(&Var2, "SPEC_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 250;
		break;

	case 19:
		StringCopy(&Var2, "SPEC_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 250;
		break;

	case 20:
		StringCopy(&Var2, "SPEC_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 250;
		break;

	case 21:
		StringCopy(&Var2, "SPEC_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 250;
		break;

	case 22:
		StringCopy(&Var2, "SPEC_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 195;
		break;

	case 23:
		StringCopy(&Var2, "SPEC_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 250;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 27:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		break;

	case 29:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		break;

	case 30:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		break;

	case 31:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 32:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		break;

	case 33:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		break;

	case 34:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		break;

	case 35:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		break;

	case 36:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		break;

	case 37:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		break;

	case 38:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		break;

	case 39:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		break;

	case 40:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		break;

	case 41:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		break;

	case 42:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		break;

	case 43:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		break;

	case 45:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		break;

	case 46:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		break;

	case 47:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		break;

	case 48:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		break;

	case 49:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		break;

	case 50:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		break;

	case 51:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		break;

	case 52:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		break;

	case 53:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		break;

	case 54:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		break;

	case 55:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		break;

	case 56:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		break;

	case 57:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		break;

	case 58:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		break;

	case 59:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 60:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		break;

	case 61:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 62:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		break;

	case 63:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		break;

	case 64:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		break;

	case 65:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		break;

	case 66:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		break;

	case 67:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		break;

	case 68:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		break;

	case 69:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		break;

	case 70:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		break;

	case 71:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		break;

	case 72:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		break;

	case 73:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		break;

	case 74:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		break;

	case 75:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 76:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 77); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x17DDE
void func_196(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_169(iVar10, iParam0, 7); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x17EED
void func_197(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P1_00_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P1_00_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P1_00_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P1_00_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 89;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P1_00_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 45;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P1_00_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 35;
		break;

	case 6:
		StringCopy(&Var2, "FEET_P1_00_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 89;
		break;

	case 7:
		StringCopy(&Var2, "FEET_P1_00_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 8:
		StringCopy(&Var2, "FEET_P1_00_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 9:
		StringCopy(&Var2, "FEET_P1_00_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 10:
		StringCopy(&Var2, "FEET_P1_00_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 145;
		break;

	case 11:
		StringCopy(&Var2, "FEET_P1_00_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 145;
		break;

	case 12:
		StringCopy(&Var2, "FEET_P1_01_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P1_06_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "FEET_P1_06_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 180;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P1_06_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P1_06_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 200;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P1_06_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 220;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P1_06_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 235;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P1_08_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 870;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P1_08_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 870;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P1_08_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 870;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P1_08_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 1275;
		break;

	case 29:
		StringCopy(&Var2, "FEET_P1_08_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 1275;
		break;

	case 30:
		StringCopy(&Var2, "FEET_P1_08_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 1275;
		break;

	case 31:
		StringCopy(&Var2, "FEET_P1_08_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 1275;
		break;

	case 32:
		StringCopy(&Var2, "FEET_P1_08_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 1275;
		break;

	case 33:
		StringCopy(&Var2, "FEET_P1_08_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 1275;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "FEET_P1_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 50;
		break;

	case 38:
		StringCopy(&Var2, "FEET_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 50;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 50;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 50;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P1_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P1_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 50;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P1_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 50;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P1_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P1_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 25;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P1_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 20;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P1_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 24;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P1_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P1_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 27;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P1_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 29;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P1_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P1_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 25;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P1_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P1_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 28;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P1_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 30;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 155;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P1_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 155;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P1_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 165;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P1_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 170;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P1_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P1_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 165;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P1_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 170;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P1_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 160;
		break;

	case 73:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 720;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P1_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P1_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P1_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P1_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P1_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P1_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P1_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P1_16_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P1_16_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 84:
		StringCopy(&Var2, "FEET_P1_16_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 85:
		StringCopy(&Var2, "FEET_P1_16_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar1 = 700;
		break;

	case 86:
		StringCopy(&Var2, "FEET_P1_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 87:
		StringCopy(&Var2, "FEET_P1_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 88:
		StringCopy(&Var2, "FEET_P1_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 89:
		StringCopy(&Var2, "FEET_P1_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 90:
		StringCopy(&Var2, "FEET_P1_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 91:
		StringCopy(&Var2, "FEET_P1_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 92:
		StringCopy(&Var2, "FEET_P1_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 93:
		StringCopy(&Var2, "FEET_P1_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 94:
		StringCopy(&Var2, "FEET_P1_17_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 95:
		StringCopy(&Var2, "FEET_P1_17_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 96:
		StringCopy(&Var2, "FEET_P1_17_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 97:
		StringCopy(&Var2, "FEET_P1_17_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 98:
		StringCopy(&Var2, "FEET_P1_17_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 99:
		StringCopy(&Var2, "FEET_P1_17_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 100:
		StringCopy(&Var2, "FEET_P1_17_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 101:
		StringCopy(&Var2, "FEET_P1_17_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 102:
		StringCopy(&Var2, "FEET_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 103:
		StringCopy(&Var2, "FEET_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 104:
		StringCopy(&Var2, "FEET_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 105:
		StringCopy(&Var2, "FEET_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 106:
		StringCopy(&Var2, "FEET_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 107:
		StringCopy(&Var2, "FEET_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 108:
		StringCopy(&Var2, "FEET_P1_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 109:
		StringCopy(&Var2, "FEET_P1_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 110:
		StringCopy(&Var2, "FEET_P1_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 111:
		StringCopy(&Var2, "FEET_P1_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 112:
		StringCopy(&Var2, "FEET_P1_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 113:
		StringCopy(&Var2, "FEET_P1_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 114:
		StringCopy(&Var2, "FEET_P1_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 115:
		StringCopy(&Var2, "FEET_P1_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 116:
		StringCopy(&Var2, "FEET_P1_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 117:
		StringCopy(&Var2, "FEET_P1_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 118:
		StringCopy(&Var2, "FEET_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 119:
		StringCopy(&Var2, "FEET_P1_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 120:
		StringCopy(&Var2, "FEET_P1_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 121:
		StringCopy(&Var2, "FEET_P1_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 122:
		StringCopy(&Var2, "FEET_P1_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 123:
		StringCopy(&Var2, "FEET_P1_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 124:
		StringCopy(&Var2, "FEET_P1_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 125:
		StringCopy(&Var2, "FEET_P1_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 126:
		StringCopy(&Var2, "FEET_P1_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 127:
		StringCopy(&Var2, "FEET_P1_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 128:
		StringCopy(&Var2, "FEET_P1_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 129:
		StringCopy(&Var2, "FEET_P1_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 130:
		StringCopy(&Var2, "FEET_P1_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 131:
		StringCopy(&Var2, "FEET_P1_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 132:
		StringCopy(&Var2, "FEET_P1_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 133:
		StringCopy(&Var2, "FEET_P1_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 110;
		break;

	default: func_169(iVar10, iParam0, 134); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18F03
void func_198(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 32;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 38;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 44;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "LEGS_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "LEGS_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 15:
		StringCopy(&Var2, "LEGS_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 690;
		break;

	case 16:
		StringCopy(&Var2, "LEGS_P1_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 720;
		break;

	case 17:
		StringCopy(&Var2, "LEGS_P1_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 18:
		StringCopy(&Var2, "LEGS_P1_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 850;
		break;

	case 19:
		StringCopy(&Var2, "LEGS_P1_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 740;
		break;

	case 20:
		StringCopy(&Var2, "LEGS_P1_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 750;
		break;

	case 21:
		StringCopy(&Var2, "LEGS_P1_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 790;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P1_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 145;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P1_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 140;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P1_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 148;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P1_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P1_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 154;
		break;

	case 30:
		StringCopy(&Var2, "LEGS_P1_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 158;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "LEGS_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 820;
		break;

	case 34:
		StringCopy(&Var2, "LEGS_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 820;
		break;

	case 35:
		StringCopy(&Var2, "LEGS_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 850;
		break;

	case 36:
		StringCopy(&Var2, "LEGS_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 37:
		StringCopy(&Var2, "LEGS_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 920;
		break;

	case 38:
		StringCopy(&Var2, "LEGS_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 950;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 40:
		StringCopy(&Var2, "LEGS_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P1_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 45;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P1_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P1_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 45;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P1_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 48;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P1_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 52;
		break;

	case 46:
		StringCopy(&Var2, "LEGS_P1_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 55;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P1_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 58;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P1_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 60;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P1_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 58;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P1_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 62;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P1_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P1_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P1_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P1_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P1_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 180;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 180;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P1_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 118;
		break;

	case 80:
		StringCopy(&Var2, "LEGS_P1_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 120;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P1_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 128;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P1_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 128;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P1_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 130;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P1_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 145;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P1_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 138;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P1_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 132;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P1_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 148;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P1_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 118;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P1_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 118;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P1_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 118;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P1_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 129;
		break;

	case 92:
		StringCopy(&Var2, "LEGS_P1_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 135;
		break;

	case 93:
		StringCopy(&Var2, "LEGS_P1_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 135;
		break;

	case 94:
		StringCopy(&Var2, "LEGS_P1_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 118;
		break;

	case 95:
		StringCopy(&Var2, "LEGS_P1_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 118;
		break;

	case 96:
		StringCopy(&Var2, "LEGS_P1_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 118;
		break;

	case 97:
		StringCopy(&Var2, "LEGS_P1_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 55;
		break;

	case 98:
		StringCopy(&Var2, "LEGS_P1_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 55;
		break;

	case 99:
		StringCopy(&Var2, "LEGS_P1_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 59;
		break;

	case 100:
		StringCopy(&Var2, "LEGS_P1_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 59;
		break;

	case 101:
		StringCopy(&Var2, "LEGS_P1_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 102:
		StringCopy(&Var2, "LEGS_P1_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 65;
		break;

	case 103:
		StringCopy(&Var2, "LEGS_P1_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 69;
		break;

	case 104:
		StringCopy(&Var2, "LEGS_P1_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 69;
		break;

	case 105:
		StringCopy(&Var2, "LEGS_P1_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 106:
		StringCopy(&Var2, "LEGS_P1_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 107:
		StringCopy(&Var2, "LEGS_P1_22_10", 16);
		iVar6 = 22;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 108:
		StringCopy(&Var2, "LEGS_P1_22_11", 16);
		iVar6 = 22;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 109:
		StringCopy(&Var2, "LEGS_P1_22_12", 16);
		iVar6 = 22;
		iVar7 = 12;
		iVar1 = 65;
		break;

	case 110:
		StringCopy(&Var2, "LEGS_P1_22_13", 16);
		iVar6 = 22;
		iVar7 = 13;
		iVar1 = 65;
		break;

	case 111:
		StringCopy(&Var2, "LEGS_P1_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 38;
		break;

	case 112:
		StringCopy(&Var2, "LEGS_P1_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 38;
		break;

	case 113:
		StringCopy(&Var2, "LEGS_P1_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 28;
		break;

	case 114:
		StringCopy(&Var2, "LEGS_P1_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 34;
		break;

	case 115:
		StringCopy(&Var2, "LEGS_P1_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 36;
		break;

	case 116:
		StringCopy(&Var2, "LEGS_P1_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar1 = 32;
		break;

	default: func_169(iVar10, iParam0, 117); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x19BBF
void func_199(int iParam0) {
	if (iParam0 < 107) {
		func_202(iParam0);
	}
	else if (iParam0 < 227) {
		func_201(iParam0);
	}
	else {
		func_200(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_169(3, iParam0, 318);
	}
}

// Position - 0x19C04
void func_200(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 227:
		StringCopy(&Var2, "TORSO_P1_18_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 228:
		StringCopy(&Var2, "TORSO_P1_18_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar9 = 3;
		break;

	case 229:
		StringCopy(&Var2, "TORSO_P1_18_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar9 = 3;
		break;

	case 230:
		StringCopy(&Var2, "TORSO_P1_18_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 231:
		StringCopy(&Var2, "TORSO_P1_18_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 232:
		StringCopy(&Var2, "TORSO_P1_18_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 233:
		StringCopy(&Var2, "TORSO_P1_18_6", 16);
		iVar6 = 23;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 234:
		StringCopy(&Var2, "TORSO_P1_18_7", 16);
		iVar6 = 23;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 235:
		StringCopy(&Var2, "TORSO_P1_18_8", 16);
		iVar6 = 23;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 236:
		StringCopy(&Var2, "TORSO_P1_18_9", 16);
		iVar6 = 23;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 237:
		StringCopy(&Var2, "TORSO_P1_18_10", 16);
		iVar6 = 23;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 238:
		StringCopy(&Var2, "TORSO_P1_18_11", 16);
		iVar6 = 23;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 239:
		StringCopy(&Var2, "TORSO_P1_18_12", 16);
		iVar6 = 23;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 240:
		StringCopy(&Var2, "TORSO_P1_18_13", 16);
		iVar6 = 23;
		iVar7 = 13;
		iVar9 = 3;
		break;

	case 241:
		StringCopy(&Var2, "TORSO_P1_18_14", 16);
		iVar6 = 23;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 242:
		StringCopy(&Var2, "TORSO_P1_18_15", 16);
		iVar6 = 23;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 243:
		StringCopy(&Var2, "TORSO_P1_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 244:
		StringCopy(&Var2, "TORSO_P1_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 245:
		StringCopy(&Var2, "TORSO_P1_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 246:
		StringCopy(&Var2, "TORSO_P1_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 247:
		StringCopy(&Var2, "TORSO_P1_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 248:
		StringCopy(&Var2, "TORSO_P1_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 249:
		StringCopy(&Var2, "TORSO_P1_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 250:
		StringCopy(&Var2, "TORSO_P1_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 251:
		StringCopy(&Var2, "TORSO_P1_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 252:
		StringCopy(&Var2, "TORSO_P1_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 253:
		StringCopy(&Var2, "TORSO_P1_24_10", 16);
		iVar6 = 24;
		iVar7 = 10;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 254:
		StringCopy(&Var2, "TORSO_P1_24_11", 16);
		iVar6 = 24;
		iVar7 = 11;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 255:
		StringCopy(&Var2, "TORSO_P1_24_12", 16);
		iVar6 = 24;
		iVar7 = 12;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 256:
		StringCopy(&Var2, "TORSO_P1_24_13", 16);
		iVar6 = 24;
		iVar7 = 13;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 257:
		StringCopy(&Var2, "TORSO_P1_24_14", 16);
		iVar6 = 24;
		iVar7 = 14;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 258:
		StringCopy(&Var2, "TORSO_P1_24_15", 16);
		iVar6 = 24;
		iVar7 = 15;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 259:
		StringCopy(&Var2, "TORSO_P1_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 3;
		break;

	case 260:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar9 = 1;
		break;

	case 261:
		StringCopy(&Var2, "TORSO_P1_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 262:
		StringCopy(&Var2, "TORSO_P1_27_1", 16);
		iVar6 = 27;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 263:
		StringCopy(&Var2, "TORSO_P1_27_2", 16);
		iVar6 = 27;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 264:
		StringCopy(&Var2, "TORSO_P1_27_3", 16);
		iVar6 = 27;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 265:
		StringCopy(&Var2, "TORSO_P1_27_4", 16);
		iVar6 = 27;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 266:
		StringCopy(&Var2, "TORSO_P1_27_5", 16);
		iVar6 = 27;
		iVar7 = 5;
		iVar1 = 160;
		break;

	case 267:
		StringCopy(&Var2, "TORSO_P1_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 268:
		StringCopy(&Var2, "TORSO_P1_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 269:
		StringCopy(&Var2, "TORSO_P1_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 70;
		break;

	case 270:
		StringCopy(&Var2, "TORSO_P1_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 271:
		StringCopy(&Var2, "TORSO_P1_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 90;
		break;

	case 272:
		StringCopy(&Var2, "TORSO_P1_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 273:
		StringCopy(&Var2, "TORSO_P1_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 274:
		StringCopy(&Var2, "TORSO_P1_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 275:
		StringCopy(&Var2, "TORSO_P1_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 105;
		break;

	case 276:
		StringCopy(&Var2, "TORSO_P1_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 95;
		break;

	case 277:
		StringCopy(&Var2, "TORSO_P1_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 110;
		break;

	case 278:
		StringCopy(&Var2, "TORSO_P1_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 98;
		break;

	case 279:
		StringCopy(&Var2, "TORSO_P1_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 88;
		break;

	case 280:
		StringCopy(&Var2, "TORSO_P1_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 98;
		break;

	case 281:
		StringCopy(&Var2, "TORSO_P1_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 110;
		break;

	case 282:
		StringCopy(&Var2, "TORSO_P1_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 98;
		break;

	case 283:
		StringCopy(&Var2, "TORSO_P1_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 284:
		StringCopy(&Var2, "TORSO_P1_29_1", 16);
		iVar6 = 29;
		iVar7 = 1;
		iVar1 = 270;
		break;

	case 285:
		StringCopy(&Var2, "TORSO_P1_29_2", 16);
		iVar6 = 29;
		iVar7 = 2;
		iVar1 = 280;
		break;

	case 286:
		StringCopy(&Var2, "TORSO_P1_29_3", 16);
		iVar6 = 29;
		iVar7 = 3;
		iVar1 = 275;
		break;

	case 287:
		StringCopy(&Var2, "TORSO_P1_29_4", 16);
		iVar6 = 29;
		iVar7 = 4;
		iVar1 = 290;
		break;

	case 288:
		StringCopy(&Var2, "TORSO_P1_29_5", 16);
		iVar6 = 29;
		iVar7 = 5;
		iVar1 = 35;
		break;

	case 289:
		StringCopy(&Var2, "TORSO_P1_29_6", 16);
		iVar6 = 29;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 290:
		StringCopy(&Var2, "TORSO_P1_29_7", 16);
		iVar6 = 29;
		iVar7 = 7;
		iVar1 = 35;
		break;

	case 291:
		StringCopy(&Var2, "TORSO_P1_29_8", 16);
		iVar6 = 29;
		iVar7 = 8;
		iVar1 = 295;
		break;

	case 292:
		StringCopy(&Var2, "TORSO_P1_29_9", 16);
		iVar6 = 29;
		iVar7 = 9;
		iVar1 = 35;
		break;

	case 293:
		StringCopy(&Var2, "TORSO_P1_29_10", 16);
		iVar6 = 29;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 294:
		StringCopy(&Var2, "TORSO_P1_29_11", 16);
		iVar6 = 29;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 295:
		StringCopy(&Var2, "TORSO_P1_29_12", 16);
		iVar6 = 29;
		iVar7 = 12;
		break;

	case 296:
		StringCopy(&Var2, "TORSO_P1_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 1750;
		break;

	case 297:
		StringCopy(&Var2, "TORSO_P1_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 1920;
		break;

	case 298:
		StringCopy(&Var2, "TORSO_P1_30_2", 16);
		iVar6 = 30;
		iVar7 = 2;
		iVar1 = 1890;
		break;

	case 299:
		StringCopy(&Var2, "TORSO_P1_30_3", 16);
		iVar6 = 30;
		iVar7 = 3;
		iVar1 = 1850;
		break;

	case 300:
		StringCopy(&Var2, "TORSO_P1_30_4", 16);
		iVar6 = 30;
		iVar7 = 4;
		iVar1 = 1750;
		break;

	case 301:
		StringCopy(&Var2, "TORSO_P1_30_5", 16);
		iVar6 = 30;
		iVar7 = 5;
		iVar1 = 1990;
		break;

	case 302:
		StringCopy(&Var2, "TORSO_P1_30_6", 16);
		iVar6 = 30;
		iVar7 = 6;
		iVar1 = 1820;
		break;

	case 303:
		StringCopy(&Var2, "TORSO_P1_30_7", 16);
		iVar6 = 30;
		iVar7 = 7;
		iVar1 = 1990;
		break;

	case 304:
		StringCopy(&Var2, "TORSO_P1_30_8", 16);
		iVar6 = 30;
		iVar7 = 8;
		iVar1 = 1920;
		break;

	case 305:
		StringCopy(&Var2, "TORSO_P1_30_9", 16);
		iVar6 = 30;
		iVar7 = 9;
		iVar1 = 1850;
		break;

	case 306:
		StringCopy(&Var2, "TORSO_P1_30_10", 16);
		iVar6 = 30;
		iVar7 = 10;
		iVar1 = 1990;
		break;

	case 307:
		StringCopy(&Var2, "TORSO_P1_30_11", 16);
		iVar6 = 30;
		iVar7 = 11;
		iVar1 = 1790;
		break;

	case 308:
		StringCopy(&Var2, "TORSO_P1_30_12", 16);
		iVar6 = 30;
		iVar7 = 12;
		iVar1 = 1790;
		break;

	case 309:
		StringCopy(&Var2, "TORSO_P1_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		iVar1 = 69;
		break;

	case 310:
		StringCopy(&Var2, "TORSO_P1_31_1", 16);
		iVar6 = 31;
		iVar7 = 1;
		iVar1 = 75;
		break;

	case 311:
		StringCopy(&Var2, "TORSO_P1_31_2", 16);
		iVar6 = 31;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 312:
		StringCopy(&Var2, "TORSO_P1_31_3", 16);
		iVar6 = 31;
		iVar7 = 3;
		iVar1 = 79;
		break;

	case 313:
		StringCopy(&Var2, "TORSO_P1_31_4", 16);
		iVar6 = 31;
		iVar7 = 4;
		iVar1 = 79;
		break;

	case 314:
		StringCopy(&Var2, "TORSO_P1_31_5", 16);
		iVar6 = 31;
		iVar7 = 5;
		iVar1 = 89;
		break;

	case 315:
		StringCopy(&Var2, "TORSO_P1_31_6", 16);
		iVar6 = 31;
		iVar7 = 6;
		iVar1 = 85;
		break;

	case 316:
		StringCopy(&Var2, "TORSO_P1_31_7", 16);
		iVar6 = 31;
		iVar7 = 7;
		iVar1 = 85;
		break;

	case 317:
		StringCopy(&Var2, "TORSO_P1_31_8", 16);
		iVar6 = 31;
		iVar7 = 8;
		break;

	default: return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1A6A9
void func_201(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 107:
		StringCopy(&Var2, "TORSO_P1_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 195;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P1_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 420;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P1_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 390;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P1_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 450;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P1_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 400;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P1_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 390;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P1_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 570;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P1_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 390;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P1_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 470;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P1_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 390;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P1_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 520;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P1_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 490;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P1_12_12", 16);
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 490;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P1_12_13", 16);
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 590;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P1_12_14", 16);
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 560;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P1_12_15", 16);
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 520;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P1_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P1_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P1_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P1_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 85;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P1_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 45;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P1_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 90;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P1_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 47;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P1_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 45;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P1_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 48;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P1_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 45;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P1_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 85;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P1_13_12", 16);
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 45;
		break;

	case 136:
		StringCopy(&Var2, "TORSO_P1_13_13", 16);
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 47;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P1_13_14", 16);
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P1_13_15", 16);
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 48;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P1_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 290;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P1_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 290;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P1_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 290;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P1_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 290;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P1_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 290;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P1_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 65;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P1_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 65;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 220;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 220;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 250;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 260;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 40;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 45;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 40;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 55;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P1_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 40;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P1_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 50;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P1_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P1_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P1_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 50;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P1_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P1_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P1_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P1_17_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P1_17_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		iVar1 = 50;
		break;

	case 170:
		StringCopy(&Var2, "TORSO_P1_17_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P1_17_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		iVar1 = 50;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P1_17_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P1_17_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P1_17_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		iVar1 = 50;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P1_17_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		iVar1 = 50;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar9 = 3;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar9 = 3;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 181:
		StringCopy(&Var2, "TORSO_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 182:
		StringCopy(&Var2, "TORSO_P1_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 183:
		StringCopy(&Var2, "TORSO_P1_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 184:
		StringCopy(&Var2, "TORSO_P1_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 185:
		StringCopy(&Var2, "TORSO_P1_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 186:
		StringCopy(&Var2, "TORSO_P1_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 187:
		StringCopy(&Var2, "TORSO_P1_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 188:
		StringCopy(&Var2, "TORSO_P1_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 189:
		StringCopy(&Var2, "TORSO_P1_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar9 = 3;
		break;

	case 190:
		StringCopy(&Var2, "TORSO_P1_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 191:
		StringCopy(&Var2, "TORSO_P1_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 192:
		StringCopy(&Var2, "TORSO_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 193:
		StringCopy(&Var2, "TORSO_P1_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 194:
		StringCopy(&Var2, "TORSO_P1_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 195:
		StringCopy(&Var2, "TORSO_P1_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 196:
		StringCopy(&Var2, "TORSO_P1_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 197:
		StringCopy(&Var2, "TORSO_P1_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 198:
		StringCopy(&Var2, "TORSO_P1_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 199:
		StringCopy(&Var2, "TORSO_P1_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 200:
		StringCopy(&Var2, "TORSO_P1_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 201:
		StringCopy(&Var2, "TORSO_P1_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 202:
		StringCopy(&Var2, "TORSO_P1_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 203:
		StringCopy(&Var2, "TORSO_P1_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 204:
		StringCopy(&Var2, "TORSO_P1_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 205:
		StringCopy(&Var2, "TORSO_P1_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 206:
		StringCopy(&Var2, "TORSO_P1_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 207:
		StringCopy(&Var2, "TORSO_P1_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 208:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 209:
		StringCopy(&Var2, "TORSO_P1_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 220;
		break;

	case 210:
		StringCopy(&Var2, "TORSO_P1_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 200;
		break;

	case 211:
		StringCopy(&Var2, "TORSO_P1_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 240;
		break;

	case 212:
		StringCopy(&Var2, "TORSO_P1_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 213:
		StringCopy(&Var2, "TORSO_P1_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 260;
		break;

	case 214:
		StringCopy(&Var2, "TORSO_P1_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 275;
		break;

	case 215:
		StringCopy(&Var2, "TORSO_P1_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 275;
		break;

	case 216:
		StringCopy(&Var2, "TORSO_P1_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 280;
		break;

	case 217:
		StringCopy(&Var2, "TORSO_P1_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 280;
		break;

	case 218:
		StringCopy(&Var2, "TORSO_P1_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 280;
		break;

	case 219:
		StringCopy(&Var2, "TORSO_P1_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 280;
		break;

	case 220:
		StringCopy(&Var2, "TORSO_P1_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 280;
		break;

	case 221:
		StringCopy(&Var2, "TORSO_P1_21_12", 16);
		iVar6 = 21;
		iVar7 = 12;
		iVar1 = 280;
		break;

	case 222:
		StringCopy(&Var2, "TORSO_P1_21_13", 16);
		iVar6 = 21;
		iVar7 = 13;
		iVar1 = 280;
		break;

	case 223:
		StringCopy(&Var2, "TORSO_P1_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 3100;
		iVar9 = 3;
		break;

	case 224:
		StringCopy(&Var2, "TORSO_P1_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 2800;
		iVar9 = 3;
		break;

	case 225:
		StringCopy(&Var2, "TORSO_P1_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 2500;
		iVar9 = 3;
		break;

	case 226:
		StringCopy(&Var2, "TORSO_P1_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 3000;
		iVar9 = 3;
		break;

	default: return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1B498
void func_202(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 180;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P1_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 20;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P1_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 18;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P1_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 19;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P1_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 22;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P1_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 20;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P1_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 19;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P1_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 19;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P1_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 18;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P1_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 20;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P1_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 22;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P1_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 19;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P1_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 22;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 3;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 1;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 20;
		iVar9 = 2;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P1_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 22;
		iVar9 = 2;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P1_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 20;
		iVar9 = 2;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P1_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P1_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 23;
		iVar9 = 2;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P1_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P1_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 28;
		iVar9 = 2;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P1_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 26;
		iVar9 = 2;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P1_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 24;
		iVar9 = 2;
		break;

	case 33:
		StringCopy(&Var2, "TORSO_P1_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 27;
		iVar9 = 2;
		break;

	case 34:
		StringCopy(&Var2, "TORSO_P1_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 29;
		iVar9 = 2;
		break;

	case 35:
		StringCopy(&Var2, "TORSO_P1_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 28;
		iVar9 = 2;
		break;

	case 36:
		StringCopy(&Var2, "TORSO_P1_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 37:
		StringCopy(&Var2, "TORSO_P1_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 22;
		iVar9 = 2;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P1_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 27;
		iVar9 = 2;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P1_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 29;
		iVar9 = 2;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 43:
		StringCopy(&Var2, "TORSO_P1_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 44:
		StringCopy(&Var2, "TORSO_P1_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 45:
		StringCopy(&Var2, "TORSO_P1_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1090;
		iVar9 = 3;
		break;

	case 46:
		StringCopy(&Var2, "TORSO_P1_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 1090;
		iVar9 = 3;
		break;

	case 47:
		StringCopy(&Var2, "TORSO_P1_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 1120;
		iVar9 = 3;
		break;

	case 48:
		StringCopy(&Var2, "TORSO_P1_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 1120;
		iVar9 = 3;
		break;

	case 49:
		StringCopy(&Var2, "TORSO_P1_6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 1290;
		iVar9 = 3;
		break;

	case 50:
		StringCopy(&Var2, "TORSO_P1_6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 1290;
		iVar9 = 3;
		break;

	case 51:
		StringCopy(&Var2, "TORSO_P1_6_10", 16);
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 52:
		StringCopy(&Var2, "TORSO_P1_6_11", 16);
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 53:
		StringCopy(&Var2, "TORSO_P1_6_12", 16);
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P1_6_13", 16);
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P1_6_14", 16);
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P1_6_15", 16);
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P1_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 98;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P1_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 98;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P1_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 60:
		StringCopy(&Var2, "TORSO_P1_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 61:
		StringCopy(&Var2, "TORSO_P1_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 118;
		break;

	case 62:
		StringCopy(&Var2, "TORSO_P1_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 63:
		StringCopy(&Var2, "TORSO_P1_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 64:
		StringCopy(&Var2, "TORSO_P1_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 129;
		break;

	case 65:
		StringCopy(&Var2, "TORSO_P1_7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 125;
		break;

	case 66:
		StringCopy(&Var2, "TORSO_P1_7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 125;
		break;

	case 67:
		StringCopy(&Var2, "TORSO_P1_7_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 129;
		break;

	case 68:
		StringCopy(&Var2, "TORSO_P1_7_11", 16);
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 129;
		break;

	case 69:
		StringCopy(&Var2, "TORSO_P1_7_12", 16);
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 135;
		break;

	case 70:
		StringCopy(&Var2, "TORSO_P1_7_13", 16);
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 139;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P1_7_14", 16);
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 145;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P1_7_15", 16);
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 145;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P1_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P1_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 76:
		StringCopy(&Var2, "TORSO_P1_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P1_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 30;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P1_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 38;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P1_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 32;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P1_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 30;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P1_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 33;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P1_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 35;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P1_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P1_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 38;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P1_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 33;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P1_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 35;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P1_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 38;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P1_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 32;
		break;

	case 89:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 91:
		StringCopy(&Var2, "TORSO_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 59;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 25;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 29;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 27;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 25;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 28;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 29;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 27;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 29;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P1_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 32;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P1_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 30;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P1_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 28;
		break;

	default: return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1C0E2
void func_203(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P1_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 5:
		StringCopy(&Var2, "HAIR_P1_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 6:
		StringCopy(&Var2, "HAIR_P1_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 7:
		StringCopy(&Var2, "HAIR_P1_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 8:
		StringCopy(&Var2, "HAIR_P1_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 9:
		StringCopy(&Var2, "HAIR_P1_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 10:
		StringCopy(&Var2, "HAIR_P1_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 11:
		StringCopy(&Var2, "HAIR_P1_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 12:
		StringCopy(&Var2, "HAIR_P1_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 13:
		StringCopy(&Var2, "HAIR_P1_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "HAIR_P1_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 15:
		StringCopy(&Var2, "HAIR_P1_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 16:
		StringCopy(&Var2, "HAIR_P1_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 17:
		StringCopy(&Var2, "HAIR_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 18:
		StringCopy(&Var2, "HAIR_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 19:
		StringCopy(&Var2, "HAIR_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_169(iVar10, iParam0, 21); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1C35A
void func_204(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	default: func_169(iVar10, iParam0, 10); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1C49F
void func_205(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_222(iParam1); break;

	case 2: func_221(iParam1); break;

	case 3: func_218(iParam1); break;

	case 4: func_217(iParam1); break;

	case 6: func_216(iParam1); break;

	case 5: func_215(iParam1); break;

	case 8: func_214(iParam1); break;

	case 9: func_213(iParam1); break;

	case 10: func_212(iParam1); break;

	case 1: func_211(iParam1); break;

	case 7: func_210(iParam1); break;

	case 11: func_209(iParam1); break;

	case 12: func_208(iParam1); break;

	case 13: func_207(iParam1); break;

	case 14: func_206(iParam1); break;
	}
}

// Position - 0x1C58F
void func_206(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "PROPS_P0_H1", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "PROPS_P0_H2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 11;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "PROPS_P0_H12", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "PROPS_P0_E0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 45;
		iVar8 = 10;
		break;

	case 59:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 61:
		StringCopy(&Var2, "PROPS_P0_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 62:
		StringCopy(&Var2, "PROPS_P0_E4", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 63:
		StringCopy(&Var2, "PROPS_P0_E4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 56;
		iVar8 = 10;
		break;

	case 64:
		StringCopy(&Var2, "PROPS_P0_E4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 65:
		StringCopy(&Var2, "PROPS_P0_E4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 66:
		StringCopy(&Var2, "PROPS_P0_E4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 62;
		iVar8 = 10;
		break;

	case 67:
		StringCopy(&Var2, "PROPS_P0_E4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 68:
		StringCopy(&Var2, "PROPS_P0_E4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 69:
		StringCopy(&Var2, "PROPS_P0_E4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 70:
		StringCopy(&Var2, "PROPS_P0_E5", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P0_E5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P0_E5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 72;
		iVar8 = 10;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P0_E5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 70;
		iVar8 = 10;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P0_E5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 74;
		iVar8 = 10;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P0_E5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 78;
		iVar8 = 10;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P0_E5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 82;
		iVar8 = 10;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P0_E5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 85;
		iVar8 = 10;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P0_E5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 85;
		iVar8 = 10;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P0_E5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar8 = 10;
		break;

	case 80:
		StringCopy(&Var2, "PROPS_P0_E6", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 81:
		StringCopy(&Var2, "PROPS_P0_E6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 82:
		StringCopy(&Var2, "PROPS_P0_E6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P0_E6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P0_E6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P0_E6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P0_E6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 87:
		StringCopy(&Var2, "PROPS_P0_E6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 88:
		StringCopy(&Var2, "PROPS_P0_E6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P0_E6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P0_E7", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P0_E8", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P0_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P0_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P0_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P0_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P0_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P0_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 235;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P0_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 245;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P0_E8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 250;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P0_E8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 275;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P0_E8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 280;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P0_E8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 295;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P0_E9", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 179;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P0_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 159;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P0_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P0_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P0_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P0_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P0_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "PROPS_P0_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 225;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	default: func_169(iVar10, iParam0, 113); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1D318
void func_207(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_169(iVar10, iParam0, 10); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1D491
void func_208(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "OUTFIT_P0_1", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "OUTFIT_P0_4", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P0_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P0_8", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P0_9", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P0_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P0_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P0_14", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P0_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P0_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P0_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P0_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P0_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P0_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P0_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P0_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P0_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P0_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P0_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P0_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P0_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P0_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P0_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P0_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P0_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P0_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P0_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 840;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P0_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P0_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P0_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P0_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P0_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P0_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P0_44", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P0_45", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4000;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P0_46", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P0_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4600;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P0_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P0_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4400;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P0_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4400;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P0_51", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P0_52", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P0_53", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 47:
		StringCopy(&Var2, "OUTFIT_P0_54", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 48:
		StringCopy(&Var2, "OUTFIT_P0_55", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 49:
		StringCopy(&Var2, "OUTFIT_P0_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 53); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1DA07
void func_209(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "JBIB_P0_02_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "JBIB_P0_02_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 4:
		StringCopy(&Var2, "JBIB_P0_02_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 5:
		StringCopy(&Var2, "JBIB_P0_02_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 6:
		StringCopy(&Var2, "JBIB_P0_02_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		break;

	case 7:
		StringCopy(&Var2, "JBIB_P0_02_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		break;

	case 8:
		StringCopy(&Var2, "JBIB_P0_03_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 9:
		StringCopy(&Var2, "JBIB_P0_03_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 10:
		StringCopy(&Var2, "JBIB_P0_03_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 420;
		break;

	case 11:
		StringCopy(&Var2, "JBIB_P0_03_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 420;
		break;

	case 12:
		StringCopy(&Var2, "JBIB_P0_03_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 490;
		break;

	case 13:
		StringCopy(&Var2, "JBIB_P0_03_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 490;
		break;

	case 14:
		StringCopy(&Var2, "JBIB_P0_03_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 540;
		break;

	case 15:
		StringCopy(&Var2, "JBIB_P0_03_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 540;
		break;

	case 16:
		StringCopy(&Var2, "JBIB_P0_03_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 550;
		break;

	case 17:
		StringCopy(&Var2, "JBIB_P0_03_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 540;
		break;

	case 18:
		StringCopy(&Var2, "JBIB_P0_04_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 19:
		StringCopy(&Var2, "JBIB_P0_04_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 850;
		break;

	case 20:
		StringCopy(&Var2, "JBIB_P0_04_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 890;
		break;

	case 21:
		StringCopy(&Var2, "JBIB_P0_04_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 22:
		StringCopy(&Var2, "JBIB_P0_04_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 920;
		break;

	case 23:
		StringCopy(&Var2, "JBIB_P0_04_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 920;
		break;

	case 24:
		StringCopy(&Var2, "JBIB_P0_04_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 950;
		break;

	case 25:
		StringCopy(&Var2, "JBIB_P0_04_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 980;
		break;

	case 26:
		StringCopy(&Var2, "JBIB_P0_04_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 1050;
		break;

	case 27:
		StringCopy(&Var2, "JBIB_P0_04_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 1100;
		break;

	case 28:
		StringCopy(&Var2, "JBIB_P0_05_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 1890;
		break;

	case 29:
		StringCopy(&Var2, "JBIB_P0_05_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 1820;
		break;

	case 30:
		StringCopy(&Var2, "JBIB_P0_05_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 1820;
		break;

	case 31:
		StringCopy(&Var2, "JBIB_P0_05_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 1850;
		break;

	case 32:
		StringCopy(&Var2, "JBIB_P0_05_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 1850;
		break;

	case 33:
		StringCopy(&Var2, "JBIB_P0_05_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 1900;
		break;

	case 34:
		StringCopy(&Var2, "JBIB_P0_05_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 1920;
		break;

	case 35:
		StringCopy(&Var2, "JBIB_P0_05_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 1980;
		break;

	case 36:
		StringCopy(&Var2, "JBIB_P0_05_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 2100;
		break;

	case 37:
		StringCopy(&Var2, "JBIB_P0_05_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 2120;
		break;

	case 38:
		StringCopy(&Var2, "JBIB_P0_05_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 2000;
		break;

	case 39:
		StringCopy(&Var2, "JBIB_P0_05_11", 16);
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 2200;
		break;

	case 40:
		StringCopy(&Var2, "JBIB_P0_05_12", 16);
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 2280;
		break;

	case 41:
		StringCopy(&Var2, "JBIB_P0_05_13", 16);
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 2300;
		break;

	case 42:
		StringCopy(&Var2, "JBIB_P0_05_14", 16);
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 2350;
		break;

	case 43:
		StringCopy(&Var2, "JBIB_P0_05_15", 16);
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 2280;
		break;

	case 44:
		StringCopy(&Var2, "JBIB_P0_06_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 45); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1DF30
void func_210(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 1); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1DFA3
void func_211(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P0_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P0_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P0_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P0_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 5); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1E072
void func_212(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 5;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 6;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 7;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 5;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 4;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 5;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 6;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 1;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 2;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 3;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 4;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 5;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 6;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 7;
		break;

	case 36:
		StringCopy(&Var2, "DECL_P0_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		break;

	case 37:
		StringCopy(&Var2, "DECL_P0_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		break;

	case 38:
		StringCopy(&Var2, "DECL_P0_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		break;

	case 39:
		StringCopy(&Var2, "DECL_P0_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		break;

	case 40:
		StringCopy(&Var2, "DECL_P0_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		break;

	case 41:
		StringCopy(&Var2, "DECL_P0_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		break;

	case 42:
		StringCopy(&Var2, "DECL_P0_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		break;

	case 43:
		StringCopy(&Var2, "DECL_P0_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		break;

	default: func_169(iVar10, iParam0, 48); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1E549
void func_213(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 11:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 12:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 13:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 14:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_169(iVar10, iParam0, 20); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1E7B1
void func_214(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "SPEC_P0_10", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "SPEC_P0_16", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_169(iVar10, iParam0, 24); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1EA86
void func_215(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_169(iVar10, iParam0, 14); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1EC4E
void func_216(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P0_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 665;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 620;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 540;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 580;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 650;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P0_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P0_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P0_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 64;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P0_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 56;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P0_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 69;
		break;

	case 24:
		StringCopy(&Var2, "FEET_P0_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 59;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P0_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 62;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P0_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 74;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P0_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P0_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 72;
		break;

	case 29:
		StringCopy(&Var2, "FEET_P0_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 70;
		break;

	case 30:
		StringCopy(&Var2, "FEET_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 48;
		break;

	case 31:
		StringCopy(&Var2, "FEET_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 32:
		StringCopy(&Var2, "FEET_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 55;
		break;

	case 33:
		StringCopy(&Var2, "FEET_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 75;
		break;

	case 34:
		StringCopy(&Var2, "FEET_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 35:
		StringCopy(&Var2, "FEET_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 68;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P0_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P0_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P0_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P0_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P0_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P0_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P0_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P0_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P0_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P0_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P0_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P0_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P0_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P0_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P0_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P0_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P0_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P0_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P0_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P0_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P0_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P0_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P0_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P0_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P0_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P0_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P0_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P0_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P0_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P0_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P0_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P0_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 73:
		StringCopy(&Var2, "FEET_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P0_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P0_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P0_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P0_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P0_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P0_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P0_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P0_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P0_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P0_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 84:
		StringCopy(&Var2, "FEET_P0_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 85:
		StringCopy(&Var2, "FEET_P0_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 86:
		StringCopy(&Var2, "FEET_P0_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 110;
		break;

	case 87:
		StringCopy(&Var2, "FEET_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 720;
		break;

	case 88:
		StringCopy(&Var2, "FEET_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 89:
		StringCopy(&Var2, "FEET_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 90:
		StringCopy(&Var2, "FEET_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 91:
		StringCopy(&Var2, "FEET_P0_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 92:
		StringCopy(&Var2, "FEET_P0_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 93:
		StringCopy(&Var2, "FEET_P0_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 94:
		StringCopy(&Var2, "FEET_P0_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 95:
		StringCopy(&Var2, "FEET_P0_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 96:
		StringCopy(&Var2, "FEET_P0_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 97:
		StringCopy(&Var2, "FEET_P0_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 98:
		StringCopy(&Var2, "FEET_P0_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 700;
		break;

	default: func_169(iVar10, iParam0, 99); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1F7A1
void func_217(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "LEGS_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "LEGS_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "LEGS_P0_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "LEGS_P0_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "LEGS_P0_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "LEGS_P0_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	case 10:
		StringCopy(&Var2, "LEGS_P0_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		break;

	case 11:
		StringCopy(&Var2, "LEGS_P0_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		break;

	case 12:
		StringCopy(&Var2, "LEGS_P0_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		break;

	case 13:
		StringCopy(&Var2, "LEGS_P0_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "LEGS_P0_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		break;

	case 15:
		StringCopy(&Var2, "LEGS_P0_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "LEGS_P0_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P0_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P0_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 128;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P0_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 118;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P0_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P0_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P0_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 128;
		break;

	case 30:
		StringCopy(&Var2, "LEGS_P0_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 125;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P0_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 68;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P0_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 68;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P0_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 68;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P0_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 68;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P0_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 68;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P0_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P0_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 550;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P0_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P0_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 875;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P0_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P0_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 720;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P0_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 750;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P0_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 850;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 38;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 38;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 42;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 46;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P0_16_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar1 = 46;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P0_16_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar1 = 46;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P0_16_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar1 = 68;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P0_16_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar1 = 58;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P0_16_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P0_16_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		iVar1 = 68;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P0_16_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		iVar1 = 68;
		break;

	case 70:
		StringCopy(&Var2, "LEGS_P0_16_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		iVar1 = 42;
		break;

	case 71:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P0_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P0_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 250;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P0_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 250;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P0_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 290;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P0_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 270;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P0_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 270;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P0_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 15;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P0_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 12;
		break;

	case 80:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 118;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 95;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 98;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P0_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 140;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P0_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P0_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P0_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 130;
		break;

	case 92:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 93:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "LEGS_P0_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		break;

	case 96:
		StringCopy(&Var2, "LEGS_P0_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 97:
		StringCopy(&Var2, "LEGS_P0_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 98:
		StringCopy(&Var2, "LEGS_P0_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 99:
		StringCopy(&Var2, "LEGS_P0_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 52;
		break;

	case 100:
		StringCopy(&Var2, "LEGS_P0_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 52;
		break;

	case 101:
		StringCopy(&Var2, "LEGS_P0_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 55;
		break;

	case 102:
		StringCopy(&Var2, "LEGS_P0_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 55;
		break;

	case 103:
		StringCopy(&Var2, "LEGS_P0_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 104:
		StringCopy(&Var2, "LEGS_P0_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 58;
		break;

	case 105:
		StringCopy(&Var2, "LEGS_P0_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 58;
		break;

	case 106:
		StringCopy(&Var2, "LEGS_P0_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 60;
		break;

	case 107:
		StringCopy(&Var2, "LEGS_P0_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 108:
		StringCopy(&Var2, "LEGS_P0_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 62;
		break;

	case 109:
		StringCopy(&Var2, "LEGS_P0_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 62;
		break;

	case 110:
		StringCopy(&Var2, "LEGS_P0_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 65;
		break;

	case 111:
		StringCopy(&Var2, "LEGS_P0_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 65;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 29;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 113); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x203ED
void func_218(int iParam0) {
	if (iParam0 < 60) {
		func_220(iParam0);
	}
	else {
		func_219(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_169(3, iParam0, 181);
	}
}

// Position - 0x20421
void func_219(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 64:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 66:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 67:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "TORSO_P0_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P0_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 120;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P0_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P0_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 120;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P0_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 120;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P0_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 76:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 20;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 24;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 25;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P0_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P0_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P0_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P0_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 48;
		break;

	case 89:
		StringCopy(&Var2, "TORSO_P0_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 90:
		StringCopy(&Var2, "TORSO_P0_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 45;
		break;

	case 91:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P0_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P0_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 190;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P0_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 190;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P0_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 190;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P0_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 210;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 55;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P0_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P0_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 99;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P0_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 49;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P0_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P0_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P0_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P0_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 107:
		StringCopy(&Var2, "TORSO_P0_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 90;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P0_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 95;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P0_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 39;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P0_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 95;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P0_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 35;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P0_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 95;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 70;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P0_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 90;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P0_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P0_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P0_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P0_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 105;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P0_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 95;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P0_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 110;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P0_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 98;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P0_21_12", 16);
		iVar6 = 21;
		iVar7 = 12;
		iVar1 = 88;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P0_21_13", 16);
		iVar6 = 21;
		iVar7 = 13;
		iVar1 = 98;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P0_21_14", 16);
		iVar6 = 21;
		iVar7 = 14;
		iVar1 = 110;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P0_21_15", 16);
		iVar6 = 21;
		iVar7 = 15;
		iVar1 = 98;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P0_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P0_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 4950;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P0_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 4195;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P0_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 3195;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P0_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 2950;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P0_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 3950;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P0_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 3200;
		break;

	case 136:
		StringCopy(&Var2, "TORSO_P0_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 3200;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P0_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 3200;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P0_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 3200;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P0_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 3200;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P0_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar1 = 3200;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P0_23_6", 16);
		iVar6 = 23;
		iVar7 = 6;
		iVar1 = 3200;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P0_23_7", 16);
		iVar6 = 23;
		iVar7 = 7;
		iVar1 = 3200;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P0_23_8", 16);
		iVar6 = 23;
		iVar7 = 8;
		iVar1 = 3200;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P0_23_9", 16);
		iVar6 = 23;
		iVar7 = 9;
		iVar1 = 3200;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P0_23_10", 16);
		iVar6 = 23;
		iVar7 = 10;
		iVar1 = 3200;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P0_23_11", 16);
		iVar6 = 23;
		iVar7 = 11;
		iVar1 = 3200;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P0_23_12", 16);
		iVar6 = 23;
		iVar7 = 12;
		iVar1 = 3200;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P0_23_13", 16);
		iVar6 = 23;
		iVar7 = 13;
		iVar1 = 3200;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P0_23_14", 16);
		iVar6 = 23;
		iVar7 = 14;
		iVar1 = 3200;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P0_23_15", 16);
		iVar6 = 23;
		iVar7 = 15;
		iVar1 = 3200;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P0_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 1350;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P0_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 1400;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P0_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 1200;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P0_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 1250;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P0_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 1350;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P0_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 1300;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P0_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 1380;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P0_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 1340;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P0_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 1380;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P0_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 1250;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P0_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar1 = 840;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P0_25_1", 16);
		iVar6 = 25;
		iVar7 = 1;
		iVar1 = 840;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P0_25_2", 16);
		iVar6 = 25;
		iVar7 = 2;
		iVar1 = 840;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P0_25_3", 16);
		iVar6 = 25;
		iVar7 = 3;
		iVar1 = 840;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P0_25_4", 16);
		iVar6 = 25;
		iVar7 = 4;
		iVar1 = 840;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P0_25_5", 16);
		iVar6 = 25;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P0_25_6", 16);
		iVar6 = 25;
		iVar7 = 6;
		iVar1 = 840;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P0_25_7", 16);
		iVar6 = 25;
		iVar7 = 7;
		iVar1 = 840;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P0_26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 170:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P0_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P0_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 130;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P0_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P0_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P0_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P0_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 320;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P0_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		iVar1 = 59;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P0_31_1", 16);
		iVar6 = 31;
		iVar7 = 1;
		iVar1 = 55;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P0_31_2", 16);
		iVar6 = 31;
		iVar7 = 2;
		iVar1 = 59;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P0_31_3", 16);
		iVar6 = 31;
		iVar7 = 3;
		iVar1 = 49;
		break;

	default: return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x211C1
void func_220(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 3500;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P0_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P0_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P0_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P0_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P0_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P0_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P0_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P0_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P0_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P0_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 20;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 18;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 22;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 25;
		break;

	case 21:
		StringCopy(&Var2, "TORSO_P0_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 19;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P0_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 20;
		break;

	case 23:
		StringCopy(&Var2, "TORSO_P0_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P0_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 18;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P0_2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 39;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P0_2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 32;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P0_2_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P0_2_11", 16);
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P0_2_12", 16);
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 210;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P0_2_13", 16);
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 250;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P0_2_14", 16);
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 290;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P0_2_15", 16);
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 310;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P0_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P0_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 40:
		StringCopy(&Var2, "TORSO_P0_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P0_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P0_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 43:
		StringCopy(&Var2, "TORSO_P0_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 160;
		break;

	case 44:
		StringCopy(&Var2, "TORSO_P0_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "TORSO_P0_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 52;
		break;

	case 46:
		StringCopy(&Var2, "TORSO_P0_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 52;
		break;

	case 47:
		StringCopy(&Var2, "TORSO_P0_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 55;
		break;

	case 48:
		StringCopy(&Var2, "TORSO_P0_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 55;
		break;

	case 49:
		StringCopy(&Var2, "TORSO_P0_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 58;
		break;

	case 50:
		StringCopy(&Var2, "TORSO_P0_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 51:
		StringCopy(&Var2, "TORSO_P0_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 62;
		break;

	case 52:
		StringCopy(&Var2, "TORSO_P0_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 65;
		break;

	case 53:
		StringCopy(&Var2, "TORSO_P0_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 65;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P0_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 68;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P0_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 68;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P0_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 55;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P0_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 62;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P0_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 58;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P0_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 58;
		break;

	default: return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x2184D
void func_221(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P0_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P0_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P0_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P0_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	default: func_169(iVar10, iParam0, 6); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x21933
void func_222(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	default: func_169(iVar10, iParam0, 7); return;
	}
	func_163(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x21A30
void func_223() {
	Global_69523[0 /*14*/].f_1 = -1;
	Global_69523[0 /*14*/].f_2 = -1;
	Global_69523[0 /*14*/].f_5 = -1;
	Global_69523[0 /*14*/].f_3 = -1;
	Global_69523[0 /*14*/].f_4 = -1;
	Global_69523[0 /*14*/].f_7 = 0;
	Global_69523[0 /*14*/].f_6 = 0;
	Global_69523[0 /*14*/].f_13 = -1;
	Global_69523[0 /*14*/].f_12 = 0;
	Global_69523[0 /*14*/] = 0;
	StringCopy(&Global_69523[0 /*14*/].f_8, "NO_LABEL", 16);
}

// Position - 0x21AA9
bool func_224(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var *uVar5;
	var uVar22;
	int iVar32;
	var uVar33;

	if (ped::is_ped_injured(iParam0)) {
		return false;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_160(iVar0, iParam1, iParam2)};
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return false;
	}
	if (iParam1 == 12) {
		uVar5 = {func_156(iVar0, iParam2)};
		iVar2 = 0;
		while (iVar2 <= 14) {
			if (uVar5[iVar2] != -99 && iVar2 != 12 && iVar2 != 14) {
				if (!func_224(iParam0, iVar2, uVar5[iVar2])) {
					if (iVar2 == 13) {
						uVar22 = {func_153(iVar0, uVar5[iVar2])};
						iVar3 = 0;
						while (iVar3 <= 8) {
							if (!func_224(iParam0, 14, uVar22[iVar3])) {
								iVar4 = 0;
								while (iVar4 <= 19) {
									Global_69523[2 /*14*/] = {func_160(iVar0, 14, iVar4)};
									if (Global_69523[2 /*14*/].f_12 == iVar3) {
										if (func_224(iParam0, 14, iVar4)) {
											if (!func_116(iVar0, iParam2, 14, iVar4, &uVar5, &Global_69523[2 /*14*/])) {
												return false;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else {
						iVar1 = func_141(iParam0, iVar2);
						Global_69523[2 /*14*/] = {func_160(iVar0, iVar2, iVar1)};
						if (!func_116(iVar0, iParam2, iVar2, iVar1, &uVar5, &Global_69523[2 /*14*/])) {
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13) {
		uVar33 = {func_153(iVar0, iParam2)};
		iVar32 = 0;
		while (iVar32 <= 8) {
			if (!func_224(iParam0, 14, uVar33[iVar32])) {
				return false;
			}
			iVar32++;
		}
		return true;
	}
	else if (iParam1 == 14) {
		if (ped::get_ped_prop_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_3 &&
			(ped::get_ped_prop_texture_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_4 ||
			 Global_69523[1 /*14*/].f_3 == -1)) {
			return true;
		}
	}
	else if (Global_69523[1 /*14*/].f_3 == ped::get_ped_drawable_variation(iParam0, func_152(iParam1)) &&
			 Global_69523[1 /*14*/].f_4 == ped::get_ped_texture_variation(iParam0, func_152(iParam1))) {
		return true;
	}
	return false;
}

// Position - 0x21D01
void func_225(char *sParam0, int iParam1) {
	stats::stat_set_gxt_label(joaat("sp_last_mission_name"), sParam0, 1);
	if (gameplay::is_bit_set(iParam1, 0)) {
		stats::stat_set_gxt_label(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (gameplay::is_bit_set(iParam1, 1)) {
		stats::stat_set_gxt_label(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (gameplay::is_bit_set(iParam1, 2)) {
		stats::stat_set_gxt_label(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

// Position - 0x21D5B
int func_226() {
	func_70();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x21DA1
struct<2> func_227(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_228(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x21DD8
struct<2>
func_228(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0) {
	case 0: StringCopy(&Var0, "ABI1", 8); break;

	case 1: StringCopy(&Var0, "ABI2", 8); break;

	case 2: StringCopy(&Var0, "BA1", 8); break;

	case 3: StringCopy(&Var0, "BA2", 8); break;

	case 4: StringCopy(&Var0, "BA3", 8); break;

	case 5: StringCopy(&Var0, "BA3A", 8); break;

	case 6: StringCopy(&Var0, "BA3C", 8); break;

	case 7: StringCopy(&Var0, "BA4", 8); break;

	case 8: StringCopy(&Var0, "DRE1", 8); break;

	case 9: StringCopy(&Var0, "EPS1", 8); break;

	case 10: StringCopy(&Var0, "EPS2", 8); break;

	case 11: StringCopy(&Var0, "EPS3", 8); break;

	case 12: StringCopy(&Var0, "EPS4", 8); break;

	case 13: StringCopy(&Var0, "EPS5", 8); break;

	case 14: StringCopy(&Var0, "EPS6", 8); break;

	case 15: StringCopy(&Var0, "EPS7", 8); break;

	case 16: StringCopy(&Var0, "EPS8", 8); break;

	case 17: StringCopy(&Var0, "EXT1", 8); break;

	case 18: StringCopy(&Var0, "EXT2", 8); break;

	case 19: StringCopy(&Var0, "EXT3", 8); break;

	case 20: StringCopy(&Var0, "EXT4", 8); break;

	case 21: StringCopy(&Var0, "FAN1", 8); break;

	case 22: StringCopy(&Var0, "FAN2", 8); break;

	case 23: StringCopy(&Var0, "FAN3", 8); break;

	case 24: StringCopy(&Var0, "HAO1", 8); break;

	case 25: StringCopy(&Var0, "HUN1", 8); break;

	case 26: StringCopy(&Var0, "HUN2", 8); break;

	case 27: StringCopy(&Var0, "JOS1", 8); break;

	case 28: StringCopy(&Var0, "JOS2", 8); break;

	case 29: StringCopy(&Var0, "JOS3", 8); break;

	case 30: StringCopy(&Var0, "JOS4", 8); break;

	case 31: StringCopy(&Var0, "MAU1", 8); break;

	case 32: StringCopy(&Var0, "MIN1", 8); break;

	case 33: StringCopy(&Var0, "MIN2", 8); break;

	case 34: StringCopy(&Var0, "MIN3", 8); break;

	case 35: StringCopy(&Var0, "MRS1", 8); break;

	case 36: StringCopy(&Var0, "MRS2", 8); break;

	case 37: StringCopy(&Var0, "NI1", 8); break;

	case 38: StringCopy(&Var0, "NI1A", 8); break;

	case 39: StringCopy(&Var0, "NI1B", 8); break;

	case 40: StringCopy(&Var0, "NI1C", 8); break;

	case 41: StringCopy(&Var0, "NI1D", 8); break;

	case 42: StringCopy(&Var0, "NI2", 8); break;

	case 43: StringCopy(&Var0, "NI3", 8); break;

	case 44: StringCopy(&Var0, "OME1", 8); break;

	case 45: StringCopy(&Var0, "OME2", 8); break;

	case 46: StringCopy(&Var0, "PA1", 8); break;

	case 47: StringCopy(&Var0, "PA2", 8); break;

	case 48: StringCopy(&Var0, "PA3", 8); break;

	case 49: StringCopy(&Var0, "PA3A", 8); break;

	case 50: StringCopy(&Var0, "PA3B", 8); break;

	case 51: StringCopy(&Var0, "PA4", 8); break;

	case 52: StringCopy(&Var0, "RAM1", 8); break;

	case 53: StringCopy(&Var0, "RAM2", 8); break;

	case 54: StringCopy(&Var0, "RAM3", 8); break;

	case 55: StringCopy(&Var0, "RAM4", 8); break;

	case 56: StringCopy(&Var0, "RAM5", 8); break;

	case 57: StringCopy(&Var0, "SAS1", 8); break;

	case 58: StringCopy(&Var0, "TON1", 8); break;

	case 59: StringCopy(&Var0, "TON2", 8); break;

	case 60: StringCopy(&Var0, "TON3", 8); break;

	case 61: StringCopy(&Var0, "TON4", 8); break;

	case 62: StringCopy(&Var0, "TON5", 8); break;

	default: break;
	}
	return Var0;
}

//Position - 0x22224
void func_229(int iParam0, int iParam1)
{
	Global_69970 = iParam1;
	if (Global_55816) {
		return;
	}
	if (Global_55843) {
		Global_55843 = 0;
		return;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) > 0) {
		if (Global_55816) {
		}
		Global_55842 = iParam0;
		Global_55816 = 1;
		Global_55827 = 1;
	}
}

// Position - 0x2226E
void func_230(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		ped::set_ped_config_flag(player::player_ped_id(), 32, 1);
		ped::set_ped_config_flag(player::player_ped_id(), 250, 1);
	}
	player::set_player_control(player::player_id(), 1, 0);
	player::set_wanted_level_multiplier(1f);
	player::set_max_wanted_level(5);
	player::set_all_random_peds_flee(player::player_id(), 0);
	player::set_player_weapon_damage_modifier(player::player_id(), 1f);
	player::set_player_weapon_defense_modifier(player::player_id(), 1f);
	ui::display_hud(1);
	ui::display_radar(1);
	cam::set_widescreen_borders(0, 0);
	gameplay::set_time_scale(1f);
	func_241();
	func_240(1, 1);
	func_239();
	func_237();
	func_236(30000);
	if (iParam1 == 1) {
		func_231(iParam0, iParam2, iParam3);
	}
	ui::set_mission_name(0, 0);
}

// Position - 0x2230B
void func_231(int iParam0, int iParam1, int iParam2) {
	struct<4> Var0;
	char *sVar32;

	if (iParam0 != -1) {
		func_233(iParam0, &Var0);
		MemCopy(&sVar32, {func_228(iParam0)}, 4);
		stats::playstats_mission_checkpoint(&sVar32, 0, Global_91528, 0);
		func_232(&sVar32, Var0.f_3, Global_91528, iParam1, iParam2);
	}
}

// Position - 0x2234A
void func_232(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (gameplay::is_string_null_or_empty(&Global_88894)) {
		return;
	}
	if (gameplay::compare_strings(sParam0, &Global_88894, 0, -1) != 0) {
		return;
	}
	stats::playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_86001);
	StringCopy(&Global_88894, "", 64);
}

// Position - 0x2238E
void func_233(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_234(uParam1, "Abigail1", func_227(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_235(iParam0), 1, 0);
		break;

	case 1:
		func_234(uParam1, "Abigail2", func_227(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_235(iParam0), 1, 0);
		break;

	case 2:
		func_234(uParam1, "Barry1", func_227(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_235(iParam0), 1, 0);
		break;

	case 3:
		func_234(uParam1, "Barry2", func_227(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_235(iParam0), 1, 1);
		break;

	case 4:
		func_234(uParam1, "Barry3", func_227(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 5:
		func_234(uParam1, "Barry3A", func_227(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 6:
		func_234(uParam1, "Barry3C", func_227(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 7:
		func_234(uParam1, "Barry4", func_227(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_235(iParam0), 0, 0);
		break;

	case 8:
		func_234(uParam1, "Dreyfuss1", func_227(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 9:
		func_234(uParam1, "Epsilon1", func_227(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 10:
		func_234(uParam1, "Epsilon2", func_227(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_235(iParam0), 1, 0);
		break;

	case 11:
		func_234(uParam1, "Epsilon3", func_227(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 12:
		func_234(uParam1, "Epsilon4", func_227(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 13:
		func_234(uParam1, "Epsilon5", func_227(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_235(iParam0), 1, 0);
		break;

	case 14:
		func_234(uParam1, "Epsilon6", func_227(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 15:
		func_234(uParam1, "Epsilon7", func_227(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 16:
		func_234(uParam1, "Epsilon8", func_227(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_235(iParam0), 1, 0);
		break;

	case 17:
		func_234(uParam1, "Extreme1", func_227(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 18:
		func_234(uParam1, "Extreme2", func_227(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 19:
		func_234(uParam1, "Extreme3", func_227(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 20:
		func_234(uParam1, "Extreme4", func_227(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 21:
		func_234(uParam1, "Fanatic1", func_227(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_235(iParam0), 1, 0);
		break;

	case 22:
		func_234(uParam1, "Fanatic2", func_227(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_235(iParam0), 1, 0);
		break;

	case 23:
		func_234(uParam1, "Fanatic3", func_227(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_235(iParam0), 0, 1);
		break;

	case 24:
		func_234(uParam1, "Hao1", func_227(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_235(iParam0), 0, 1);
		break;

	case 25:
		func_234(uParam1, "Hunting1", func_227(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 26:
		func_234(uParam1, "Hunting2", func_227(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 27:
		func_234(uParam1, "Josh1", func_227(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_235(iParam0), 1, 0);
		break;

	case 28:
		func_234(uParam1, "Josh2", func_227(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_235(iParam0), 1, 1);
		break;

	case 29:
		func_234(uParam1, "Josh3", func_227(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_235(iParam0), 1, 1);
		break;

	case 30:
		func_234(uParam1, "Josh4", func_227(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_235(iParam0), 1, 0);
		break;

	case 31:
		func_234(uParam1, "Maude1", func_227(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 32:
		func_234(uParam1, "Minute1", func_227(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 33:
		func_234(uParam1, "Minute2", func_227(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 34:
		func_234(uParam1, "Minute3", func_227(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 35:
		func_234(uParam1, "MrsPhilips1", func_227(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 36:
		func_234(uParam1, "MrsPhilips2", func_227(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_235(iParam0), 0, 0);
		break;

	case 37:
		func_234(uParam1, "Nigel1", func_227(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_235(iParam0), 1, 0);
		break;

	case 38:
		func_234(uParam1, "Nigel1A", func_227(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_235(iParam0), 1, 1);
		break;

	case 39:
		func_234(uParam1, "Nigel1B", func_227(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_235(iParam0), 1, 1);
		break;

	case 40:
		func_234(uParam1, "Nigel1C", func_227(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_235(iParam0), 1, 1);
		break;

	case 41:
		func_234(uParam1, "Nigel1D", func_227(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_235(iParam0), 1, 1);
		break;

	case 42:
		func_234(uParam1, "Nigel2", func_227(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_235(iParam0), 1, 1);
		break;

	case 43:
		func_234(uParam1, "Nigel3", func_227(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_235(iParam0), 1, 1);
		break;

	case 44:
		func_234(uParam1, "Omega1", func_227(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 45:
		func_234(uParam1, "Omega2", func_227(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 46:
		func_234(uParam1, "Paparazzo1", func_227(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 47:
		func_234(uParam1, "Paparazzo2", func_227(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 48:
		func_234(uParam1, "Paparazzo3", func_227(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 49:
		func_234(uParam1, "Paparazzo3A", func_227(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 50:
		func_234(uParam1, "Paparazzo3B", func_227(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 51:
		func_234(uParam1, "Paparazzo4", func_227(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 52:
		func_234(uParam1, "Rampage1", func_227(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 54:
		func_234(uParam1, "Rampage3", func_227(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_235(iParam0), 1, 0);
		break;

	case 55:
		func_234(uParam1, "Rampage4", func_227(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_235(iParam0), 1, 0);
		break;

	case 56:
		func_234(uParam1, "Rampage5", func_227(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_235(iParam0), 0, 0);
		break;

	case 53:
		func_234(uParam1, "Rampage2", func_227(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_235(iParam0), 1, 0);
		break;

	case 57:
		func_234(uParam1, "TheLastOne", func_227(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 58:
		func_234(uParam1, "Tonya1", func_227(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 59:
		func_234(uParam1, "Tonya2", func_227(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	case 60:
		func_234(uParam1, "Tonya3", func_227(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_235(iParam0), 0, 1);
		break;

	case 61:
		func_234(uParam1, "Tonya4", func_227(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_235(iParam0), 0, 1);
		break;

	case 62:
		func_234(uParam1, "Tonya5", func_227(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_235(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x23543
void func_234(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
			  int iParam10, char *sParam11, int iParam12, int iParam13, char *sParam14, int iParam15, int iParam16,
			  int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23,
			  int iParam24) {
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = {Param2};
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = {vParam7};
	uParam0->f_9 = iParam10;
	StringCopy(&uParam0->f_10, sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&uParam0->f_16, sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

// Position - 0x235D4
int func_235(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 0;

	case 2: return 1;

	case 3: return 1;

	case 4: return 0;

	case 5: return 1;

	case 6: return 1;

	case 7: return 0;

	case 8: return 1;

	case 9: return 0;

	case 10: return 0;

	case 11: return 0;

	case 12: return 1;

	case 13: return 0;

	case 14: return 1;

	case 15: return 0;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 1;

	case 23: return 1;

	case 24: return 1;

	case 25: return 1;

	case 26: return 1;

	case 27: return 0;

	case 28: return 1;

	case 29: return 1;

	case 30: return 1;

	case 31: return 0;

	case 32: return 1;

	case 33: return 1;

	case 34: return 1;

	case 35: return 0;

	case 36: return 0;

	case 37: return 0;

	case 38: return 1;

	case 39: return 1;

	case 40: return 1;

	case 41: return 1;

	case 42: return 1;

	case 43: return 1;

	case 44: return 0;

	case 45: return 0;

	case 46: return 1;

	case 47: return 1;

	case 48: return 0;

	case 49: return 1;

	case 50: return 1;

	case 51: return 1;

	case 52: return 1;

	case 54: return 1;

	case 55: return 1;

	case 56: return 1;

	case 53: return 1;

	case 57: return 1;

	case 58: return 1;

	case 59: return 1;

	case 60: return 1;

	case 61: return 1;

	case 62: return 1;

	default: break;
	}
	return 0;
}

// Position - 0x2391A
void func_236(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0x2392C
void func_237() {
	if (Global_89136) {
		func_70();
		graphics::_0xBF59707B3E5ED531(func_238(Global_101700.f_2095.f_539.f_3549));
	}
	else {
		graphics::_0xBF59707B3E5ED531("");
	}
}

// Position - 0x2395E
char *func_238(var uParam0) {
	uParam0 = uParam0;
	return "";
}

// Position - 0x2396D
void func_239() {
	vector3 vVar0[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		network::network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		network::_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

// Position - 0x239B0
void func_240(int iParam0, int iParam1) {
	Global_89131 = iParam0;
	Global_89132 = iParam1;
}

// Position - 0x239C4
void func_241() {
	if (Global_69956 != 6) {
	}
	if (Global_69961) {
		ui::reset_hud_component_values(15);
		Global_69961 = 0;
		Global_17290.f_7899 = 0;
	}
	Global_69956 = 6;
	Global_69958 = -1;
	Global_69957 = -1;
}

// Position - 0x239FC
void func_242(int *iParam0) {
	if (*iParam0 == -1) {
		return;
	}
	if (*iParam0 != Global_35743) {
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35742 = 0;
	Global_35744 = 0;
	Global_35781 = 15;
	Global_55819 = 0;
	Global_55820 = 0;
}

// Position - 0x23A39
void func_243(int iParam0, int iParam1) {
	struct<26> Var0;
	int iVar32;
	bool bVar33;
	int iVar34;
	struct<6> Var35;
	int iVar67;
	int iVar68;
	struct<6> Var69;
	int iVar101;
	int iVar102;

	func_233(iParam0, &Var0);
	if (!gameplay::are_strings_equal(&Var0.f_16, "")) {
		while (!func_271(&Var0.f_16)) {
			system::wait(0);
		}
	}
	if (Var0.f_22 != 0) {
		func_270(Var0.f_22, 0);
	}
	func_261(iParam0, Global_69971);
	if (!iParam1) {
		iVar32 = func_260(iParam0);
		if (iVar32 != 0) {
			if (!audio::get_number_of_passenger_voice_variations(iVar32)) {
				audio::unlock_mission_news_story(iVar32);
			}
		}
	}
	if (Var0.f_24 != -1) {
		bVar33 = true;
		if (Var0.f_5 != 4) {
			iVar34 = 0;
			while (iVar34 < 63) {
				iVar67 = iVar34;
				if (iVar67 != iParam0) {
					func_233(iVar67, &Var35);
					if (Var35.f_5 == Var0.f_5) {
						if (!gameplay::is_bit_set(Global_101700.f_17533[iVar67 /*6*/], 3)) {
							bVar33 = false;
						}
						if (!gameplay::is_bit_set(Global_101700.f_17533[iVar67 /*6*/], 0)) {
							func_248(iVar67);
						}
					}
				}
				iVar34++;
			}
		}
		if (bVar33) {
			func_248(Var0.f_24);
		}
	}
	else if (Var0.f_25 != 4) {
		iVar68 = 0;
		while (iVar68 < 63) {
			iVar101 = iVar68;
			if (iVar101 != iParam0) {
				func_233(iVar101, &Var69);
				if (Var69.f_5 == Var0.f_25) {
					func_248(iVar101);
				}
			}
			iVar68++;
		}
	}
	if (!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3)) {
		gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 3);
		Global_100787[iParam0 /*10*/].f_5 = 1;
		func_245(iParam0);
		iVar102 = func_244(iParam0);
		if (iVar102 != 322) {
			func_84(iVar102, 0, 0);
		}
	}
}

// Position - 0x23BBF
int func_244(int iParam0) {
	switch (iParam0) {
	case 0: return 109;

	case 1: return 322;

	case 2: return 69;

	case 3: return 70;

	case 4: return 322;

	case 5: return 71;

	case 6: return 71;

	case 7: return 72;

	case 8: return 68;

	case 9: return 73;

	case 10: return 74;

	case 11: return 75;

	case 12: return 76;

	case 13: return 77;

	case 14: return 78;

	case 15: return 79;

	case 16: return 80;

	case 17: return 81;

	case 18: return 82;

	case 19: return 83;

	case 20: return 84;

	case 21: return 85;

	case 22: return 86;

	case 23: return 87;

	case 24: return 106;

	case 25: return 178;

	case 26: return 179;

	case 27: return 88;

	case 28: return 89;

	case 29: return 90;

	case 30: return 91;

	case 31: return 107;

	case 32: return 92;

	case 33: return 93;

	case 34: return 94;

	case 35: return 110;

	case 36: return 111;

	case 37: return 95;

	case 38: return 96;

	case 39: return 97;

	case 40: return 98;

	case 41: return 99;

	case 42: return 100;

	case 43: return 101;

	case 44: return 66;

	case 45: return 67;

	case 46: return 102;

	case 47: return 103;

	case 48: return 322;

	case 49: return 104;

	case 50: return 104;

	case 51: return 105;

	case 52: return 194;

	case 53: return 195;

	case 54: return 196;

	case 55: return 197;

	case 56: return 198;

	case 57: return 108;

	case 58: return 208;

	case 59: return 209;

	case 60: return 210;

	case 61: return 211;

	case 62: return 212;
	}
	return 322;
}

// Position - 0x23F46
void func_245(int iParam0) {
	func_247(iParam0, 1);
	Global_101700.f_17533[iParam0 /*6*/].f_3 = func_246();
	Global_101700.f_17533.f_380++;
}

// Position - 0x23F7C
int func_246() { return Global_101700.f_8975.f_21 + Global_101700.f_17533.f_380; }

// Position - 0x23F98
void func_247(var uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 55;
	if (iParam1) {
		iVar1 = uParam0;
		if (iVar1 == 46) {
			iVar0 = 35;
		}
		else if (iVar1 == 49) {
			iVar0 = 36;
		}
		else if (iVar1 == 50) {
			iVar0 = 37;
		}
		else if (iVar1 == 8) {
			iVar0 = 38;
		}
		else if (iVar1 == 16) {
			iVar0 = 39;
		}
		else if (iVar1 == 38) {
			iVar0 = 40;
		}
		else if (iVar1 == 39) {
			iVar0 = 41;
		}
		else if (iVar1 == 40) {
			iVar0 = 42;
		}
		else if (iVar1 == 41) {
			iVar0 = 43;
		}
		else if (iVar1 == 42) {
			iVar0 = 44;
		}
		else if (iVar1 == 43) {
			iVar0 = 45;
		}
		else if (iVar1 == 20) {
			iVar0 = 46;
		}
	}
	else {
		iVar2 = uParam0;
		if (iVar2 == 53) {
			iVar0 = 0;
		}
		else if (iVar2 == 1) {
			iVar0 = 1;
		}
		else if (iVar2 == 2) {
			iVar0 = 2;
		}
		else if (iVar2 == 17) {
			iVar0 = 3;
		}
		else if (iVar2 == 19) {
			iVar0 = 4;
		}
		else if (iVar2 == 43) {
			iVar0 = 5;
		}
		else if (iVar2 == 44) {
			iVar0 = 6;
		}
		else if (iVar2 == 63) {
			iVar0 = 8;
		}
		else if (iVar2 == 12) {
			iVar0 = 9;
		}
		else if (iVar2 == 13) {
			iVar0 = 10;
		}
		else if (iVar2 == 64) {
			iVar0 = 11;
		}
		else if (iVar2 == 20) {
			iVar0 = 12;
		}
		else if (iVar2 == 30) {
			iVar0 = 13;
		}
		else if (iVar2 == 31) {
			iVar0 = 14;
		}
		else if (iVar2 == 41) {
			iVar0 = 15;
		}
		else if (iVar2 == 38) {
			iVar0 = 16;
		}
		else if (iVar2 == 9) {
			iVar0 = 18;
		}
		else if (iVar2 == 59) {
			iVar0 = 19;
		}
		else if (iVar2 == 45) {
			iVar0 = 20;
		}
		else if (iVar2 == 10) {
			iVar0 = 21;
		}
		else if (iVar2 == 14) {
			iVar0 = 22;
		}
		else if (iVar2 == 16) {
			iVar0 = 24;
		}
		else if (iVar2 == 39) {
			iVar0 = 25;
		}
		else if (iVar2 == 46) {
			iVar0 = 26;
		}
		else if (iVar2 == 60) {
			iVar0 = 27;
		}
		else if (iVar2 == 22) {
			iVar0 = 28;
		}
		else if (iVar2 == 48) {
			iVar0 = 30;
		}
		else if (iVar2 == 61) {
			iVar0 = 31;
		}
		else if (iVar2 == 49) {
			iVar0 = 32;
		}
		else if (iVar2 == 27) {
			iVar0 = 34;
		}
		else if (iVar2 == 3) {
			iVar0 = 47;
		}
		else if (iVar2 == 4) {
			iVar0 = 48;
		}
		else if (iVar2 == 5) {
			iVar0 = 49;
		}
		else if (iVar2 == 6) {
			iVar0 = 50;
		}
		else if (iVar2 == 7) {
			iVar0 = 51;
		}
		else if (iVar2 == 58) {
			iVar0 = 53;
		}
		else if (iVar2 == 90) {
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75) {
			iVar0 = 17;
		}
		else if (iVar2 == 93) {
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70) {
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85) {
			iVar0 = 33;
		}
	}
	if (iVar0 != 55) {
		Global_101700.f_19523.f_472 = iVar0;
	}
}

// Position - 0x242BE
void func_248(int iParam0) {
	if (iParam0 == 63 || iParam0 == -1) {
		return;
	}
	func_249(iParam0);
	gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 0);
}

// Position - 0x242F1
void func_249(int iParam0) {
	switch (iParam0) {
	case 30: func_253(22, 1, 0, 1, 0); break;

	case 15: func_250(37, 0); break;

	default: break;
	}
}

// Position - 0x24326
void func_250(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_252(iParam0, 0)) {
			func_251(iParam0, 1, 0);
			func_251(iParam0, 2, 0);
			func_251(iParam0, 3, 0);
			func_251(iParam0, 4, 0);
			func_251(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_251(iParam0, 0, 0);
	}
}

// Position - 0x24383
void func_251(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
}

// Position - 0x243BE
int func_252(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x243E1
void func_253(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (iParam0 != 198) {
		if (Global_69702) {
			Global_2433125.f_74.f_227[iParam0] = iParam1;
		}
		else {
			Global_101700.f_6220.f_227[iParam0] = iParam1;
		}
		Global_32749[iParam0] = iParam2;
		Global_32948[iParam0] = 1;
		func_256(iParam0, iParam3, iParam4, 0);
		func_254(iParam0, iParam1);
	}
}

// Position - 0x2443C
void func_254(int iParam0, int iParam1) {
	switch (iParam0) {
	case 12:
		if (iParam1 == 0) {
			audio::set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
		}
		else {
			audio::set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
		}
		break;

	case 71:
		if (iParam1 != 1) {
			audio::set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 0, 0);
		}
		else {
			audio::set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 1, 0);
		}
		break;

	case 65:
		if (iParam1 == 1) {
			func_255(0, 0);
		}
		else {
			func_255(0, 1);
		}
		break;

	case 6:
		if (iParam1 == 1) {
			audio::set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
		}
		else {
			audio::set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
		}
		break;

	case 174:
		if (iParam1 == 2) {
			audio::_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
		}
		break;

	case 37:
		if (iParam1 == 1) {
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
		}
		break;
	}
}

// Position - 0x24525
void func_255(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&Global_100340, iParam0);
	}
	else {
		gameplay::clear_bit(&Global_100340, iParam0);
	}
	Global_100339 = 1;
}

// Position - 0x2454E
bool func_256(int iParam0, bool bParam1, int iParam2, int iParam3) {
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;

	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_259(&Var3, iParam0);
	if (func_257()) {
		iVar1 = Global_101700.f_6220.f_227[iParam0];
	}
	else {
		iVar1 = Global_2433125.f_74.f_227[iParam0];
	}
	iVar2 = Global_33147[iParam0];
	if (ped::is_ped_injured(player::player_ped_id()) && !iParam3) {
	}
	else {
		bVar99 = true;
		if (gameplay::get_hash_key(script::get_this_script_name()) != gameplay::get_hash_key("standard_global_reg")) {
			if (iParam2 == 0) {
				if (Global_32749[iParam0] &&
					gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0), Var3,
														  1) < 200f) {
					bVar99 = false;
				}
				if (!player::is_player_playing(player::player_id()) ||
					ai::is_ped_being_arrested(player::player_ped_id())) {
					if (!cam::is_screen_faded_out()) {
						bVar99 = false;
					}
				}
			}
		}
		if (streaming::is_new_load_scene_active() &&
			(!streaming::is_player_switch_in_progress() || streaming::get_player_switch_state() != 5)) {
			bVar99 = false;
		}
		if (bVar99) {
			switch (Var3.f_3) {
			case 0:
				if (iVar1 == 2) {
				}
				else {
					if (Var3.f_4[iVar1] != 0) {
						entity::remove_model_hide(Var3, 10f, Var3.f_4[iVar1], 0);
					}
					if (Var3.f_4[iVar2] != 0) {
						entity::create_model_hide(Var3, 10f, Var3.f_4[iVar2], 1);
					}
					Global_34343[iParam0] = 1;
				}
				bVar0 = true;
				break;

			case 1:
				if (iVar1 == 0) {
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_34)) {
							streaming::request_ipl(&Var3.f_34);
						}
					}
				}
				else if (iVar1 == 1) {
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (streaming::is_ipl_active(&Var3.f_34)) {
							streaming::remove_ipl(&Var3.f_34);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
				}
				else if (iVar1 == 2) {
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (streaming::is_ipl_active(&Var3.f_34)) {
							streaming::remove_ipl(&Var3.f_34);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES")) {
						if (!streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
				}
				Global_34144[iParam0] = 1;
				Global_34343[iParam0] = 1;
				bVar0 = true;
				break;

			case 2:
				iVar100 = interior::get_interior_at_coords_with_type(Var3, &Var3.f_42);
				if (iVar100 != 0) {
					if (gameplay::get_hash_key(&Var3.f_50) != gameplay::get_hash_key("")) {
						if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_50)) {
							interior::_disable_interior_prop(iVar100, &Var3.f_50);
						}
					}
					if (iVar1 == 0) {
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) !=
								gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
					}
					else if (iVar1 == 1) {
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) !=
								gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
					}
					else if (iVar1 == 2) {
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
					}
					if (bParam1) {
						interior::refresh_interior(iVar100);
					}
				}
				Global_34343[iParam0] = 1;
				Global_34144[iParam0] = 1;
				bVar0 = true;
				break;

			case 3:
				if (gameplay::get_distance_between_coords(Var3, entity::get_entity_coords(player::player_ped_id(), 0),
														  1) < 250f) {
					uVar98 = object::_get_des_object(Var3, 25f, &Var3.f_8[0 /*8*/]);
					if (object::_does_des_object_exist(uVar98)) {
						if (iVar1 == 0) {
							object::_set_des_object_state(uVar98, 3);
							Global_34343[iParam0] = 1;
							bVar0 = true;
						}
						else if (iVar1 == 1) {
							if (object::_get_des_object_state(uVar98) != 6 &&
								object::_get_des_object_state(uVar98) != 7 &&
								object::_get_des_object_state(uVar98) != 8) {
								object::_set_des_object_state(uVar98, 10);
								Global_34343[iParam0] = 1;
								bVar0 = true;
							}
						}
						else if (iVar1 == 2) {
							bVar0 = true;
						}
					}
				}
				break;

			case 4:
				if (iVar1 == 0) {
					entity::remove_model_swap(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
					gameplay::clear_bit(&Global_32495[iParam0 / 32], iParam0 % 32);
				}
				else if (iVar1 == 1) {
					entity::create_model_swap(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
					gameplay::set_bit(&Global_32495[iParam0 / 32], iParam0 % 32);
				}
				bVar0 = true;
				break;
			}
			if (bVar0) {
				Global_32948[iParam0] = 0;
				Global_33147[iParam0] = iVar1;
				if (!func_257()) {
					if (!Global_33744[iParam0]) {
						Global_33744[iParam0] = 1;
						Global_33943++;
					}
				}
			}
		}
	}
	return bVar0;
}

// Position - 0x24E73
bool func_257() {
	if ((func_86() == -1 || func_86() == 999) && func_258() != 0) {
		return true;
	}
	return false;
}

// Position - 0x24EA3
int func_258() { return Global_25191; }

// Position - 0x24EAE
int func_259(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		uParam0->f_4[iVar0] = 0;
		StringCopy(&uParam0->f_8[iVar0 /*8*/], "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&uParam0->f_34, "", 32);
	StringCopy(&uParam0->f_42, "", 32);
	StringCopy(&uParam0->f_50, "", 32);
	uParam0->f_58 = {0f, 0f, 0f};
	uParam0->f_61 = {0f, 0f, 0f};
	uParam0->f_68 = {0f, 0f, 0f};
	uParam0->f_71 = {0f, 0f, 0f};
	uParam0->f_74 = 0f;
	uParam0->f_79 = {0f, 0f, 0f};
	uParam0->f_82 = {0f, 0f, 0f};
	uParam0->f_85 = {0f, 0f, 0f};
	uParam0->f_88 = {0f, 0f, 0f};
	switch (iParam1) {
	case 3:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "TRV1_Trail_start", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "TRV1_Trail_end", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-24.685f, 3032.92f, 40.331f};
		break;

	case 4:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS3_05_water_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS3_05_water_grp2", 32);
		*uParam0 = {-24.685f, 3032.92f, 40.331f};
		break;

	case 0:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "gasstation_ipl_group1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "gasstation_ipl_group2", 32);
		*uParam0 = {-93.4f, 6410.9f, 36.8f};
		break;

	case 1:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DES_Smash2_startimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_Smash2_endimap", 32);
		*uParam0 = {890.3647f, -2367.289f, 28.10582f};
		break;

	case 2:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1020.5f, 663.41f, 154.75f};
		uParam0->f_58 = {-1018.913f, 603.2904f, 105.6611f};
		uParam0->f_61 = {-1038.913f, 639.2904f, 135.6611f};
		uParam0->f_64[0] = 1;
		uParam0->f_64[1] = 0;
		break;

	case 5:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "bnkheist_apt_norm", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest", 32);
		break;

	case 196:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		break;

	case 6:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "crashed_cargoplane", 32);
		break;

	case 7:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_jb700_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 8:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_entityXF_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 9:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_cheetah_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 10:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_ztype_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 11:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
		break;

	case 12:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "cargoship", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "sunkcargoship", 32);
		uParam0->f_68 = {-162.8918f, -2365.769f, 0f};
		uParam0->f_71 = {190.75f, 31.25f, 21f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		break;

	case 13:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ship_occ_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ship_occ_grp2", 32);
		break;

	case 14:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "smboat", 32);
		break;

	case 15:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "gasparticle_grp2", 32);
		*uParam0 = {-95.2f, 6411.3f, 31.5f};
		break;

	case 16:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 17:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 18:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 19:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 20:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "jetstealtunnel", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {801.7f, -1810.8f, 23.3f};
		break;

	case 21:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {787.3967f, -1808.858f, 29.8532f};
		uParam0->f_58 = {814f, -1750f, 20f};
		uParam0->f_61 = {790f, -1899f, 35f};
		uParam0->f_64[0] = 1;
		uParam0->f_64[1] = 0;
		uParam0->f_64[2] = 0;
		break;

	case 22:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
		break;

	case 23:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
		break;

	case 24:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
		break;

	case 25:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "triathlon2_VBprops", 32);
		break;

	case 26:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_REQUEST", 32);
		*uParam0 = {163.4f, -745.7f, 251f};
		break;

	case 27:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FBI_colPLUG", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 28:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FBI_repair", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 29:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = joaat("dt1_05_build1_h");
		uParam0->f_4[1] = joaat("dt1_05_build1_damage");
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 30:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = -112041596;
		uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 31:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = -186270611;
		uParam0->f_4[1] = joaat("dt1_05_damage_slod");
		*uParam0 = {178.534f, -668.835f, 37.2113f};
		break;

	case 32:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FIB_heist_lights", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 33:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FIB_heist_dmg", 32);
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 34:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_rubble", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 35:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FIBlobbyfake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FIBlobby", 32);
		*uParam0 = {105.4557f, -745.4835f, 44.7548f};
		break;

	case 36:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
		*uParam0 = {169f, -670.3f, 41.9f};
		break;

	case 37:
		uParam0->f_3 = 1;
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		uParam0->f_79 = {16.9757f, 3614.307f, 30.0677f};
		uParam0->f_82 = {145.2451f, 3748.912f, 49.6958f};
		uParam0->f_85 = {16.9757f, 3614.307f, 30.0677f};
		uParam0->f_88 = {145.2451f, 3748.912f, 49.6958f};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		break;

	case 38:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkA_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkA_grp2", 32);
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		break;

	case 39:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerA_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		break;

	case 40:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkB_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkB_grp2", 32);
		*uParam0 = {106.7f, 3732.1f, 40.8f};
		break;

	case 41:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerB_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {106.7f, 3732.1f, 40.8f};
		break;

	case 42:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkC_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkC_grp2", 32);
		*uParam0 = {72.7f, 3695.4f, 42f};
		break;

	case 43:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerC_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {72.7f, 3695.4f, 42f};
		break;

	case 44:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkD_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkD_grp2", 32);
		*uParam0 = {43.8f, 3699.7f, 41.3f};
		break;

	case 45:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerD_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {43.8f, 3699.7f, 41.3f};
		break;

	case 46:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkE_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkE_grp2", 32);
		*uParam0 = {28.5f, 3668f, 40.4f};
		break;

	case 47:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerE_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {28.5f, 3668f, 40.4f};
		break;

	case 48:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_34, "des_methtrailer", 32);
		StringCopy(&uParam0->f_8[0 /*8*/], "methtrailer_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "methtrailer_grp2", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "methtrailer_grp3", 32);
		uParam0->f_33 = 1;
		*uParam0 = {29.4838f, 3735.593f, 38.688f};
		uParam0->f_68 = {31.134f, 3738.783f, 39.062f};
		uParam0->f_71 = {13.6f, 20f, 8.9f};
		uParam0->f_74 = 48f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 1;
		break;

	case 49:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_meth_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {29.4838f, 3735.593f, 38.688f};
		break;

	case 50:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhs_startimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhs_endimap", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2450.595f, 4959.929f, 44.2575f};
		uParam0->f_79 = {2383.756f, 4929.988f, 39.52461f};
		uParam0->f_82 = {2505.756f, 5023.988f, 67.52461f};
		break;

	case 55:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhs_start_occl", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhs_end_occl", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {2450.595f, 4959.929f, 44.2575f};
		break;

	case 51:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farm", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "farm", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "farm_burnt", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2444.8f, 4976.4f, 50.5f};
		break;

	case 52:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farm_props", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "farm_burnt_props", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 53:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhouse", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhouse", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 54:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farmint_cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "farmint", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 56:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "tankerexp_grp0", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp3", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 57:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp1", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 58:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp2", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 59:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_tankerexp", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 60:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "dockcrane1", 32);
		*uParam0 = {889.3f, -2910.9f, 40f};
		break;

	case 61:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CanyonRvrShallow", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CanyonRvrDeep", 32);
		*uParam0 = {-1600.619f, 4443.457f, 0.725f};
		break;

	case 62:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Garage_door_locked", 32);
		*uParam0 = {966.1f, -114.8f, 75.2f};
		break;

	case 63:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ch1_02_closed", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ch1_02_open", 32);
		*uParam0 = {-3086.428f, 339.2523f, 6.3717f};
		break;

	case 64:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ferris_finale_Anim", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-1675.178f, -1143.605f, 12.0175f};
		break;

	case 65:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "railing_start", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "railing_end", 32);
		*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
		break;

	case 66:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "canyonriver01", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "canyonriver01_traincrash", 32);
		*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
		break;

	case 67:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_05_WOFFM", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "DT1_05_WOFFM", 32);
		*uParam0 = {131.29f, -631.22f, 261.85f};
		break;

	case 68:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "coronertrash", 32);
		*uParam0 = {233.9f, -1355f, 30.3f};
		break;

	case 69:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Coroner_Int_off", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Coroner_Int_on", 32);
		*uParam0 = {234.4f, -1355.6f, 40.5f};
		break;

	case 70:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "id2_14_pre_no_int", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 71:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_during1", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "id2_14_during2", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 72:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_on_fire", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "id2_14_post_no_int", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 73:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_during_door", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 74:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "burnt_switch_off", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 75:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "RC12B_Default", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "RC12B_Destroyed", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "RC12B_Fixed", 32);
		uParam0->f_33 = 0;
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 76:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 105:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 106:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
		*uParam0 = {1861.28f, 2402.11f, 58.53f};
		break;

	case 107:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FruitBB", 32);
		*uParam0 = {-1327.46f, -274.82f, 54.25f};
		break;

	case 108:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
		*uParam0 = {2697.32f, 3162.18f, 58.1f};
		break;

	case 109:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
		*uParam0 = {2119.12f, 3058.21f, 53.25f};
		break;

	case 110:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
		*uParam0 = {-804.25f, -2276.88f, 23.59f};
		break;

	case 111:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "HW1_02_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "HW1_02_NewBill", 32);
		*uParam0 = {296.5f, 173.3f, 100.4f};
		break;

	case 112:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
		*uParam0 = {296.5f, 173.3f, 100.4f};
		break;

	case 77:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {480.9554f, -1321.21f, 28.2037f};
		uParam0->f_85 = {508.3f, -1299.3f, 39.4f};
		uParam0->f_88 = {459.9f, -1363.2f, 21.4f};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		uParam0->f_91[2] = 0;
		break;

	case 78:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "TrevorsTrailer", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
		*uParam0 = {1973f, 3815f, 34f};
		uParam0->f_33 = 0;
		break;

	case 79:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "scafstartimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "scafendimap", 32);
		*uParam0 = {-1088.6f, -1650.6f, 6.4f};
		break;

	case 80:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "chop_props", 32);
		*uParam0 = {-13.83f, -1455.45f, 31.81f};
		break;

	case 113:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "AP1_04_TriAf01", 32);
		*uParam0 = {-1277.629f, -2030.913f, 1.2823f};
		break;

	case 114:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS2_06_TriAf02", 32);
		*uParam0 = {2384.969f, 4277.583f, 30.379f};
		break;

	case 115:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS4_04_TriAf03", 32);
		*uParam0 = {1577.881f, 3836.107f, 30.7717f};
		break;

	case 87:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-180.5771f, -1016.928f, 28.2893f};
		break;

	case 88:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "jewel2fake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "post_hiest_unload", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "bh1_16_refurb", 32);
		*uParam0 = {-630.4205f, -236.7843f, 37.057f};
		uParam0->f_79 = {-623.6868f - 11f, -231.935f - 11f, 40.30703f - 3.25f};
		uParam0->f_82 = {-623.6868f + 11f, -231.935f + 11f, 40.30703f + 3.25f};
		break;

	case 89:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "bh1_16_doors_shut", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "refit_unload", 32);
		*uParam0 = {-583.1606f, -282.3967f, 35.394f};
		break;

	case 90:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "v_tunnel_hole", 32);
		*uParam0 = {-14.651f, -604.3639f, 25.1823f};
		break;

	case 91:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "cs5_4_trains", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2773.61f, 2835.327f, 35.1903f};
		break;

	case 94:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "airfield", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {1743.682f, 3286.251f, 40.0875f};
		break;

	case 95:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {1222.9f, 1877.9f, 79.9f};
		uParam0->f_58 = {1206.8f, 1803f, 43.9f};
		uParam0->f_61 = {1329f, 2060.4f, 143.9f};
		uParam0->f_64[0] = 0;
		uParam0->f_64[1] = 1;
		uParam0->f_64[2] = 0;
		break;

	case 104:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_01_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SC1_01_NewBill", 32);
		*uParam0 = {-351f, -1324f, 44.02f};
		break;

	case 103:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_17_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_17_NewBill", 32);
		*uParam0 = {391.81f, -962.71f, 41.97f};
		break;

	case 102:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_14_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SC1_14_NewBill", 32);
		*uParam0 = {424.2f, -1944.31f, 33.09f};
		break;

	case 92:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ld_rail_01_track", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2626.374f, 2949.869f, 39.1409f};
		break;

	case 93:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ld_rail_02_track", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2626.374f, 2949.869f, 39.1409f};
		break;

	case 118:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_M_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_M_moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
		break;

	case 116:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_D_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_D_Moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
		break;

	case 117:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_S_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 119:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_L_Items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_L_Moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 120:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 122:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_FameShame", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
		break;

	case 121:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 123:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Michael_premier", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 124:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 170:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "burgershot_yoga", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 171:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_Scuba", 32);
		StringCopy(&uParam0->f_42, "V_Michael_Garage", 32);
		*uParam0 = {-810.5301f, 187.7868f, 71.4786f};
		break;

	case 125:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
		break;

	case 164:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Jewel_Gasmasks", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 165:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 166:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 167:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_KitBag", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 168:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_Body_Armour", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 169:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_Fireman", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 126:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 127:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 128:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 129:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 130:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 131:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 132:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 133:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 134:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 179:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "shutter_open", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "shutter_closed", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-30.8793f, -1088.336f, 25.4221f};
		uParam0->f_68 = {-29.3f, -1086.35f, 25.57f};
		uParam0->f_71 = {5.5f, 3f, 2f};
		uParam0->f_74 = -10f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		break;

	case 174:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "csr_beforeMission", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "csr_afterMissionA", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "csr_afterMissionB", 32);
		StringCopy(&uParam0->f_50, "csr_inMission", 32);
		uParam0->f_33 = 0;
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 175:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-49.21f, -1090.28f, 25.42f};
		uParam0->f_68 = {-49.21f, -1090.28f, 25.42f};
		uParam0->f_71 = {2.5f, 3f, 3f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 176:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-49.28f, -1092.66f, 25.42f};
		uParam0->f_68 = {-49.28f, -1092.66f, 25.42f};
		uParam0->f_71 = {3f, 1f, 3f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 177:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-53.07f, -1096.73f, 25.5f};
		uParam0->f_68 = {-53.07f, -1096.73f, 25.5f};
		uParam0->f_71 = {1f, 3f, 2f};
		uParam0->f_74 = -45f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 178:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "carshowroom_broken", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "carshowroom_boarded", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 173:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "shr_int", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "fakeint", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 180:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_03_Shutter", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "", 32);
		*uParam0 = {23.9346f, -669.7552f, 30.8853f};
		break;

	case 181:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "Hospitaldoorsanim", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
		StringCopy(&uParam0->f_42, "v_hospital", 32);
		uParam0->f_33 = 0;
		*uParam0 = {300.9423f, -586.1784f, 42.2919f};
		break;

	case 135:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_clean_apt", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_A", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 136:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_B", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 137:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_C", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 138:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_sextoys_a", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 139:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_wade_shit", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 140:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_wade_sofa_A", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 141:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "layer_debra_pic", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 142:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_torture", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 143:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_sofa_A", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_sofa_B", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 144:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_whiskey", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 145:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_mrJam_A", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_mrJam_B", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 146:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_mrJam_C", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 147:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "vb_30_emissive", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "vb_30_murder", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
		break;

	case 148:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "vb_30_crimetape", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
		break;

	case 149:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "sheriff_cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {1856.029f, 3682.998f, 33.2675f};
		break;

	case 150:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-440.5073f, 6018.766f, 30.49f};
		break;

	case 151:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ufo", 32);
		uParam0->f_33 = 0;
		*uParam0 = {487.31f, 5588.386f, 793.0532f};
		break;

	case 152:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ufo_eye", 32);
		uParam0->f_33 = 0;
		*uParam0 = {487.31f, 5588.386f, 793.0532f};
		break;

	case 153:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_57_FranklinStuff", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 154:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_GangBandana", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 155:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_Safari", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 172:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
		StringCopy(&uParam0->f_42, "v_strip3", 32);
		*uParam0 = {96.4811f, -1291.294f, 28.2688f};
		break;

	case 182:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {139.5795f, -3092.962f, 8.64631f};
		uParam0->f_79 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_82 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_85 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_88 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		uParam0->f_91[2] = 1;
		break;

	case 183:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {203.7784f, -3131.767f, 7.041344f};
		uParam0->f_79 = {Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f)};
		uParam0->f_82 = {Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f)};
		break;

	case 184:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {144.7706f, -2982.659f, 7.952507f};
		uParam0->f_79 = {Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f)};
		uParam0->f_82 = {Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f)};
		break;

	case 185:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1154.965f, -1520.983f, 9.132731f};
		uParam0->f_79 = {-1154.965f, -1520.983f, 9.132731f};
		uParam0->f_82 = {-1158.965f, -1524.983f, 11.63273f};
		break;

	case 187:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1052.204f, 371.9537f, 67.914f};
		uParam0->f_79 = {-1052.204f, 371.9537f, 67.914f};
		uParam0->f_82 = {-1048.064f, 368.0221f, 70.9128f};
		break;

	case 186:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {1954.984f, 3792.991f, 30.3086f};
		uParam0->f_79 = {1954.984f, 3792.991f, 30.3086f};
		uParam0->f_82 = {1983.45f, 3830.78f, 36.2726f};
		break;

	case 188:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1122.202f, 48.5724f, 51.4652f};
		uParam0->f_79 = {-1122.202f, 48.5724f, 51.4652f};
		uParam0->f_82 = {-1076.233f, 92.1041f, 60.0617f};
		break;

	case 81:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "KorizTempWalls", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-2199.138f, 223.4648f, 181.1118f};
		break;

	case 82:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "mic3_chopper_debris", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-2242.785f, 263.4779f, 173.6154f};
		break;

	case 83:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "chemgrill_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {3832.9f, 3665.5f, -23.4f};
		break;

	case 84:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Plane_crash_trench", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {2814.7f, 4758.5f, 47.9f};
		break;

	case 85:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "golfflags", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-1096.505f, 4.5754f, 49.8103f};
		break;

	case 86:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "yogagame", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-781.6566f, 186.8937f, 71.8352f};
		break;

	case 189:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Carwash_with_spinners", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Carwash_without_spinners", 32);
		uParam0->f_33 = 0;
		*uParam0 = {55.7f, -1391.3f, 30.5f};
		break;

	case 190:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "KT_CarWash", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
		uParam0->f_33 = 0;
		*uParam0 = {700.091f, -933.641f, 20.308f};
		break;

	case 191:
		uParam0->f_3 = 1;
		*uParam0 = {-1096.381f, -836.17f, 36.6755f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 192:
		uParam0->f_3 = 1;
		*uParam0 = {449.6558f, -980.1375f, 42.6918f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 193:
		uParam0->f_3 = 1;
		*uParam0 = {363.0175f, -1598.079f, 35.9502f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 194:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS3_07_MPGates", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {-1601.424f, 2808.213f, 16.2598f};
		break;

	case 97:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {23.7318f, -647.2123f, 37.9549f};
		break;

	case 98:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FINBANK", 32);
		*uParam0 = {12.9689f, -648.4698f, 9.7693f};
		break;

	case 99:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "PAPER1_RCM", 32);
		*uParam0 = {-1459.127f, 486.1281f, 115.2016f};
		break;

	case 100:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SP1_10_fake_interior", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SP1_10_real_interior", 32);
		*uParam0 = {-248.4916f, -2010.509f, 34.5743f};
		break;

	case 101:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "facelobbyfake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "facelobby", 32);
		*uParam0 = {-1081.347f, -263.1502f, 38.7152f};
		break;

	case 195:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "atriumglstatic", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "atriumglmission", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "atriumglcut", 32);
		*uParam0 = {136.1795f, -750.701f, 262.0516f};
		break;

	case 197:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "racetrack01", 32);
		*uParam0 = {2096f, 3168.7f, 42.9f};
		break;
	}
	switch (iParam1) {
	case 156:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "showhome_only", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 157:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "franklin_unpacking", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 158:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "franklin_settled", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 163:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_tshirt", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 159:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bong_and_wine", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 161:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_flyer", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 162:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_tux", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 160:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "locked", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "unlocked", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 96:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "chophillskennel", 32);
		*uParam0 = {19.0568f, 536.4818f, 169.6277f};
		break;
	}
	return 1;
}

// Position - 0x28649
int func_260(int iParam0) {
	switch (iParam0) {
	case 46: return 42;

	case 47: return 43;

	case 49: return 44;

	case 50: return 45;

	case 8:
		if (gameplay::is_bit_set(Global_101700.f_17533.f_382, 0)) {
			return 46;
		}
		break;

	case 16: return 47;

	case 38: return 48;

	case 39: return 49;

	case 40: return 50;

	case 41: return 51;

	case 42: return 52;

	case 43:
		if (Global_101700.f_8044.f_99.f_58[101]) {
			return 53;
		}
		else {
			return 54;
		}
		break;

	case 20: return 55;
	}
	return 0;
}

// Position - 0x2873B
void func_261(int iParam0, bool bParam1) {
	switch (iParam0) {
	case 46: func_262(4, bParam1); break;

	case 16: func_262(6, bParam1); break;

	case 37: func_262(17, bParam1); break;

	case 31: func_262(16, bParam1); break;
	}
}

// Position - 0x2878C
void func_262(int iParam0, bool bParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31) {
		if (!func_269(iParam0)) {
			gameplay::set_bit(&Global_101700.f_25393, iVar0);
			if (!bParam1) {
				func_267(func_268(iParam0));
				if (!func_266(68)) {
					func_263("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

// Position - 0x287F2
void func_263(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	func_264(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x28813
void func_264(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7, int iParam8, var uParam9) {
	int iVar0;

	if (gameplay::are_strings_equal(sParam0, "")) {
		return;
	}
	if (iParam3 < 0) {
		return;
	}
	if (iParam5 < 500 && iParam5 != -1) {
		return;
	}
	if (iParam4 < 0 && iParam4 != -1) {
		return;
	}
	if (iParam6 < 1 || iParam6 > 7) {
		return;
	}
	if (iParam7 == 235) {
		return;
	}
	if (iParam8 == 235) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::are_strings_equal(&Global_101700.f_19369[iVar0 /*16*/], sParam0)) {
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9) {
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/], sParam0, 16);
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4, sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = gameplay::get_game_timer() + iParam3;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1) {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 =
				gameplay::get_game_timer() + iParam3 + iParam4;
		}
		else {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_265();
	}
}

// Position - 0x289E6
void func_265() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 0)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0]) {
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 1)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1]) {
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 2)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2]) {
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

// Position - 0x28B06
int func_266(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		return gameplay::is_bit_set(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

// Position - 0x28B49
void func_267(char *sParam0) {
	ui::_set_notification_text_entry("");
	ui::_set_notification_message_3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

// Position - 0x28B6D
char *func_268(int iParam0) {
	switch (iParam0) {
	case 0: return "CM_STOMIC";

	case 1: return "CM_STOFRA";

	case 2: return "CM_STOTRE";

	case 3: return "CM_STOAMA";

	case 4: return "CM_STOBEV";

	case 5: return "CM_STOBRA";

	case 6: return "CM_STOCHR";

	case 7: return "CM_STODAV";

	case 8: return "CM_STODEV";

	case 9: return "CM_STODRF";

	case 10: return "CM_STOFAB";

	case 11: return "CM_STOFLO";

	case 12: return "CM_STOJIM";

	case 13: return "CM_STOLAM";

	case 14: return "CM_STOLAZ";

	case 15: return "CM_STOLES";

	case 16: return "CM_STOMAU";

	case 17: return "CM_STOTHO";

	case 18: return "CM_STONER";

	case 19: return "CM_STOPAT";

	case 20: return "CM_STOSIM";

	case 21: return "CM_STOSOL";

	case 22: return "CM_STOSTE";

	case 23: return "CM_STOSTR";

	case 24: return "CM_STOTAN";

	case 25: return "CM_STOTAO";

	case 26: return "CM_STOTRA";

	case 27: return "CM_STOWAD";
	}
	return "ERROR!";
}

// Position - 0x28D40
int func_269(int iParam0) {
	if (iParam0 != -1 && iParam0 != 28) {
		return gameplay::is_bit_set(Global_101700.f_25393, iParam0);
	}
	return 0;
}

// Position - 0x28D6D
void func_270(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0x28DAA
int func_271(char *sParam0) {
	int iVar0;

	iVar0 = 1424;
	if (!script::does_script_exist(sParam0)) {
		return 1;
	}
	if (gameplay::are_strings_equal(sParam0, "controller_Races")) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("controller_races")) > 0) {
			return 1;
		}
		iVar0 = 128;
	}
	script::request_script(sParam0);
	if (script::has_script_loaded(sParam0)) {
		system::start_new_script(sParam0, iVar0);
		script::set_script_as_no_longer_needed(sParam0);
		return 1;
	}
	return 0;
}

// Position - 0x28E0A
int func_272() { return func_273(script::get_this_script_name(), 0); }

// Position - 0x28E1B
int func_273(char *sParam0, int iParam1) {
	int iVar0;
	char *sVar1;
	int iVar33;
	int iVar34;

	iVar33 = gameplay::get_hash_key(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63) {
		iVar0 = iVar34;
		func_233(iVar0, &sVar1);
		if (gameplay::get_hash_key(sVar1) == iVar33) {
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0) {
	}
	return -1;
}

// Position - 0x28E64
void func_274(int iParam0) {
	int iVar0;
	int iVar1;

	Global_55823 = 0;
	if (Global_56047[iParam0 /*13*/] != 3) {
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67917) {
		if (Global_67918[iVar1 /*9*/] == iParam0) {
			iVar0 = 1;
			Global_67918[iVar1 /*9*/].f_1 = 1;
			Global_67918[iVar1 /*9*/].f_2 = 0f;
			if (Global_67918[iVar1 /*9*/].f_3 == 2) {
			}
		}
		iVar1++;
	}
	if (!iVar0) {
	}
}

// Position - 0x28ED5
void func_275() {
	if (func_78(iLocal_578)) {
		if (func_17(iLocal_615)) {
			if (ped::is_ped_in_vehicle(iLocal_578, iLocal_615, 0)) {
				if (func_16(iLocal_632)) {
					if (ai::control_mounted_weapon(iLocal_578)) {
						ai::set_mounted_weapon_target(iLocal_578, 0, iLocal_632, 0f, 0f, 0f);
					}
				}
				if (iLocal_333 == 0) {
					vLocal_209 = {entity::get_entity_coords(player::player_ped_id(), 1)};
					iLocal_260 = system::round(vLocal_209.z + 20f);
					if (iLocal_260 == 0) {
					}
					if (iLocal_270 < 2) {
						if (iLocal_272 == 0) {
							if (iLocal_360 == 0) {
								if (iLocal_364 == 0) {
									if (func_16(iLocal_632)) {
										ai::task_heli_mission(iLocal_578, iLocal_615, iLocal_632, 0, 0f, 0f, 0f, 4,
															  fLocal_153, 50f, -1f, -1, 40, -1f, 0);
									}
								}
							}
							else {
								ai::task_heli_mission(iLocal_578, iLocal_615, 0, 0,
													  entity::get_entity_coords(iLocal_615, 1), 4, 0.1f, -1f, -1f,
													  iLocal_260 + 100, 100, -1f, 0);
							}
							iLocal_273 = gameplay::get_game_timer();
							iLocal_272 = 1;
						}
						else if (iLocal_272 == 1) {
							if (gameplay::get_game_timer() > iLocal_290 + 10000) {
								if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
									func_285(player::player_ped_id(), iLocal_615, 0) < 85f) {
									if (iLocal_279 < 25) {
										pathfind::get_nth_closest_vehicle_node(vLocal_209, iLocal_279, &vLocal_221, 1,
																			   3f, 0f);
										if (func_277(player::player_ped_id(), vLocal_221, 65f) &&
											!func_277(player::player_ped_id(), vLocal_221, 40f)) {
											if (!entity::is_entity_dead(iLocal_579, 0)) {
												if (iLocal_360 == 0) {
												}
											}
											else if (iLocal_360 == 0) {
											}
											iLocal_273 = gameplay::get_game_timer();
											iLocal_272 = 2;
											iLocal_279 = 1;
										}
										else {
											iLocal_279++;
										}
									}
									else {
										if (!entity::is_entity_dead(iLocal_579, 0)) {
											if (iLocal_360 == 0) {
											}
										}
										else if (iLocal_360 == 0) {
										}
										iLocal_273 = gameplay::get_game_timer();
										iLocal_272 = 2;
										iLocal_279 = 1;
									}
								}
							}
						}
						else if (iLocal_272 == 2) {
							iLocal_274 = gameplay::get_game_timer();
							if (iLocal_274 > iLocal_273 + 20000 ||
								!func_55(player::player_ped_id(), iLocal_615, 85f, 1) ||
								ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
								iLocal_272 = 0;
							}
						}
						if (gameplay::get_game_timer() > iLocal_290 + 8000) {
							if (iLocal_257 == iLocal_258 + 1 || iLocal_364 == 1) {
								iLocal_364 = 1;
								if (!audio::is_mobile_phone_call_ongoing()) {
									if (iLocal_365 == 0) {
										if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
											iLocal_365 = 1;
										}
									}
									if (iLocal_367 == 0) {
										if (func_276(&uLocal_390, "EPS8AU", "EPS8_HEL3", 7, 0, 0, 0)) {
											iLocal_367 = 1;
										}
									}
									if (fLocal_146 > 300f) {
										fLocal_146 -= 0.1f;
									}
									if (fLocal_153 > 28f) {
										fLocal_153 -= 0.02f;
									}
								}
								if (iLocal_300 == 0) {
									if (iLocal_360 == 0) {
										if (func_16(iLocal_632)) {
											ai::task_heli_mission(iLocal_578, iLocal_615, iLocal_632, 0, 0f, 0f, 0f, 4,
																  fLocal_153, 50f, -1f, -1, 40, -1f, 0);
										}
										ai::set_drive_task_cruise_speed(iLocal_578, fLocal_153);
										iLocal_300++;
									}
								}
								else {
									iLocal_300++;
									if (iLocal_300 > 30) {
										iLocal_300 = 0;
									}
								}
								if (iLocal_281 > 3) {
									if (func_56(iLocal_578)) {
										iLocal_270 = 0;
										if (iLocal_360 == 1) {
											ai::task_heli_mission(iLocal_578, iLocal_615, 0, player::player_ped_id(),
																  vLocal_209, 9, 200f, 2f, -1f, iLocal_260 + 10, 50,
																  -1f, 0);
											if (iLocal_262 > 0) {
												if (!func_287()) {
													if (iLocal_284 == 0) {
														if (func_63(&uLocal_390, "EPS8AU", "EPS8_HEL2", "EPS8_HEL2_1",
																	5, 0, 0)) {
															iLocal_284 = 1;
														}
													}
													else if (iLocal_284 == 1) {
														if (func_63(&uLocal_390, "EPS8AU", "EPS8_HEL2", "EPS8_HEL2_2",
																	5, 0, 0)) {
															iLocal_284 = 2;
														}
													}
												}
											}
										}
										iLocal_360 = 0;
										if (func_78(iLocal_579)) {
											if (ai::get_script_task_status(iLocal_579, 780511057) != 1) {
												if (ai::get_script_task_status(iLocal_579, 242628503) != 1) {
													ai::task_combat_ped(iLocal_579, player::player_ped_id(), 0, 16);
												}
											}
										}
									}
									else if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
										if (iLocal_270 == 0) {
											iLocal_268 = gameplay::get_game_timer();
											iLocal_270 = 1;
										}
										else if (iLocal_270 == 1) {
											iLocal_269 = gameplay::get_game_timer();
											if (iLocal_269 > iLocal_268 + 4000) {
												if (func_78(iLocal_579)) {
													ai::clear_ped_tasks(iLocal_579);
												}
												if (iLocal_360 == 0) {
													ai::task_heli_mission(iLocal_578, iLocal_615, 0, 0,
																		  entity::get_entity_coords(iLocal_615, 1), 4,
																		  0.1f, -1f, -1f, -1, 100, -1f, 0);
												}
												iLocal_360 = 1;
											}
											if (!func_287()) {
												if (iLocal_269 > iLocal_268 + 10000) {
													if (iLocal_262 == 0) {
														if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_9", 5,
																	0, 0)) {
															iLocal_262 = 1;
														}
													}
												}
												if (iLocal_269 > iLocal_268 + 25000) {
													if (iLocal_262 == 1) {
														if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_10", 5,
																	0, 0)) {
															iLocal_262 = 2;
														}
													}
												}
												if (iLocal_269 > iLocal_268 + 40000) {
													if (iLocal_262 == 2) {
														if (func_63(&uLocal_390, "EPS8AU", "EPS8_CH2", "EPS8_CH2_11", 5,
																	0, 0)) {
															unk1::_0x293220DA1B46CEBC(5f, 5f, 1);
															iLocal_262 = 3;
															iLocal_270 = 2;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					else {
						ai::task_heli_mission(iLocal_578, iLocal_615, 0, 0, vLocal_209.x + 600f, vLocal_209.y + 600f,
											  vLocal_209.z + 100f, 4, 200f, -1f, -1f, -1, 100, -1f, 0);
						entity::set_entity_collision(iLocal_615, 0, 0);
						iLocal_373 = 1;
					}
				}
			}
		}
	}
}

// Position - 0x29442
bool func_276(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_77(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7) {
		if (iParam3 < 12) {
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_64(sParam2, iParam3, 0);
}

// Position - 0x29490
bool func_277(int iParam0, vector3 vParam1, float fParam4) {
	return system::vdist2(entity::get_entity_coords(iParam0, 1), vParam1) <= fParam4 * fParam4;
}

// Position - 0x294AD
void func_278() {
	if (iLocal_336 == 0) {
		if (iLocal_333 == 0) {
			if (iLocal_568 == 8) {
				func_24(&iLocal_935);
			}
			if (!entity::is_entity_dead(iLocal_632, 0)) {
				if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
					if (!ui::does_blip_exist(iLocal_938)) {
						iLocal_938 = func_279(iLocal_632, 1, 5);
						if (iLocal_568 == 3) {
							if (ui::does_blip_exist(iLocal_939)) {
								func_24(&iLocal_939);
								if (iLocal_332 == 0) {
									func_286("EPS8_06", 7500, 0);
									iLocal_332 = 1;
								}
							}
						}
						else if (iLocal_568 == 4) {
							if (ui::does_blip_exist(iLocal_935)) {
								func_24(&iLocal_935);
								if (iLocal_332 == 0) {
									func_286("EPS8_06", 7500, 0);
									iLocal_332 = 1;
								}
							}
						}
					}
				}
				else {
					if (entity::get_entity_speed(player::player_ped_id()) > 17f) {
						if (iLocal_330 == 1) {
							vehicle::set_vehicle_door_shut(iLocal_632, 5, 0);
							iLocal_330 = 0;
						}
					}
					func_24(&iLocal_938);
					if (iLocal_568 == 3) {
						if (!ui::does_blip_exist(iLocal_939)) {
							iLocal_939 = func_279(uLocal_616[0], 1, 5);
							if (iLocal_358 == 0) {
								func_286("EPS8_05", 7500, 0);
								iLocal_358 = 1;
							}
						}
					}
					else if (iLocal_568 == 4) {
						if (!ui::does_blip_exist(iLocal_935)) {
							iLocal_935 = ui::add_blip_for_coord(vLocal_158);
						}
					}
				}
			}
		}
		else {
			if (iLocal_568 == 8) {
				func_24(&iLocal_938);
			}
			if (!entity::is_entity_dead(iLocal_615, 0)) {
				if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_615, 0)) {
					if (!ui::does_blip_exist(iLocal_935)) {
						iLocal_935 = ui::add_blip_for_coord(vLocal_158);
					}
				}
				else {
					func_24(&iLocal_935);
				}
			}
		}
	}
	else {
		if (iLocal_568 == 8) {
			func_24(&iLocal_938);
		}
		if (iLocal_568 == 8) {
			func_24(&iLocal_935);
		}
	}
}

// Position - 0x2965A
int func_279(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	if (func_16(iParam0)) {
		iVar0 = ui::add_blip_for_entity(iParam0);
		ui::set_blip_as_friendly(iVar0, iParam1);
		ui::set_blip_priority(iVar0, iParam2);
		ui::set_blip_scale(iVar0, 1f);
	}
	return iVar0;
}

// Position - 0x2968F
void func_280() {
	if (func_16(iLocal_615)) {
		if (vehicle::_get_heli_main_rotor_health(iLocal_615) < 200f ||
			vehicle::_get_heli_engine_health(iLocal_615) < 200f ||
			vehicle::_get_heli_tail_rotor_health(iLocal_615) < 200f || entity::get_entity_health(iLocal_615) < 200 ||
			vehicle::get_vehicle_petrol_tank_health(iLocal_615) < 200f) {
			vehicle::set_vehicle_out_of_control(iLocal_615, 0, 1);
		}
	}
	if (!entity::is_entity_dead(uLocal_616[iLocal_256], 0)) {
		if (ped::is_ped_in_vehicle(player::player_ped_id(), uLocal_616[iLocal_256], 0)) {
			if (!entity::is_entity_dead(uLocal_580[iLocal_256], 0)) {
				ped::set_ped_combat_attributes(uLocal_580[iLocal_256], 1, 0);
			}
			if (!entity::is_entity_dead(uLocal_588[iLocal_256], 0)) {
				ped::set_ped_combat_attributes(uLocal_588[iLocal_256], 1, 0);
			}
			entity::set_entity_only_damaged_by_player(uLocal_616[iLocal_256], 0);
			entity::set_vehicle_as_no_longer_needed(&uLocal_616[iLocal_256]);
		}
	}
	if (entity::does_entity_exist(uLocal_580[iLocal_256])) {
		if (!func_78(uLocal_580[iLocal_256])) {
			if (ui::does_blip_exist(iLocal_911[iLocal_256])) {
				func_24(&iLocal_911[iLocal_256]);
				iLocal_258++;
				iLocal_295++;
			}
		}
		else if (!func_55(uLocal_580[iLocal_256], player::player_ped_id(), fLocal_144, 1)) {
			if (ui::does_blip_exist(iLocal_911[iLocal_256])) {
				if (!entity::is_entity_on_screen(uLocal_580[iLocal_256])) {
					func_24(&iLocal_911[iLocal_256]);
					func_18(&uLocal_580[iLocal_256]);
					if (entity::does_entity_exist(uLocal_616[iLocal_256])) {
						if (!entity::is_entity_dead(uLocal_616[iLocal_256], 0)) {
							if (!entity::is_entity_on_screen(uLocal_616[iLocal_256])) {
								func_15(&uLocal_616[iLocal_256]);
							}
						}
					}
					iLocal_258++;
				}
			}
		}
		else if (ui::does_blip_exist(iLocal_911[iLocal_256])) {
			if (iLocal_256 != 0) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), -367.5617f, -107.3702f, 32.44559f,
													 -356.0586f, -74.55742f, 50.42249f, 82.25f, 0, 1, 0)) {
					if (entity::is_entity_in_angled_area(uLocal_580[iLocal_256], -361.7977f, -108.5845f, 67.12477f,
														 -347.5992f, -65.6332f, 36.46431f, 174.75f, 0, 1, 0)) {
						ped::set_ped_combat_attributes(uLocal_580[iLocal_256], 1, 0);
						if (ai::get_script_task_status(uLocal_580[iLocal_256], 780511057) != 1) {
							ai::task_combat_ped(uLocal_580[iLocal_256], player::player_ped_id(), 0, 16);
						}
						iLocal_341[iLocal_256] = 1;
					}
					else {
						ped::set_ped_combat_attributes(uLocal_580[iLocal_256], 1, 1);
						if (!entity::is_entity_dead(uLocal_616[iLocal_256], 0)) {
							if (ai::get_script_task_status(uLocal_580[iLocal_256], -1817882002) != 1) {
								if (gameplay::get_distance_between_coords(
										entity::get_entity_coords(uLocal_580[iLocal_256], 1), vLocal_224, 1) <
									gameplay::get_distance_between_coords(
										entity::get_entity_coords(uLocal_580[iLocal_256], 1), vLocal_227, 1)) {
									ai::task_vehicle_drive_to_coord(
										uLocal_580[iLocal_256], uLocal_616[iLocal_256], vLocal_224, 50f, 0,
										entity::get_entity_model(uLocal_616[iLocal_256]), 786468, 7f, 1f);
								}
								else {
									ai::task_vehicle_drive_to_coord(
										uLocal_580[iLocal_256], uLocal_616[iLocal_256], vLocal_227, 50f, 0,
										entity::get_entity_model(uLocal_616[iLocal_256]), 786468, 7f, 1f);
								}
							}
						}
					}
				}
				else {
					ped::set_ped_combat_attributes(uLocal_580[iLocal_256], 1, 1);
					if (iLocal_341[iLocal_256] == 1) {
						if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							if (!entity::is_entity_dead(uLocal_616[iLocal_256], 0)) {
								if (ped::is_ped_in_vehicle(uLocal_580[iLocal_256], uLocal_616[iLocal_256], 0)) {
									iLocal_341[iLocal_256] = 0;
								}
								else if (func_78(uLocal_580[iLocal_256])) {
									if (ai::get_script_task_status(uLocal_580[iLocal_256], -1794415470) != 1) {
										ai::task_enter_vehicle(uLocal_580[iLocal_256], uLocal_616[iLocal_256], 20000,
															   -1, 2f, 1, 0);
									}
								}
							}
						}
					}
					else if (ai::get_script_task_status(uLocal_580[iLocal_256], 780511057) != 1) {
						ai::task_combat_ped(uLocal_580[iLocal_256], player::player_ped_id(), 0, 16);
					}
				}
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (!entity::is_entity_dead(uLocal_616[iLocal_256], 0)) {
					if (ped::is_ped_in_vehicle(uLocal_580[iLocal_256], uLocal_616[iLocal_256], 0)) {
					}
				}
			}
			if (ped::is_ped_sitting_in_any_vehicle(uLocal_580[iLocal_256])) {
				ui::set_blip_scale(iLocal_911[iLocal_256], fLocal_148);
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					if (iLocal_316[iLocal_256] == 0) {
						if (fLocal_249 <= 50f) {
							iLocal_316[iLocal_256] = 1;
						}
					}
					else if (fLocal_249 > 50f) {
						iLocal_316[iLocal_256] = 0;
					}
				}
			}
			else {
				ui::set_blip_scale(iLocal_911[iLocal_256], fLocal_147);
			}
		}
	}
	if (entity::does_entity_exist(uLocal_588[iLocal_256])) {
		if (!func_78(uLocal_588[iLocal_256])) {
			if (ui::does_blip_exist(iLocal_919[iLocal_256])) {
				func_24(&iLocal_919[iLocal_256]);
				iLocal_258++;
				iLocal_295++;
			}
		}
		else if (!func_55(uLocal_588[iLocal_256], player::player_ped_id(), fLocal_144, 1)) {
			if (ui::does_blip_exist(iLocal_919[iLocal_256])) {
				if (!entity::is_entity_on_screen(uLocal_588[iLocal_256])) {
					func_24(&iLocal_919[iLocal_256]);
					func_18(&uLocal_588[iLocal_256]);
					iLocal_258++;
				}
			}
		}
		else {
			ped::set_ped_firing_pattern(uLocal_588[iLocal_256], -753768974);
		}
	}
	if (iLocal_299 != -1) {
		if (!func_78(uLocal_570[iLocal_299])) {
			iLocal_299 = -1;
			iLocal_374 = 0;
		}
		else if (ai::get_script_task_status(uLocal_570[iLocal_299], -1273030092) != 1 &&
				 ai::get_script_task_status(uLocal_570[iLocal_299], -1273030092) != 0) {
			ai::task_vehicle_mission_ped_target(uLocal_570[iLocal_299], iLocal_632, player::player_ped_id(), 8, 40f,
												786468, 100f, 30f, 1);
		}
	}
	if (entity::does_entity_exist(uLocal_570[iLocal_256])) {
		if (!func_78(uLocal_570[iLocal_256])) {
			if (ui::does_blip_exist(iLocal_927[iLocal_256])) {
				func_24(&iLocal_927[iLocal_256]);
				iLocal_258++;
				iLocal_295++;
			}
		}
		else if (!func_55(uLocal_570[iLocal_256], player::player_ped_id(), fLocal_145, 1)) {
			if (!ped::is_ped_in_vehicle(uLocal_570[iLocal_256], iLocal_632, 0)) {
				if (ui::does_blip_exist(iLocal_927[iLocal_256])) {
					func_24(&iLocal_927[iLocal_256]);
					if (iLocal_299 == iLocal_256) {
						iLocal_299 = -1;
						iLocal_374 = 0;
					}
					iLocal_258++;
				}
			}
		}
		else if (iLocal_256 != 5) {
			if (iLocal_374 == 0) {
				if (iLocal_336 == 0) {
					if (func_55(uLocal_570[iLocal_256], iLocal_632, 60f, 1)) {
						if (!func_55(player::player_ped_id(), iLocal_632, 30f, 1)) {
							if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
								if (vehicle::is_vehicle_seat_free(iLocal_632, -1, 0)) {
									iLocal_299 = iLocal_256;
									if (iLocal_328 == 1) {
										pathfind::set_roads_in_angled_area(-397.6181f, -63.27855f, 42.65886f,
																		   -345.0219f, -93.33459f, 49.65768f, 24.75f, 0,
																		   1, 1);
									}
									ai::clear_ped_tasks(uLocal_570[iLocal_299]);
									ped::set_blocking_of_non_temporary_events(uLocal_570[iLocal_299], 1);
									ped::set_ped_combat_attributes(uLocal_570[iLocal_299], 1, 1);
									iLocal_374 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_256 == 1 || iLocal_256 == 4) {
		if (!func_78(iLocal_596)) {
			if (ui::does_blip_exist(iLocal_936)) {
				func_24(&iLocal_936);
				func_281(&uLocal_390, 2);
				iLocal_258++;
				iLocal_295++;
			}
		}
		else if (!func_55(iLocal_596, player::player_ped_id(), fLocal_145, 1)) {
			if (ui::does_blip_exist(iLocal_936)) {
				func_24(&iLocal_936);
				iLocal_258++;
			}
		}
	}
	if (iLocal_256 == 2 || iLocal_256 == 6) {
		if (!func_78(iLocal_578)) {
			if (ui::does_blip_exist(iLocal_937)) {
				if (!entity::is_entity_dead(iLocal_615, 0)) {
					vehicle::set_vehicle_out_of_control(iLocal_615, 0, 1);
					iLocal_373 = 1;
				}
				iLocal_264 = gameplay::get_game_timer();
				func_281(&uLocal_390, 3);
				func_24(&iLocal_937);
				iLocal_258++;
				iLocal_295++;
			}
		}
		else if (!func_55(iLocal_578, player::player_ped_id(), fLocal_146, 1) &&
				 gameplay::get_game_timer() > iLocal_290 + 15000) {
			if (ui::does_blip_exist(iLocal_937)) {
				if (!entity::is_entity_on_screen(iLocal_578)) {
					iLocal_264 = gameplay::get_game_timer();
					func_281(&uLocal_390, 3);
					func_24(&iLocal_937);
					func_18(&iLocal_578);
					if (entity::does_entity_exist(iLocal_615)) {
						if (!entity::is_entity_dead(iLocal_615, 0)) {
							if (!entity::is_entity_dead(iLocal_579, 0)) {
								if (ped::is_ped_in_vehicle(iLocal_579, iLocal_615, 0)) {
									func_18(&iLocal_579);
								}
							}
							if (iLocal_333 == 0) {
								if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
									if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_615, 0)) {
										if (!entity::is_entity_on_screen(iLocal_615)) {
											func_15(&iLocal_615);
										}
									}
								}
							}
						}
					}
					iLocal_258++;
				}
			}
		}
	}
	iLocal_256++;
	if (iLocal_256 == 7) {
		iLocal_256 = 0;
	}
}

// Position - 0x29FB2
void func_281(var *uParam0, int iParam1) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
		(*uParam0)[iParam1 /*10*/].f_7 = 0;
	}
}

// Position - 0x29FCF
void func_282() {
	func_24(&iLocal_939);
	func_24(&iLocal_940);
	if (func_78(iLocal_596)) {
		if (!ui::does_blip_exist(iLocal_936)) {
			if (func_55(iLocal_596, player::player_ped_id(), fLocal_145, 1)) {
				if (!ped::is_ped_in_any_vehicle(iLocal_596, 0)) {
					ped::set_ped_combat_attributes(iLocal_596, 1, 0);
					iLocal_936 = func_283(iLocal_596, 1, 0, 3);
					ui::set_blip_scale(iLocal_936, fLocal_147);
					ai::task_combat_ped(iLocal_596, player::player_ped_id(), 0, 16);
					iLocal_257++;
				}
			}
		}
	}
	if (func_78(uLocal_580[iLocal_256])) {
		if (!ui::does_blip_exist(iLocal_911[iLocal_256])) {
			if (ped::is_ped_in_combat(uLocal_580[iLocal_256], player::player_ped_id()) ||
				gameplay::get_game_timer() > iLocal_290 + 20000 ||
				!entity::is_entity_in_angled_area(player::player_ped_id(), -335.8581f, -97.34045f, 62.20868f,
												  -403.0932f, -76.60052f, 25.80415f, 34f, 0, 1, 0)) {
				iLocal_911[iLocal_256] = func_283(uLocal_580[iLocal_256], 1, 0, 5);
				ui::set_blip_scale(iLocal_911[iLocal_256], fLocal_148);
				if (iLocal_256 == 0) {
					if (!entity::is_entity_dead(uLocal_616[0], 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(uLocal_616[0])) {
							vehicle::stop_playback_recorded_vehicle(uLocal_616[0]);
						}
					}
				}
				if (!entity::is_entity_dead(uLocal_616[iLocal_256], 0)) {
					if (iLocal_328 == 1) {
						if (iLocal_256 == 0) {
							if (!ai::is_waypoint_playback_going_on_for_vehicle(uLocal_616[iLocal_256])) {
								ped::set_ped_combat_attributes(uLocal_580[iLocal_256], 1, 0);
								if (entity::does_entity_exist(uLocal_588[iLocal_256])) {
									if (!entity::is_entity_dead(uLocal_588[iLocal_256], 0)) {
										if (!ped::is_ped_injured(uLocal_588[iLocal_256])) {
											ped::set_ped_combat_attributes(uLocal_588[iLocal_256], 1, 0);
										}
									}
								}
							}
						}
					}
					ai::task_vehicle_escort(uLocal_580[iLocal_256], uLocal_616[iLocal_256], player::player_ped_id(), 0,
											200f, 786468, -1f, 20, 20f);
				}
				else {
					ai::task_combat_ped(uLocal_580[iLocal_256], player::player_ped_id(), 0, 16);
				}
				iLocal_257++;
			}
		}
	}
	if (func_78(uLocal_588[iLocal_256])) {
		if (!ui::does_blip_exist(iLocal_919[iLocal_256])) {
			if (ped::is_ped_in_combat(uLocal_588[iLocal_256], player::player_ped_id()) ||
				gameplay::get_game_timer() > iLocal_290 + 20100 ||
				!entity::is_entity_in_angled_area(player::player_ped_id(), -335.8581f, -97.34045f, 62.20868f,
												  -403.0932f, -76.60052f, 25.80415f, 34f, 0, 1, 0)) {
				iLocal_919[iLocal_256] = func_283(uLocal_588[iLocal_256], 1, 0, 3);
				ui::set_blip_scale(iLocal_919[iLocal_256], fLocal_147);
				ai::task_combat_ped(uLocal_588[iLocal_256], player::player_ped_id(), 0, 16);
				iLocal_257++;
			}
		}
	}
	if (func_78(uLocal_570[iLocal_256])) {
		if (!ui::does_blip_exist(iLocal_927[iLocal_256])) {
			if (ped::is_ped_in_combat(uLocal_570[iLocal_256], player::player_ped_id()) ||
				gameplay::get_game_timer() > iLocal_290 + 50) {
				if (!ped::is_ped_in_any_vehicle(uLocal_570[iLocal_256], 0)) {
					if (func_55(uLocal_570[iLocal_256], player::player_ped_id(), fLocal_145, 1)) {
						if (iLocal_256 == 5) {
							ped::set_ped_combat_attributes(uLocal_570[iLocal_256], 1, 0);
						}
						iLocal_927[iLocal_256] = func_283(uLocal_570[iLocal_256], 1, 0, 3);
						ui::set_blip_scale(iLocal_927[iLocal_256], fLocal_147);
						ai::task_combat_ped(uLocal_570[iLocal_256], player::player_ped_id(), 0, 16);
						iLocal_257++;
					}
				}
			}
		}
	}
	if (iLocal_315 == 0) {
		if (gameplay::get_game_timer() > iLocal_290 + 300) {
			if (func_17(iLocal_615)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_615)) {
					vehicle::stop_playback_recorded_vehicle(iLocal_615);
				}
				vehicle::set_vehicle_engine_on(iLocal_615, 1, 1, 0);
				if (!entity::is_entity_dead(iLocal_578, 0)) {
					if (!ui::does_blip_exist(iLocal_937)) {
						iLocal_937 = ui::add_blip_for_entity(iLocal_578);
						if (ped::is_ped_in_vehicle(iLocal_578, iLocal_615, 0) && iLocal_333 == 0) {
							ui::set_blip_scale(iLocal_937, fLocal_148);
							ui::set_blip_priority(iLocal_937, 7);
							ui::set_blip_sprite(iLocal_937, 353);
							ui::set_blip_colour(iLocal_937, 1);
						}
						else {
							ui::set_blip_scale(iLocal_937, fLocal_147);
							ui::set_blip_priority(iLocal_937, 3);
							if (func_78(iLocal_578)) {
								if (ped::is_ped_in_vehicle(iLocal_578, iLocal_615, 0)) {
									ai::task_leave_vehicle(iLocal_578, iLocal_615, 0);
								}
							}
							if (func_78(iLocal_596)) {
								if (ped::is_ped_in_vehicle(iLocal_596, iLocal_615, 0)) {
									ai::task_leave_vehicle(iLocal_596, iLocal_615, 0);
								}
							}
							if (func_78(uLocal_570[5])) {
								if (ped::is_ped_in_vehicle(uLocal_570[5], iLocal_615, 0)) {
									ai::task_leave_vehicle(uLocal_570[5], iLocal_615, 0);
								}
							}
							if (func_78(iLocal_579)) {
								if (ped::is_ped_in_vehicle(iLocal_579, iLocal_615, 0)) {
									ai::task_leave_vehicle(iLocal_579, iLocal_615, 0);
								}
							}
						}
						iLocal_257++;
					}
				}
				if (func_78(iLocal_579)) {
					ai::task_combat_ped(iLocal_579, player::player_ped_id(), 0, 16);
				}
			}
			iLocal_315 = 1;
		}
	}
	iLocal_256++;
	if (iLocal_256 == 7) {
		iLocal_256 = 0;
	}
}

// Position - 0x2A4C8
int func_283(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = true;
	if (bVar1) {
		if (func_16(iParam0)) {
			iVar0 = ui::add_blip_for_entity(iParam0);
			ui::set_blip_as_friendly(iVar0, iParam2);
			ui::set_blip_priority(iVar0, iParam3);
			ui::set_blip_scale(iVar0, 0.7f);
			if (!iParam1) {
				ui::set_blip_scale(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

// Position - 0x2A51A
int func_284(int iParam0, int iParam1, int iParam2) {
	if (!entity::is_entity_dead(iParam0, 0) && !entity::is_entity_dead(iParam1, 0)) {
		if (ped::is_ped_sitting_in_vehicle(iParam0, iParam1)) {
			if (vehicle::get_ped_in_vehicle_seat(iParam1, iParam2, 0) == iParam0) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x2A558
float func_285(int iParam0, int iParam1, int iParam2) {
	vector3 vVar0;
	vector3 vVar3;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar3 = {entity::get_entity_coords(iParam1, 1)};
	}
	else {
		vVar3 = {entity::get_entity_coords(iParam1, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vVar3, iParam2);
}

// Position - 0x2A5B6
void func_286(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 1);
}

// Position - 0x2A5CF
bool func_287() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0x2A5F1
void func_288() {
	if (!audio::is_audio_scene_active("EPSILONISM_08_COMPLIANCE")) {
		if (!audio::is_audio_scene_active("EPSILONISM_08_NON_COMPLIANCE")) {
			if (func_16(uLocal_616[0])) {
				audio::_dynamic_mixer_related_fn(uLocal_616[0], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(uLocal_616[1])) {
				audio::_dynamic_mixer_related_fn(uLocal_616[1], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(uLocal_616[2])) {
				audio::_dynamic_mixer_related_fn(uLocal_616[2], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(uLocal_616[3])) {
				audio::_dynamic_mixer_related_fn(uLocal_616[3], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(uLocal_616[4])) {
				audio::_dynamic_mixer_related_fn(uLocal_616[4], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(uLocal_616[5])) {
				audio::_dynamic_mixer_related_fn(uLocal_616[5], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(uLocal_616[6])) {
				audio::_dynamic_mixer_related_fn(uLocal_616[6], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (func_16(iLocal_615)) {
				audio::_dynamic_mixer_related_fn(iLocal_615, "EPSILONISM_08_NON_COMPLIANCE_HELI", 0);
			}
			audio::start_audio_scene("EPSILONISM_08_NON_COMPLIANCE");
		}
	}
	else {
		audio::stop_audio_scene("EPSILONISM_08_COMPLIANCE");
	}
}

// Position - 0x2A6FF
void func_289() {
	if (audio::is_audio_scene_active("EPSILONISM_08_COMPLIANCE")) {
		audio::stop_audio_scene("EPSILONISM_08_COMPLIANCE");
	}
}

// Position - 0x2A71A
void func_290() {
	func_298();
	func_296();
	func_293();
	func_292();
	if (iLocal_369 == 0) {
		if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
			iLocal_940 = func_283(iLocal_596, 1, 1, 5);
			ui::set_blip_scale(iLocal_940, fLocal_147);
			iLocal_369 = 1;
		}
	}
	if (iLocal_331 == 0) {
		if (gameplay::get_game_timer() > iLocal_293 + 6500) {
			if (func_78(uLocal_570[5])) {
				func_291();
			}
		}
	}
	if (iLocal_331 == 1) {
		if (gameplay::get_game_timer() > iLocal_292 + 10000 || ped::is_ped_in_vehicle(uLocal_570[5], iLocal_615, 0)) {
			iLocal_312 = 1;
		}
	}
	if (entity::is_entity_dead(iLocal_596, 0)) {
		func_24(&iLocal_940);
	}
}

// Position - 0x2A7C7
void func_291() {
	int iVar0;

	if (func_78(player::player_ped_id())) {
		ped::_0x570389D1C3DE3C6B(player::player_ped_id());
	}
	if (func_78(uLocal_570[5]) && func_16(iLocal_632) && func_16(iLocal_615)) {
		switch (iLocal_387) {
		case 0:
			ai::open_sequence_task(&iVar0);
			ai::task_look_at_entity(0, player::player_ped_id(), -1, 0, 2);
			if (func_16(iLocal_632)) {
				ai::task_follow_nav_mesh_to_coord(
					0, entity::get_offset_from_entity_in_world_coords(iLocal_632, 0f, -3.2f, 0f), 1f, -1, 0.4f, 1024,
					140.8925f);
			}
			ai::task_start_scenario_in_place(0, "WORLD_HUMAN_GUARD_STAND", 0, 1);
			ai::close_sequence_task(iVar0);
			ai::task_perform_sequence(uLocal_570[5], iVar0);
			ai::clear_sequence_task(&iVar0);
			iLocal_387 = 5;
			break;

		case 1:
			if (entity::is_entity_in_angled_area(player::player_ped_id(), -371.3996f, -88.47154f, 44.65829f, -378.7455f,
												 -85.82195f, 48.21037f, 5.75f, 0, 1, 0) &&
				cam::is_sphere_visible(-378.46f, -88.44f, 45.66f, 2f) && !entity::is_entity_on_screen(iLocal_632) &&
				ped::is_ped_facing_ped(player::player_ped_id(), iLocal_596, 120f)) {
				iLocal_309 = ped::create_synchronized_scene(-356.91f, -89.03f, 45.875f, 0f, 0f, -120f, 2);
				ai::task_synchronized_scene(uLocal_570[5], iLocal_309, "rcmepsilonism8", "grab_all_4_bags_carrier", 4f,
											-2f, 0, 0, 1148846080, 0);
				entity::play_synchronized_entity_anim(iLocal_632, iLocal_309, "grab_all_4_bags_car", "rcmepsilonism8",
													  1000f, -1.5f, 0, 1148846080);
				iLocal_387 = 2;
				entity::detach_entity(uLocal_597[0], 1, 1);
				entity::detach_entity(uLocal_597[1], 1, 1);
				entity::detach_entity(uLocal_597[2], 1, 1);
				entity::detach_entity(uLocal_597[3], 1, 1);
				entity::play_synchronized_entity_anim(uLocal_597[0], iLocal_309, "base_bag_1", "rcmepsilonism8", 1000f,
													  -1000f, 0, 1148846080);
				entity::play_synchronized_entity_anim(uLocal_597[1], iLocal_309, "base_bag_2", "rcmepsilonism8", 1000f,
													  -1000f, 0, 1148846080);
				entity::play_synchronized_entity_anim(uLocal_597[2], iLocal_309, "base_bag_3", "rcmepsilonism8", 1000f,
													  -1000f, 0, 1148846080);
				entity::play_synchronized_entity_anim(uLocal_597[3], iLocal_309, "base_bag_4", "rcmepsilonism8", 1000f,
													  -1000f, 0, 1148846080);
				ped::set_synchronized_scene_phase(iLocal_309, 0.098f);
			}
			break;

		case 2:
			if (ped::is_synchronized_scene_running(iLocal_309)) {
				if (ped::get_synchronized_scene_phase(iLocal_309) >= 0.126f &&
					ped::get_synchronized_scene_phase(iLocal_309) < 0.237f) {
					if (!entity::is_entity_attached_to_entity(uLocal_597[0], uLocal_570[5])) {
						entity::attach_entity_to_entity(uLocal_597[0], uLocal_570[5],
														ped::get_ped_bone_index(uLocal_570[5], 28422), 0.25f, 0.075f,
														-0.3f, 50f, 50f, -135f, 0, 0, 0, 0, 2, 1);
						entity::freeze_entity_position(uLocal_597[0], 0);
					}
				}
				else if (entity::does_entity_exist(uLocal_597[0])) {
					if (ped::get_synchronized_scene_phase(iLocal_309) >= 0.237f) {
						entity::detach_entity(uLocal_597[0], 1, 1);
						object::delete_object(&uLocal_597[0]);
					}
				}
				if (ped::get_synchronized_scene_phase(iLocal_309) >= 0.347f &&
					ped::get_synchronized_scene_phase(iLocal_309) < 0.455f) {
					if (!entity::is_entity_attached_to_entity(uLocal_597[1], uLocal_570[5])) {
						entity::attach_entity_to_entity(uLocal_597[1], uLocal_570[5],
														ped::get_ped_bone_index(uLocal_570[5], 28422), 0.25f, 0.075f,
														-0.3f, 50f, 50f, -135f, 0, 0, 0, 0, 2, 1);
						entity::freeze_entity_position(uLocal_597[1], 0);
					}
				}
				else if (entity::does_entity_exist(uLocal_597[1])) {
					if (ped::get_synchronized_scene_phase(iLocal_309) >= 0.455f) {
						entity::detach_entity(uLocal_597[1], 1, 1);
						object::delete_object(&uLocal_597[1]);
					}
				}
				if (ped::get_synchronized_scene_phase(iLocal_309) >= 0.563f &&
					ped::get_synchronized_scene_phase(iLocal_309) < 0.678f) {
					if (!entity::is_entity_attached_to_entity(uLocal_597[2], uLocal_570[5])) {
						entity::attach_entity_to_entity(uLocal_597[2], uLocal_570[5],
														ped::get_ped_bone_index(uLocal_570[5], 28422), 0.25f, 0.075f,
														-0.3f, 50f, 50f, -135f, 0, 0, 0, 0, 2, 1);
						entity::freeze_entity_position(uLocal_597[2], 0);
					}
				}
				else if (entity::does_entity_exist(uLocal_597[2])) {
					if (ped::get_synchronized_scene_phase(iLocal_309) >= 0.678f) {
						entity::detach_entity(uLocal_597[2], 1, 1);
						object::delete_object(&uLocal_597[2]);
					}
				}
				if (ped::get_synchronized_scene_phase(iLocal_309) >= 0.789f &&
					ped::get_synchronized_scene_phase(iLocal_309) < 0.901f) {
					if (!entity::is_entity_attached_to_entity(uLocal_597[3], uLocal_570[5])) {
						entity::attach_entity_to_entity(uLocal_597[3], uLocal_570[5],
														ped::get_ped_bone_index(uLocal_570[5], 28422), 0.25f, 0.075f,
														-0.3f, 50f, 50f, -135f, 0, 0, 0, 0, 2, 1);
						entity::freeze_entity_position(uLocal_597[3], 0);
						iLocal_336 = 1;
					}
				}
				else if (entity::does_entity_exist(uLocal_597[3])) {
					if (ped::get_synchronized_scene_phase(iLocal_309) >= 0.901f) {
					}
				}
				if (ped::get_synchronized_scene_phase(iLocal_309) >= 0.903f) {
					if (entity::does_entity_exist(uLocal_597[3])) {
						entity::detach_entity(uLocal_597[3], 1, 1);
						object::delete_object(&uLocal_597[3]);
					}
					ai::clear_ped_tasks(uLocal_570[5]);
					ped::set_ped_keep_task(uLocal_570[5], 1);
					ai::task_enter_vehicle(uLocal_570[5], iLocal_615, 20000, 1, 1f, 1, 0);
					iLocal_292 = gameplay::get_game_timer();
					iLocal_331 = 1;
					iLocal_387 = 5;
				}
			}
			break;

		case 3:
			if (func_277(uLocal_570[5], entity::get_offset_from_entity_in_world_coords(iLocal_615, -1.5f, 0f, 0f),
						 0.5f) &&
				ai::get_script_task_status(uLocal_570[5], 713668775) != 1 &&
				ai::get_script_task_status(uLocal_570[5], 713668775) != 0) {
				ai::stop_anim_task(uLocal_570[5], "rcmepsilonism8", "bag_handler_walk", -1056964608);
				ai::task_play_anim(uLocal_570[5], "rcmepsilonism8", "bag_handler_load_walk_away_left", 8f, -8f, -1,
								   639044, 0, 0, 0, 0);
				iLocal_387 = 4;
			}
			else if (ai::get_script_task_status(uLocal_570[5], 713668775) != 1 &&
					 ai::get_script_task_status(uLocal_570[5], 713668775) != 0) {
				ai::task_follow_nav_mesh_to_coord(
					uLocal_570[5], entity::get_offset_from_entity_in_world_coords(iLocal_615, -1.5f, 0f, 0f), 1f, -1,
					0.4f, 0, entity::get_entity_heading(iLocal_615) - 90f);
			}
			break;

		case 4:
			if (entity::is_entity_playing_anim(uLocal_570[5], "rcmepsilonism8", "bag_handler_load_walk_away_left", 3) &&
				entity::get_entity_anim_current_time(uLocal_570[5], "rcmepsilonism8",
													 "bag_handler_load_walk_away_left") > 0.5f) {
				entity::detach_entity(uLocal_597[iLocal_304], 1, 1);
			}
			if (!entity::is_entity_playing_anim(uLocal_570[5], "rcmepsilonism8", "bag_handler_load_walk_away_left",
												3) ||
				entity::get_entity_anim_current_time(uLocal_570[5], "rcmepsilonism8",
													 "bag_handler_load_walk_away_left") > 0.8f) {
				func_14(&uLocal_597[iLocal_304]);
				ped::clear_ped_alternate_movement_anim(uLocal_570[5], 1, -1000f);
				ped::clear_ped_alternate_movement_anim(uLocal_570[5], 0, -1000f);
				iLocal_304++;
				if (iLocal_304 == iLocal_150) {
					ai::clear_ped_tasks(uLocal_570[5]);
					ped::set_ped_keep_task(uLocal_570[5], 1);
					ai::task_enter_vehicle(uLocal_570[5], iLocal_615, 20000, 1, 1f, 1, 0);
					iLocal_292 = gameplay::get_game_timer();
					iLocal_331 = 1;
					iLocal_387 = 5;
				}
				else {
					ai::task_follow_nav_mesh_to_coord(
						uLocal_570[5], entity::get_offset_from_entity_in_world_coords(iLocal_632, 0f, -3.2f, 0f), 1f,
						-1, 0.3f, 0, entity::get_entity_heading(iLocal_632));
					iLocal_387 = 1;
				}
			}
			break;

		case 5: break;
		}
	}
}

// Position - 0x2AF93
void func_292() {
	if (iLocal_362 == 1) {
		if (func_78(iLocal_596)) {
			if (!ped::is_ped_facing_ped(player::player_ped_id(), iLocal_596, 90f) ||
				func_55(player::player_ped_id(), iLocal_596, 50f, 1)) {
				ai::task_clear_look_at(player::player_ped_id());
			}
		}
	}
}

// Position - 0x2AFDF
void func_293() {
	float fVar0;
	var uVar1;
	struct<6> Var2;
	struct<6> Var8;

	if (iLocal_336 == 0) {
		if (iLocal_298 == 0) {
			vLocal_218 = {entity::get_entity_coords(iLocal_632, 1)};
			if (vLocal_218.x < vLocal_215.x - 0.3f || vLocal_218.x > vLocal_215.x + 0.3f ||
				vLocal_218.y < vLocal_215.y - 0.3f || vLocal_218.y > vLocal_215.y + 0.3f) {
				iLocal_298 = 1;
				iLocal_296 = gameplay::get_game_timer();
			}
		}
		if (iLocal_298 == 1) {
			if (gameplay::get_game_timer() > iLocal_296 + 3500 &&
				ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iLocal_632)) {
				iLocal_311 = 1;
			}
		}
	}
	if (func_78(iLocal_596) && func_17(iLocal_633)) {
		if (func_55(iLocal_596, iLocal_633, 15f, 1)) {
			if (!ped::is_ped_headtracking_entity(iLocal_596, iLocal_633)) {
				ai::task_look_at_entity(iLocal_596, iLocal_633, -1, 0, 2);
			}
		}
		if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
			if (func_55(iLocal_596, iLocal_633, 5f, 1)) {
				if (iLocal_340 == 0) {
					if (ai::get_script_task_status(iLocal_596, 242628503) != 1) {
						ped::set_ped_can_ragdoll_from_player_impact(iLocal_596, 0);
						ai::open_sequence_task(&iLocal_944);
						ai::task_turn_ped_to_face_entity(0, iLocal_633, 0);
						ai::task_set_blocking_of_non_temporary_events(0, 1);
						ai::task_play_anim(0, "rcmepsilonism8", "worship_enter", 2f, -2f, -1, 786432, 0, 0, 0, 0);
						ai::task_play_anim(0, "rcmepsilonism8", "worship_base", 2f, -2f, -1, 786432, 0, 0, 0, 0);
						ai::task_play_anim(0, "rcmepsilonism8", "worship_idle_a", 2f, -2f, -1, 786432, 0, 0, 0, 0);
						ai::task_play_anim(0, "rcmepsilonism8", "worship_base", 2f, -2f, -1, 786433, 0, 0, 0, 0);
						ai::close_sequence_task(iLocal_944);
						ai::task_perform_sequence(iLocal_596, iLocal_944);
						ai::clear_sequence_task(&iLocal_944);
						unk1::_0x293220DA1B46CEBC(5f, 10f, 1);
						iLocal_340 = 1;
					}
				}
				iLocal_338 = 1;
				if (iLocal_334 == 1) {
					if (iLocal_366 == 0) {
						if (!func_287()) {
							if (func_276(&uLocal_390, "EPS8AU", "EPS8_PRAY", 7, 0, 0, 0)) {
								iLocal_362 = 0;
								iLocal_366 = 1;
								iLocal_289 = gameplay::get_game_timer();
								ai::task_look_at_entity(player::player_ped_id(), iLocal_633, 10000, 0, 2);
							}
						}
					}
				}
			}
			if (iLocal_338 == 0) {
				if (func_55(iLocal_596, player::player_ped_id(), 9f, 1)) {
					if (!func_79("EPS8_16", 0, 0) && !func_79("EPS8_11", 0, 0) &&
						!func_55(iLocal_596, iLocal_615, 8f, 1)) {
						if (!func_287()) {
							if (iLocal_288 == 0) {
								if (func_276(&uLocal_390, "EPS8AU", "EPS8_E1", 7, 0, 0, 0)) {
									unk1::_0x293220DA1B46CEBC(5f, 10f, 1);
									iLocal_288 = 3;
								}
							}
						}
					}
				}
				if (iLocal_383 == 0) {
					if (entity::is_entity_playing_anim(iLocal_596, "rcmepsilonism8", "jump_off_heli", 3) &&
						entity::find_anim_event_phase("rcmepsilonism8", "jump_off_heli", "WalkInterruptible", &fVar0,
													  &uVar1) &&
						entity::get_entity_anim_current_time(iLocal_596, "rcmepsilonism8", "jump_off_heli") >= fVar0) {
						if (!ai::is_waypoint_playback_going_on_for_ped(iLocal_596)) {
							ped::force_ped_motion_state(iLocal_596, -668482597, 0, 0, 0);
							ped::set_ped_min_move_blend_ratio(iLocal_596, 1f);
							ai::task_go_straight_to_coord(iLocal_596, -377.228f, -87.0252f, 44.6583f, 1f, 20000,
														  1193033728, 1056964608);
							iLocal_383 = 1;
							iLocal_310 = gameplay::get_game_timer();
						}
					}
					else if (!entity::is_entity_playing_anim(iLocal_596, "rcmepsilonism8", "jump_off_heli", 3)) {
						if (!ai::is_waypoint_playback_going_on_for_ped(iLocal_596)) {
							ped::force_ped_motion_state(iLocal_596, -668482597, 0, 0, 0);
							ped::set_ped_min_move_blend_ratio(iLocal_596, 1f);
							ai::task_go_straight_to_coord(iLocal_596, -377.228f, -87.0252f, 44.6583f, 1f, 20000,
														  1193033728, 1056964608);
							iLocal_383 = 1;
							iLocal_310 = gameplay::get_game_timer();
						}
					}
				}
				if (iLocal_383 && gameplay::get_game_timer() > iLocal_310 + 2000) {
					if (func_55(iLocal_596, player::player_ped_id(), 6f, 1)) {
						if (!ai::is_waypoint_playback_going_on_for_ped(iLocal_596)) {
							ai::task_follow_waypoint_recording(iLocal_596, "Eps8EPED", 0, 8, -1);
						}
					}
					if (func_55(iLocal_596, player::player_ped_id(), 9f, 1) &&
						!func_55(iLocal_596, player::player_ped_id(), 6f, 1)) {
						if (!ped::is_ped_headtracking_ped(iLocal_596, player::player_ped_id())) {
							ai::task_look_at_entity(iLocal_596, player::player_ped_id(), -1, 0, 2);
						}
						if (ai::get_script_task_status(iLocal_596, -875674219) != 1) {
							if (!ped::is_ped_facing_ped(iLocal_596, player::player_ped_id(), 20f)) {
								Var2 = {func_295()};
								if (!gameplay::are_strings_equal(&Var2, "EPS8_E1")) {
									ai::task_turn_ped_to_face_entity(iLocal_596, player::player_ped_id(), 0);
								}
							}
							else if (ai::get_script_task_status(iLocal_596, 1435919172) == 1) {
								ai::clear_ped_tasks(iLocal_596);
							}
						}
					}
					if (!func_55(iLocal_596, player::player_ped_id(), 9f, 1)) {
						if (ai::get_script_task_status(iLocal_596, 1227113341) != 1) {
							ai::task_look_at_entity(iLocal_596, player::player_ped_id(), -1, 0, 2);
							ai::task_go_to_entity(iLocal_596, player::player_ped_id(), 20000, 6.1f, 1f, 1073741824, 0);
						}
					}
				}
			}
		}
		else if (iLocal_336 == 0 && ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
			Var8 = {func_295()};
			if (!gameplay::is_string_null_or_empty(&Var8)) {
				if (gameplay::are_strings_equal(&Var8, "EPS8_E1")) {
					func_294();
				}
			}
			if (iLocal_277 == 0) {
				ai::task_look_at_entity(iLocal_596, player::player_ped_id(), -1, 0, 2);
				if (func_55(iLocal_596, iLocal_632, 7f, 1)) {
					if (ai::get_script_task_status(iLocal_596, -875674219) != 1) {
						ai::task_turn_ped_to_face_entity(iLocal_596, player::player_ped_id(), -1);
					}
					if (!func_79("EPS8_16", 0, 0) && !func_79("EPS8_11", 0, 0)) {
						if (!func_287()) {
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_SEC", "EPS8_SEC_1", 7, 0, 0)) {
								iLocal_277 = 1;
								iLocal_276 = gameplay::get_game_timer();
							}
						}
					}
				}
				else if (ai::get_script_task_status(iLocal_596, 713668775) != 1) {
					ai::task_follow_nav_mesh_to_coord(
						iLocal_596, entity::get_offset_from_entity_in_world_coords(iLocal_632, 0f, 2.5f, 0f), 2f, 20000,
						4.5f, 0, 1193033728);
				}
			}
			else if (iLocal_277 == 1) {
				if (ai::get_script_task_status(iLocal_596, -875674219) != 1) {
					ai::task_turn_ped_to_face_entity(iLocal_596, player::player_ped_id(), -1);
				}
				if (func_78(uLocal_570[5])) {
					if (gameplay::get_game_timer() > iLocal_276 + 300) {
						if (ai::get_script_task_status(uLocal_570[5], -875674219) != 1) {
							ai::task_turn_ped_to_face_entity(uLocal_570[5], player::player_ped_id(), -1);
						}
					}
				}
				if (gameplay::get_game_timer() > iLocal_276 + 6000) {
					if (func_63(&uLocal_390, "EPS8AU", "EPS8_SEC", "EPS8_SEC_2", 7, 0, 0)) {
						iLocal_277 = 2;
						iLocal_276 = gameplay::get_game_timer();
					}
				}
			}
			else if (iLocal_277 == 2) {
				if (ai::get_script_task_status(iLocal_596, 1630799643) != 1) {
					weapon::give_weapon_to_ped(iLocal_596, joaat("weapon_combatpistol"), -1, 1, 1);
					weapon::give_weapon_component_to_ped(iLocal_596, joaat("weapon_combatpistol"),
														 joaat("component_at_pi_flsh"));
					ai::task_aim_gun_at_entity(iLocal_596, player::player_ped_id(), -1, 0);
				}
				if (gameplay::get_game_timer() > iLocal_276 + 10000) {
					iLocal_277 = 3;
					iLocal_276 = gameplay::get_game_timer();
				}
			}
			else if (iLocal_277 == 3) {
				if (!ped::is_ped_in_combat(iLocal_596, player::player_ped_id())) {
					if (ai::get_script_task_status(iLocal_596, 780511057) != 1) {
						ai::task_combat_ped(iLocal_596, player::player_ped_id(), 0, 16);
					}
				}
			}
		}
	}
}

// Position - 0x2B6DE
void func_294() {
	Global_14611 = 0;
	func_76();
}

// Position - 0x2B6EE
struct<6> func_295() {
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4) {
		return Global_15364;
	}
	return Var0;
}

//Position - 0x2B712
void func_296()
{
	bool bVar0;

	bVar0 = false;
	if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), -358.0764f,
											  -88.2705f, 44.5901f, 1) >
		gameplay::get_distance_between_coords(entity::get_entity_coords(uLocal_580[0], 1), -358.0764f, -88.2705f,
											  44.5901f, 1)) {
		fLocal_252 = 40f - func_285(uLocal_580[0], iLocal_632, 1);
		if (fLocal_252 > 0f) {
			fLocal_252 /= 2.5f;
		}
		else {
			fLocal_252 = 1E-06f;
		}
		if (fLocal_252 < 4f) {
			fLocal_252 = 1E-06f;
		}
		if (fLocal_252 > 8f) {
			fLocal_252 = -1f;
		}
		if (fLocal_252 < 3f) {
			bVar0 = true;
		}
		if (vehicle::is_playback_going_on_for_vehicle(iLocal_615)) {
			if (vehicle::get_time_position_in_recording(iLocal_615) < 47043.75f) {
				vehicle::set_playback_speed(iLocal_615, 1.25f);
			}
		}
	}
	else {
		fLocal_252 = -1f;
		if (vehicle::is_playback_going_on_for_vehicle(iLocal_615)) {
			if (vehicle::get_time_position_in_recording(iLocal_615) < 47043.75f) {
				vehicle::set_playback_speed(iLocal_615, 1.5f);
			}
		}
	}
	if (func_78(uLocal_580[0])) {
		if (func_17(uLocal_616[0])) {
			if (ped::is_ped_sitting_in_vehicle(uLocal_580[0], uLocal_616[0])) {
				if (fLocal_252 != -1f) {
					if (bVar0) {
						vehicle::set_vehicle_brake_lights(uLocal_616[0], 1);
					}
					else {
						vehicle::set_vehicle_brake_lights(uLocal_616[0], 0);
					}
				}
				if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
					if (iLocal_568 == 3 || iLocal_568 == 4 || iLocal_568 == 5) {
						if (ai::is_waypoint_playback_going_on_for_vehicle(uLocal_616[0])) {
							ai::vehicle_waypoint_playback_pause(uLocal_616[0]);
						}
					}
					else if (entity::is_entity_in_angled_area(uLocal_580[0], -345.6437f, -85.66679f, 53.65821f,
															  -378.4535f, -73.82299f, 43.15821f, 18.25f, 0, 1, 0)) {
						if (!ai::is_waypoint_playback_going_on_for_vehicle(uLocal_616[0]) || !iLocal_385) {
							ai::task_vehicle_follow_waypoint_recording(uLocal_580[0], uLocal_616[0], "Eps8LS01", 786599,
																	   0, 8, -1, fLocal_252, 0, 1073741824);
							iLocal_385 = 1;
						}
						else {
							func_297();
						}
					}
					else if (!ai::is_waypoint_playback_going_on_for_vehicle(uLocal_616[0])) {
						ai::task_vehicle_follow_waypoint_recording(uLocal_580[0], uLocal_616[0], "Eps8LS01", 786468, 0,
																   8, -1, fLocal_252, 0, 1073741824);
					}
					else {
						func_297();
					}
				}
				else if (entity::is_entity_in_angled_area(uLocal_580[0], -345.6437f, -85.66679f, 53.65821f, -378.4535f,
														  -73.82299f, 43.15821f, 18.25f, 0, 1, 0)) {
					if (!ai::is_waypoint_playback_going_on_for_vehicle(uLocal_616[0]) || !iLocal_385) {
						ai::task_vehicle_follow_waypoint_recording(uLocal_580[0], uLocal_616[0], "Eps8LS01", 786599, 0,
																   8, -1, fLocal_252, 0, 1073741824);
						iLocal_385 = 1;
					}
					else {
						func_297();
					}
				}
				else if (!ai::is_waypoint_playback_going_on_for_vehicle(uLocal_616[0])) {
					ai::task_vehicle_follow_waypoint_recording(uLocal_580[0], uLocal_616[0], "Eps8LS01", 786468, 0, 8,
															   -1, fLocal_252, 0, 1073741824);
				}
				else {
					func_297();
				}
			}
		}
	}
	vehicle::set_vehicle_indicator_lights(uLocal_616[0], 0, 0);
	vehicle::set_vehicle_indicator_lights(uLocal_616[0], 1, 0);
	if (entity::is_entity_in_angled_area(uLocal_580[0], -673.6242f, 46.50732f, 45.42094f, -657.8456f, 45.62354f,
										 35.89909f, 7f, 0, 1, 0)) {
		vehicle::set_vehicle_indicator_lights(uLocal_616[0], 0, 1);
	}
	if (entity::is_entity_in_angled_area(uLocal_580[0], -659.3698f, 21.0666f, 45.16937f, -641.9688f, -12.16242f,
										 35.58978f, 14f, 0, 1, 0)) {
		vehicle::set_vehicle_indicator_lights(uLocal_616[0], 1, 1);
	}
	if (entity::is_entity_in_angled_area(uLocal_580[0], -429.661f, -7.262719f, 52.31787f, -394.0083f, -12.02923f,
										 41.92323f, 14f, 0, 1, 0)) {
		vehicle::set_vehicle_indicator_lights(uLocal_616[0], 0, 1);
	}
	if (entity::is_entity_in_angled_area(uLocal_580[0], -405.9864f, -54.69353f, 51.0304f, -397.1461f, -36.4476f,
										 41.66385f, 14f, 0, 1, 0)) {
		vehicle::set_vehicle_indicator_lights(uLocal_616[0], 1, 1);
	}
}

// Position - 0x2BB1F
void func_297() {
	if (fLocal_252 == -1f) {
		ai::vehicle_waypoint_playback_use_default_speed(uLocal_616[0]);
	}
	else if (entity::get_entity_speed(uLocal_616[0]) > fLocal_252) {
		ai::vehicle_waypoint_playback_override_speed(uLocal_616[0], fLocal_252);
	}
	else {
		ai::vehicle_waypoint_playback_use_default_speed(uLocal_616[0]);
	}
}

// Position - 0x2BB64
void func_298() {
	struct<6> Var0;
	struct<6> Var6;

	if (func_17(iLocal_632)) {
		vehicle::_0xBE5C1255A1830FF5(iLocal_632, 1);
	}
	if (func_17(uLocal_616[0])) {
		if (iLocal_339 == 0) {
			if (gameplay::get_game_timer() > iLocal_291 + 5000 ||
				!entity::is_entity_in_angled_area(uLocal_616[0], -664.4363f, 53.47593f, 31.86062f, -727.7729f,
												  24.45449f, 46.73167f, 22.5f, 0, 1, 0)) {
				iLocal_339 = 1;
			}
		}
		vehicle::_0xBE5C1255A1830FF5(uLocal_616[0], 1);
		if (iLocal_568 == 3 || iLocal_568 == 4) {
			if (gameplay::get_game_timer() > iLocal_294 + 4000) {
				if (entity::has_entity_been_damaged_by_entity(uLocal_616[0], player::player_ped_id(), 1)) {
					if (iLocal_275 < 2) {
						iLocal_275++;
						iLocal_294 = gameplay::get_game_timer();
						entity::clear_entity_last_damage_entity(uLocal_616[0]);
					}
					else {
						Var0 = {func_300()};
						if (!gameplay::are_strings_equal(&Var0, "EPS8_LS_13")) {
							iLocal_275++;
							iLocal_294 = gameplay::get_game_timer();
							entity::clear_entity_last_damage_entity(uLocal_616[0]);
						}
						else {
							iLocal_275 = 2;
							entity::clear_entity_last_damage_entity(uLocal_616[0]);
						}
					}
				}
			}
			if (iLocal_275 > 2) {
				Var6 = {func_300()};
				if (!gameplay::are_strings_equal(&Var6, "EPS8_LS_13")) {
					iLocal_311 = 1;
				}
			}
		}
	}
	if (func_17(uLocal_616[2])) {
		vehicle::_0xBE5C1255A1830FF5(uLocal_616[2], 1);
	}
	if (func_17(uLocal_616[3])) {
		vehicle::_0xBE5C1255A1830FF5(uLocal_616[3], 1);
	}
	if (func_78(uLocal_580[0])) {
		if (!func_55(iLocal_632, uLocal_580[0], 50f, 1)) {
			if (iLocal_328 == 0) {
				iLocal_311 = 1;
			}
		}
	}
	if (entity::is_entity_in_angled_area(player::player_ped_id(), -366.3542f, -107.6003f, 31.93177f, -355.0581f,
										 -74.91284f, 55.84066f, 85.25f, 0, 1, 0)) {
		if (ped::is_ped_shooting(player::player_ped_id())) {
			if (weapon::get_selected_ped_weapon(player::player_ped_id()) == joaat("weapon_stickybomb") ||
				weapon::get_selected_ped_weapon(player::player_ped_id()) == joaat("weapon_petrolcan")) {
				iLocal_311 = 1;
			}
		}
	}
	if (iLocal_328 == 0) {
		if (entity::is_entity_in_angled_area(player::player_ped_id(), -366.3542f, -107.6003f, 31.93177f, -355.0581f,
											 -74.91284f, 55.84066f, 85.25f, 0, 1, 0)) {
			iLocal_328 = 1;
		}
	}
	else if (iLocal_568 == 7) {
		if (func_17(iLocal_633) &&
			entity::is_entity_in_angled_area(player::player_ped_id(), -383.1558f, -102.7442f, 37.43079f, -371.1183f,
											 -109.4619f, 40.42916f, 13f, 0, 1, 0) &&
			!ped::is_ped_ragdoll(player::player_ped_id())) {
			if (func_78(iLocal_596)) {
				if (iLocal_338 == 1) {
					if (iLocal_340 == 1) {
						if (ai::get_script_task_status(iLocal_596, 242628503) == 1 && iLocal_366 == 1 &&
							gameplay::get_game_timer() > iLocal_289 + 3200 && !ped::is_ped_ragdoll(iLocal_596) &&
							!entity::has_entity_been_damaged_by_entity(iLocal_596, player::player_ped_id(), 1)) {
							if (entity::is_entity_playing_anim(iLocal_596, "rcmepsilonism8", "worship_base", 3) ||
								entity::is_entity_playing_anim(iLocal_596, "rcmepsilonism8", "worship_idle_a", 3)) {
								ai::task_play_anim(iLocal_596, "rcmepsilonism8", "worship_exit", 2f, -2f, -1, 819200, 0,
												   0, 0, 0);
								iLocal_312 = 1;
							}
						}
					}
				}
				else if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_633, 1)) {
					if (iLocal_297 == 0) {
						iLocal_312 = 1;
					}
				}
			}
			iLocal_334 = 1;
		}
		if (iLocal_297 == 0) {
			if (!entity::is_entity_in_angled_area(player::player_ped_id(), -430.6594f, -63.76026f, 99.82037f,
												  -257.6355f, -120.5171f, 37.3026f, 170.5f, 0, 1, 0)) {
				iLocal_334 = 0;
				iLocal_312 = 1;
			}
		}
	}
	if (iLocal_328 == 1) {
		if (iLocal_297 == 0) {
			if (!entity::is_entity_in_angled_area(player::player_ped_id(), -366.3542f, -107.6003f, 31.93177f,
												  -355.0581f, -74.91284f, 55.84066f, 85.25f, 0, 1, 0)) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
					if (iLocal_334 == 0) {
						iLocal_296 = gameplay::get_game_timer();
						iLocal_297 = 1;
					}
				}
			}
		}
		if (iLocal_297 == 1) {
			if (gameplay::get_game_timer() > iLocal_296 + 1500) {
				iLocal_311 = 1;
			}
		}
	}
	if (func_17(iLocal_615)) {
		if (func_78(uLocal_570[5])) {
			if (ped::is_ped_in_vehicle(uLocal_570[5], iLocal_615, 0)) {
				ped::set_blocking_of_non_temporary_events(uLocal_570[5], 1);
				ped::set_ped_combat_attributes(uLocal_570[5], 3, 0);
			}
			else {
				ped::set_blocking_of_non_temporary_events(uLocal_570[5], 0);
				ped::set_ped_combat_attributes(uLocal_570[5], 3, 1);
				ped::set_ped_combat_attributes(uLocal_570[5], 1, 0);
			}
		}
		if (func_78(iLocal_578)) {
			if (ped::is_ped_in_vehicle(iLocal_578, iLocal_615, 0)) {
				ped::set_blocking_of_non_temporary_events(iLocal_578, 1);
				ped::set_ped_combat_attributes(iLocal_578, 3, 0);
			}
			else {
				ped::set_blocking_of_non_temporary_events(iLocal_578, 0);
				ped::set_ped_combat_attributes(iLocal_578, 3, 1);
				ped::set_ped_combat_attributes(iLocal_578, 1, 0);
			}
		}
		if (func_78(iLocal_596)) {
			if (ped::is_ped_in_vehicle(iLocal_596, iLocal_615, 0)) {
				ped::set_blocking_of_non_temporary_events(iLocal_596, 1);
				ped::set_ped_combat_attributes(iLocal_596, 3, 0);
			}
			else {
				ped::set_blocking_of_non_temporary_events(iLocal_596, 0);
				ped::set_ped_combat_attributes(iLocal_596, 3, 1);
				ped::set_ped_combat_attributes(iLocal_596, 1, 0);
			}
		}
		if (func_78(iLocal_579)) {
			if (ped::is_ped_in_vehicle(iLocal_579, iLocal_615, 0)) {
				ped::set_blocking_of_non_temporary_events(iLocal_579, 1);
				ped::set_ped_combat_attributes(iLocal_579, 3, 0);
			}
			else {
				ped::set_blocking_of_non_temporary_events(iLocal_579, 0);
				ped::set_ped_combat_attributes(iLocal_579, 3, 1);
				ped::set_ped_combat_attributes(iLocal_579, 1, 0);
			}
		}
		if (vehicle::is_playback_going_on_for_vehicle(iLocal_615)) {
			if (vehicle::get_time_position_in_recording(iLocal_615) >= 47043.75f) {
				vehicle::set_playback_speed(iLocal_615, 0f);
			}
		}
	}
	if (func_78(uLocal_580[3])) {
		if (func_17(uLocal_616[3])) {
			if (func_17(iLocal_632)) {
				if (entity::is_entity_at_coord(uLocal_580[3], -403.493f, -39.7956f, 45.1741f, 8f, 8f, 8f, 0, 1, 0)) {
					iLocal_363 = 0;
					if (ai::is_waypoint_playback_going_on_for_vehicle(uLocal_616[3])) {
						ai::vehicle_waypoint_playback_pause(uLocal_616[3]);
					}
					if (ai::get_script_task_status(uLocal_580[3], -1273030092) == 1) {
						ai::task_vehicle_temp_action(uLocal_580[3], uLocal_616[3], 24, -1);
					}
				}
				else {
					if (entity::is_entity_at_coord(player::player_ped_id(), -658.9627f, 46.1624f, 40.1914f, 4f, 4f, 5f,
												   0, 1, 0)) {
						if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
							if (iLocal_363 == 0) {
								ai::task_vehicle_follow_waypoint_recording(uLocal_580[3], uLocal_616[3], "Eps8LS01",
																		   786468, 18, 0, -1, 40f, 0, 1073741824);
								iLocal_363 = 1;
							}
						}
					}
					if (iLocal_363 == 1) {
						if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
							if (entity::is_entity_in_angled_area(uLocal_580[3], -431.31f, -13.28864f, 44.0877f,
																 -391.9005f, -16.8117f, 49.91203f, 33.75f, 0, 1, 0)) {
								if (!ai::is_waypoint_playback_going_on_for_vehicle(uLocal_616[3])) {
									ai::task_vehicle_follow_waypoint_recording(uLocal_580[3], uLocal_616[3], "Eps8LS01",
																			   786469, 18, 8, -1, 40f, 0, 1073741824);
								}
							}
							else if (!func_55(player::player_ped_id(), uLocal_580[3], 30f, 1)) {
								if (!ai::is_waypoint_playback_going_on_for_vehicle(uLocal_616[3])) {
									ai::task_vehicle_follow_waypoint_recording(uLocal_580[3], uLocal_616[3], "Eps8LS01",
																			   786468, 18, 8, -1, 40f, 0, 1073741824);
								}
							}
							else if (ai::get_script_task_status(uLocal_580[3], -1273030092) != 1) {
								ai::_task_vehicle_follow(uLocal_580[3], uLocal_616[3], iLocal_632, 40f, 262144, 10);
							}
						}
						else if (ai::get_script_task_status(uLocal_580[3], -1273030092) != 1) {
							ai::_task_vehicle_follow(uLocal_580[3], uLocal_616[3], iLocal_632, 40f, 262144, 10);
						}
					}
				}
			}
		}
	}
	if (func_78(uLocal_580[iLocal_256])) {
		if (ped::is_ped_in_combat(uLocal_580[iLocal_256], player::player_ped_id())) {
			iLocal_311 = 1;
		}
	}
	if (func_78(uLocal_588[iLocal_256])) {
		if (ped::is_ped_in_combat(uLocal_588[iLocal_256], player::player_ped_id())) {
			iLocal_311 = 1;
		}
	}
	if (func_78(uLocal_570[iLocal_256])) {
		if (ped::is_ped_in_combat(uLocal_570[iLocal_256], player::player_ped_id())) {
			iLocal_311 = 1;
		}
		else if (iLocal_568 == 7) {
			if (ped::is_ped_ragdoll(uLocal_570[iLocal_256])) {
				if (entity::is_entity_in_angled_area(uLocal_570[iLocal_256], -381.8959f, -98.08368f, 37.74649f,
													 -378.5122f, -88.64344f, 46.51857f, 2.4f, 0, 1, 0)) {
					iLocal_311 = 1;
				}
			}
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (iLocal_256 == 5) {
					if (iLocal_324 == 0) {
						if (func_55(uLocal_570[5], player::player_ped_id(), 4.5f, 1)) {
							audio::_play_ambient_speech_with_voice(uLocal_570[5], "EPS8_ANAA", "EPSGUARD2",
																   "SPEECH_PARAMS_FORCE", 0);
							iLocal_324 = 1;
						}
					}
				}
				if (iLocal_256 == 3) {
					if (iLocal_325 == 0) {
						if (func_55(uLocal_570[3], player::player_ped_id(), 5f, 1)) {
							audio::_play_ambient_speech_with_voice(uLocal_570[3], "EPS8_AOAA", "EPSGUARD7",
																   "SPEECH_PARAMS_FORCE", 0);
							ai::task_play_anim(uLocal_570[3], "rcmepsilonism8", "security_greet", 2f, -2f, -1, 32, 0.2f,
											   1, 0, 0);
							iLocal_325 = 1;
						}
					}
				}
				if (iLocal_256 == 4) {
					if (iLocal_326 == 0) {
						if (func_55(uLocal_570[4], player::player_ped_id(), 5f, 1)) {
							audio::_play_ambient_speech_with_voice(uLocal_570[4], "EPS8_APAA", "EPSGUARD8",
																   "SPEECH_PARAMS_FORCE", 0);
							ai::task_play_anim(uLocal_570[4], "rcmepsilonism8", "security_greet", 2f, -2f, -1, 32, 0.2f,
											   1, 0, 0);
							iLocal_326 = 1;
						}
					}
				}
			}
		}
	}
	if (func_78(iLocal_578)) {
		if (player::is_player_free_aiming_at_entity(player::player_id(), iLocal_578) ||
			player::is_player_targetting_entity(player::player_id(), iLocal_578)) {
			if (ped::is_ped_facing_ped(iLocal_578, player::player_ped_id(), 90f)) {
				iLocal_311 = 1;
			}
		}
		if (ped::is_ped_in_combat(iLocal_578, player::player_ped_id())) {
			iLocal_311 = 1;
		}
	}
	if (func_78(iLocal_579)) {
		if (ped::is_ped_in_combat(iLocal_579, player::player_ped_id())) {
			iLocal_311 = 1;
		}
	}
	if (func_78(iLocal_596)) {
		if (ped::is_ped_in_combat(iLocal_596, player::player_ped_id())) {
			iLocal_311 = 1;
		}
		if (entity::has_entity_been_damaged_by_entity(iLocal_596, player::player_ped_id(), 1)) {
			iLocal_311 = 1;
		}
		if (ped::is_ped_ragdoll(iLocal_596)) {
			if (entity::is_entity_in_angled_area(iLocal_596, -381.8959f, -98.08368f, 37.74649f, -378.5122f, -88.64344f,
												 46.51857f, 2.4f, 0, 1, 0)) {
				iLocal_311 = 1;
			}
		}
	}
	else {
		if (func_78(uLocal_570[0])) {
			if (func_55(uLocal_570[0], player::player_ped_id(), 100f, 1)) {
				iLocal_927[0] = func_283(uLocal_570[0], 1, 0, 3);
				ui::set_blip_scale(iLocal_927[0], fLocal_147);
				ai::task_combat_ped(uLocal_570[0], player::player_ped_id(), 0, 16);
				iLocal_257++;
			}
		}
		if (func_78(uLocal_570[2])) {
			if (func_55(uLocal_570[2], player::player_ped_id(), 100f, 1)) {
				iLocal_927[2] = func_283(uLocal_570[2], 1, 0, 3);
				ui::set_blip_scale(iLocal_927[2], fLocal_147);
				ai::task_combat_ped(uLocal_570[2], player::player_ped_id(), 0, 16);
				iLocal_257++;
			}
		}
		if (func_78(uLocal_570[3])) {
			if (func_55(uLocal_570[3], player::player_ped_id(), 100f, 1)) {
				iLocal_927[3] = func_283(uLocal_570[3], 1, 0, 3);
				ui::set_blip_scale(iLocal_927[3], fLocal_147);
				ai::task_combat_ped(uLocal_570[3], player::player_ped_id(), 0, 16);
				iLocal_257++;
			}
		}
		if (func_78(uLocal_570[4])) {
			if (func_55(uLocal_570[4], player::player_ped_id(), 100f, 1)) {
				iLocal_927[4] = func_283(uLocal_570[4], 1, 0, 3);
				ui::set_blip_scale(iLocal_927[4], fLocal_147);
				ai::task_combat_ped(uLocal_570[4], player::player_ped_id(), 0, 16);
				iLocal_257++;
			}
		}
		if (func_78(uLocal_570[5])) {
			if (func_55(uLocal_570[5], player::player_ped_id(), 100f, 1)) {
				iLocal_927[5] = func_283(uLocal_570[5], 1, 0, 3);
				ui::set_blip_scale(iLocal_927[5], fLocal_147);
				ai::task_combat_ped(uLocal_570[5], player::player_ped_id(), 0, 16);
				iLocal_257++;
			}
		}
		iLocal_311 = 1;
	}
	if (entity::is_entity_dead(uLocal_570[0], 0) || entity::is_entity_dead(uLocal_570[2], 0) ||
		entity::is_entity_dead(uLocal_570[3], 0) || entity::is_entity_dead(uLocal_570[4], 0) ||
		entity::is_entity_dead(uLocal_570[5], 0) || entity::is_entity_dead(iLocal_578, 0) ||
		entity::is_entity_dead(iLocal_579, 0) || ped::is_ped_being_jacked(iLocal_578) ||
		ped::is_ped_being_jacked(iLocal_579)) {
		iLocal_311 = 1;
	}
	if (entity::does_entity_exist(uLocal_616[iLocal_256])) {
		if (!entity::is_entity_dead(uLocal_616[iLocal_256], 0)) {
			if (gameplay::_0x34318593248C8FB2(entity::get_entity_coords(uLocal_616[iLocal_256], 1),
											  joaat("weapon_grenade"), 4f, 1) ||
				gameplay::_0x34318593248C8FB2(entity::get_entity_coords(uLocal_616[iLocal_256], 1),
											  joaat("weapon_molotov"), 4f, 1) ||
				gameplay::_0x34318593248C8FB2(entity::get_entity_coords(uLocal_616[iLocal_256], 1),
											  joaat("weapon_smokegrenade"), 4f, 1) ||
				gameplay::_0x34318593248C8FB2(entity::get_entity_coords(uLocal_616[iLocal_256], 1),
											  joaat("weapon_stickybomb"), 4f, 1)) {
				iLocal_311 = 1;
			}
			if (ped::is_ped_in_vehicle(player::player_ped_id(), uLocal_616[iLocal_256], 0)) {
				iLocal_311 = 1;
			}
		}
		else {
			iLocal_311 = 1;
		}
	}
	if (entity::does_entity_exist(uLocal_580[iLocal_256])) {
		if (!entity::is_entity_dead(uLocal_580[iLocal_256], 0)) {
			if (ped::is_ped_being_jacked(uLocal_580[iLocal_256])) {
				iLocal_311 = 1;
			}
		}
		else {
			iLocal_311 = 1;
		}
	}
	if (entity::does_entity_exist(uLocal_588[iLocal_256])) {
		if (!entity::is_entity_dead(uLocal_588[iLocal_256], 0)) {
			if (ped::is_ped_being_jacked(uLocal_588[iLocal_256])) {
				iLocal_311 = 1;
			}
		}
		else {
			iLocal_311 = 1;
		}
	}
	if (!entity::is_entity_dead(iLocal_615, 0)) {
		if (func_55(iLocal_615, player::player_ped_id(), 3f, 1) || func_55(iLocal_615, iLocal_632, 3f, 1) ||
			func_285(iLocal_615, player::get_players_last_vehicle(), 1) <= 3f) {
			rope::activate_physics(iLocal_615);
		}
		if (func_299(player::player_ped_id(), iLocal_615)) {
			iLocal_311 = 1;
		}
		if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_615, 0) ||
			entity::has_entity_been_damaged_by_entity(iLocal_615, player::player_ped_id(), 1) ||
			entity::has_entity_been_damaged_by_entity(iLocal_615, iLocal_632, 1) ||
			entity::is_entity_touching_entity(iLocal_615, iLocal_632)) {
			iLocal_311 = 1;
		}
	}
	iLocal_256++;
	if (iLocal_256 == 7) {
		iLocal_256 = 0;
	}
}

// Position - 0x2C9E9
bool func_299(int iParam0, int iParam1) {
	int iVar0;

	if (!ped::is_ped_injured(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam1, 0)) {
			iVar0 = ped::get_vehicle_ped_is_using(iParam0);
			if (iVar0 == iParam1) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2CA19
struct<6> func_300() {
	struct<6> Var0;
	int iVar6;

	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4) {
		iVar6 = audio::get_current_scripted_conversation_line();
		iVar6 += Global_16755;
		if (iVar6 > -1) {
			return Global_14613[iVar6 /*6*/];
		}
		else {
			return Var0;
		}
	}
	return Var0;
}

//Position - 0x2CA5F
void func_301()
{
	struct<6> Var0;

	func_298();
	func_296();
	if (!ped::is_ped_headtracking_ped(iLocal_596, player::player_ped_id())) {
		ai::task_look_at_entity(iLocal_596, player::player_ped_id(), -1, 2096, 4);
	}
	if (gameplay::get_game_timer() > iLocal_293 + 6500) {
		func_291();
	}
	if (!func_287()) {
		if (!ui::does_blip_exist(iLocal_940)) {
			if (iLocal_369 == 0) {
				iLocal_940 = func_283(iLocal_596, 1, 1, 5);
				ui::set_blip_scale(iLocal_940, fLocal_147);
				iLocal_369 = 1;
			}
		}
		iLocal_568 = 7;
	}
	if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
		Var0 = {func_295()};
		if (!gameplay::is_string_null_or_empty(&Var0)) {
			if (gameplay::are_strings_equal(&Var0, "EPS8_E1")) {
				func_294();
			}
		}
	}
}

// Position - 0x2CB09
void func_302() {
	func_11();
	func_298();
	func_296();
	if (!ped::is_ped_headtracking_ped(iLocal_596, player::player_ped_id())) {
		ai::task_look_at_entity(iLocal_596, player::player_ped_id(), -1, 2096, 4);
	}
	if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
		if (streaming::has_model_loaded(joaat("tractor"))) {
			if (!func_287()) {
				if (func_276(&uLocal_390, "EPS8AU", "EPS8_ESC", 7, 0, 0, 0)) {
					player::set_player_control(player::player_id(), 1, 0);
					iLocal_633 =
						vehicle::create_vehicle(joaat("tractor"), -375.6338f, -105.9456f, 37.679f, 119.7025f, 1, 1);
					vehicle::set_vehicle_extra(iLocal_633, 8, 0);
					vehicle::set_vehicle_extra(iLocal_633, 1, 1);
					vehicle::set_vehicle_number_plate_text(iLocal_633, "K1FFL0M1");
					func_305(iLocal_633, 1);
					streaming::set_model_as_no_longer_needed(joaat("tractor"));
					ped::set_ped_can_ragdoll_from_player_impact(iLocal_596, 0);
					ai::open_sequence_task(&iLocal_943);
					ai::task_look_at_entity(0, player::player_ped_id(), -1, 0, 2);
					ai::task_leave_any_vehicle(0, 0, 0);
					ai::task_play_anim(0, "rcmepsilonism8", "jump_off_heli", 2f, -1f, -1, 32768, 0.084f, 0, 0, 0);
					ai::close_sequence_task(iLocal_943);
					ai::task_perform_sequence(iLocal_596, iLocal_943);
					ai::clear_sequence_task(&iLocal_943);
					iLocal_293 = gameplay::get_game_timer();
					func_5(0);
					vLocal_215 = {entity::get_entity_coords(iLocal_632, 1)};
					iLocal_940 = func_283(iLocal_596, 1, 1, 5);
					iLocal_369 = 1;
					ui::set_blip_scale(iLocal_940, fLocal_147);
					streaming::request_clip_set("move_ped_wpn_jerrycan_generic");
					iLocal_304 = 0;
					func_303(&iLocal_555, 0, 0);
					iLocal_387 = 0;
					iLocal_568 = 6;
				}
			}
		}
	}
	else if (!entity::is_entity_in_angled_area(player::player_ped_id(), -351.6279f, -76.40219f, 41.77763f, -361.8925f,
											   -104.8718f, 48.97791f, fLocal_152, 0, 1, 0)) {
		iLocal_311 = 1;
	}
}

// Position - 0x2CCAC
void func_303(int *iParam0, int iParam1, int iParam2) {
	char *sVar0;

	if (network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_2494199.f_4449, 26)) {
			return;
		}
	}
	if (cam::is_gameplay_hint_active()) {
		cam::stop_gameplay_hint(iParam2);
		graphics::_stop_screen_effect("FocusIn");
		audio::stop_audio_scene("HINT_CAM_SCENE");
		if (iParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	cam::set_cinematic_button_active(1);
	iParam0->f_1 = 0;
	*iParam0 = 0;
	iParam0->f_2 = -1;
	iParam0->f_8 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	sVar0 = iParam1;
	if (gameplay::is_string_null(sVar0)) {
		if (!network::network_is_game_in_progress()) {
			sVar0 = "CMN_HINT";
		}
		else {
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!gameplay::is_string_null(iParam0->f_3)) {
		if (func_304(iParam0->f_3)) {
			ui::clear_help(1);
		}
	}
	if (!gameplay::is_string_null(sVar0)) {
		if (func_304(sVar0)) {
			ui::clear_help(1);
		}
	}
}

// Position - 0x2CD89
bool func_304(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x2CD9C
void func_305(int iParam0, int iParam1) { Global_91491.f_22[iParam1] = iParam0; }

// Position - 0x2CDB0
void func_306() {
	func_289();
	vehicle::set_random_vehicle_density_multiplier_this_frame(0f);
	func_298();
	func_296();
	if (!entity::is_entity_at_coord(iLocal_632, vLocal_158, 2f, 2f, 2f, 0, 1, 0)) {
		func_278();
	}
	if (!ped::is_ped_headtracking_ped(iLocal_596, player::player_ped_id())) {
		ai::task_look_at_entity(iLocal_596, player::player_ped_id(), -1, 2096, 4);
	}
	if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
		if (func_17(iLocal_615)) {
			func_309(&iLocal_555, iLocal_615, 0, 0, 1, 1, 1);
		}
	}
	else {
		func_303(&iLocal_555, 0, 0);
	}
	if (entity::is_entity_at_coord(iLocal_632, vLocal_158, 2f, 2f, 2f, 0, 1, 0) &&
		vehicle::is_vehicle_stopped(iLocal_632)) {
		func_24(&iLocal_935);
		if (entity::get_entity_speed(iLocal_632) < 12.8f) {
			fLocal_152 = 30.75f;
		}
		if (entity::get_entity_speed(iLocal_632) >= 12.8f && entity::get_entity_speed(iLocal_632) < 18f) {
			fLocal_152 = 32.75f;
		}
		if (entity::get_entity_speed(iLocal_632) >= 18f) {
			fLocal_152 = 34.75f;
		}
		if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
			func_24(&iLocal_938);
			iLocal_362 = 1;
			streaming::request_model(joaat("tractor"));
			streaming::request_clip_set("move_ped_wpn_jerrycan_generic");
			iLocal_568 = 5;
		}
		else {
			if (iLocal_377 == 0) {
				unk1::_0x293220DA1B46CEBC(5f, 15f, 1);
				func_286("EPS8_27", 7500, 0);
				iLocal_377 = 1;
			}
			iLocal_382 = 1;
		}
	}
	else if (entity::is_entity_at_coord(iLocal_632, vLocal_158, 2f, 2f, 2f, 0, 1, 0)) {
		func_24(&iLocal_935);
		if (!vehicle::is_vehicle_stopped(iLocal_632)) {
			if (iLocal_382 == 0) {
				func_307(iLocal_632, 4f, 1, 1056964608, 0, 1, 0);
			}
		}
	}
	if (ui::does_blip_exist(iLocal_935)) {
		iLocal_382 = 0;
		if (entity::is_entity_at_coord(iLocal_632, vLocal_158, 6f, 6f, 2f, 1, 1, 0)) {
		}
	}
}

// Position - 0x2CF70
int func_307(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6) {
	controls::disable_control_action(0, 71, 1);
	controls::disable_control_action(0, 72, 1);
	controls::disable_control_action(0, 76, 1);
	controls::disable_control_action(0, 73, 1);
	controls::disable_control_action(0, 59, 1);
	controls::disable_control_action(0, 60, 1);
	if (iParam5) {
		controls::disable_control_action(0, 75, 1);
	}
	controls::disable_control_action(0, 80, 1);
	if (!iParam6) {
		controls::disable_control_action(0, 69, 1);
		controls::disable_control_action(0, 70, 1);
		controls::disable_control_action(0, 68, 1);
	}
	controls::disable_control_action(0, 74, 1);
	controls::disable_control_action(0, 86, 1);
	controls::disable_control_action(0, 81, 1);
	controls::disable_control_action(0, 82, 1);
	controls::disable_control_action(0, 138, 1);
	controls::disable_control_action(0, 136, 1);
	controls::disable_control_action(0, 114, 1);
	controls::disable_control_action(0, 107, 1);
	controls::disable_control_action(0, 110, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 87, 1);
	controls::disable_control_action(0, 88, 1);
	controls::disable_control_action(0, 113, 1);
	controls::disable_control_action(0, 115, 1);
	controls::disable_control_action(0, 116, 1);
	controls::disable_control_action(0, 117, 1);
	controls::disable_control_action(0, 118, 1);
	controls::disable_control_action(0, 119, 1);
	controls::disable_control_action(0, 131, 1);
	controls::disable_control_action(0, 132, 1);
	controls::disable_control_action(0, 123, 1);
	controls::disable_control_action(0, 126, 1);
	controls::disable_control_action(0, 129, 1);
	controls::disable_control_action(0, 130, 1);
	controls::disable_control_action(0, 133, 1);
	controls::disable_control_action(0, 134, 1);
	cam::_0x17FCA7199A530203();
	func_308(iParam0);
	if (gameplay::get_game_timer() - Global_29 > 500) {
		vehicle::_set_vehicle_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = gameplay::get_game_timer();
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (gameplay::absf(entity::get_entity_speed(iParam0)) <= fParam3) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2D0FF
void func_308(int iParam0) {
	if (vehicle::_get_has_vehicle_got_rocket_boost(iParam0)) {
		if (vehicle::_is_vehicle_rocket_boost_active(iParam0)) {
			vehicle::_set_rocket_boost_active(iParam0, 0);
		}
	}
}

// Position - 0x2D120
void func_309(int *iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_310(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x2D13A
void func_310(int *iParam0, int iParam1, char *sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6) {
	iParam0->f_6 = 0;
	func_311(iParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

// Position - 0x2D15C
void func_311(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			  bool bParam9) {
	int iVar0;
	int iVar1;

	if (iParam0->f_1 && cam::is_gameplay_hint_active()) {
		if (gameplay::get_game_timer() >= iParam0->f_8 + iParam0->f_9) {
			iParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (gameplay::is_string_null(iVar0)) {
		if (!network::network_is_game_in_progress()) {
			iVar0 = "CMN_HINT";
		}
		else {
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_304(iVar0)) {
		func_329();
	}
	if (func_328(iParam1) && entity::is_entity_visible(iParam1)) {
		iVar1 = 0;
		if (entity::is_entity_a_ped(iParam1)) {
			ped::_0x7D7A2E43E74E2EB8(entity::get_ped_index_from_entity_index(iParam1));
			ped::get_ped_flood_invincibility(entity::get_ped_index_from_entity_index(iParam1), 1);
			if (ped::is_tracked_ped_visible(entity::get_ped_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		else if (entity::is_entity_a_vehicle(iParam1)) {
			vehicle::track_vehicle_visibility(entity::get_vehicle_index_from_entity_index(iParam1));
			if (vehicle::is_vehicle_visible(entity::get_vehicle_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		else if (entity::is_entity_an_object(iParam1)) {
			object::track_object_visibility(entity::get_object_index_from_entity_index(iParam1));
			if (object::is_object_visible(entity::get_object_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		if (!cam::is_gameplay_hint_active()) {
			if (func_323(iParam0, bParam7, bParam9, 0)) {
				func_319(iParam0, iParam1, vParam2, iParam6);
			}
			if (*iParam0) {
				*iParam0 = 0;
			}
			else if (iParam0->f_6 == 2) {
				if (func_316(iVar0)) {
					if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0) &&
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (iVar1 && !ui::is_help_message_being_displayed() && uParam8) {
							if (!func_304(iVar0)) {
								func_315(iVar0, -1);
								iParam0->f_3 = iVar0;
								if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
									func_314(1);
								}
							}
						}
					}
				}
			}
			else if (func_316(iVar0)) {
				if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0)) {
					if (entity::is_entity_on_screen(iParam1) && iVar1 && !ui::is_help_message_being_displayed() &&
						uParam8) {
						if (!func_304(iVar0)) {
							func_315(iVar0, -1);
							iParam0->f_3 = iVar0;
							if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
								func_314(1);
							}
						}
					}
				}
			}
		}
		else {
			if (!gameplay::is_string_null(sParam5)) {
				if (func_304(sParam5)) {
					ui::clear_help(1);
				}
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (ped::is_ped_in_any_boat(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
						func_303(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
						func_303(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
						func_303(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
						func_303(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
						func_303(iParam0, iVar0, 1);
					}
				}
				else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
					func_303(iParam0, iVar0, 1);
				}
			}
			if (!func_323(iParam0, bParam7, bParam9, 0)) {
				if (!*iParam0 && !iParam0->f_1 && !func_313(iParam0)) {
					func_312(iParam0);
				}
			}
		}
	}
	else {
		func_303(iParam0, iVar0, 0);
	}
}

// Position - 0x2D4C9
void func_312(int *iParam0) {
	if (func_328(player::player_ped_id())) {
		ai::task_clear_look_at(player::player_ped_id());
	}
	if (cam::is_gameplay_hint_active()) {
		cam::set_cinematic_button_active(1);
		cam::stop_gameplay_hint(0);
		audio::stop_audio_scene("HINT_CAM_SCENE");
		graphics::_stop_screen_effect("FocusIn");
		if (iParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	iParam0->f_2 = -1;
	*iParam0 = 1;
}

// Position - 0x2D532
bool func_313(var *uParam0) {
	int iVar0;

	if (uParam0->f_2 > 0) {
		iVar0 = uParam0->f_10 / 2;
		if (uParam0->f_2 + iVar0 > gameplay::get_game_timer()) {
			return true;
		}
	}
	return false;
}

// Position - 0x2D55D
int func_314(int iParam0) {
	switch (Global_35781) {
	case 0:
	case 3:
		if (iParam0) {
			Global_101700.f_9008.f_100++;
		}
		return Global_101700.f_9008.f_100;

	case 4:
		if (iParam0) {
			Global_101700.f_9008.f_101++;
		}
		return Global_101700.f_9008.f_101;

	case 5:
	case 15:
		if (iParam0) {
			Global_101700.f_9008.f_102++;
		}
		return Global_101700.f_9008.f_102;

	default: break;
	}
	return 3;
}

// Position - 0x2D607
void func_315(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x2D61E
bool func_316(char *sParam0) {
	if (!func_317(1, 1, 0)) {
		if (!gameplay::is_string_null_or_empty(sParam0) && func_304(sParam0) || func_304("CMN_HINT")) {
			ui::clear_help(1);
		}
		return false;
	}
	switch (Global_35781) {
	case 0:
	case 3:
		if (func_314(0) < 3) {
			return true;
		}
		break;

	case 4:
		if (func_314(0) < 1) {
			return true;
		}
		break;

	case 5:
	case 15:
		if (func_314(0) < 1) {
			return true;
		}
		break;

	default: break;
	}
	return false;
}

// Position - 0x2D6B7
int func_317(int iParam0, int iParam1, int iParam2) {
	if (iParam0) {
		if (!player::is_player_control_on(player::player_id())) {
			return 0;
		}
	}
	if (iParam2) {
		return 1;
	}
	if (streaming::is_player_switch_in_progress()) {
		return 0;
	}
	if (func_9(0)) {
		return 0;
	}
	if (func_318()) {
		return 0;
	}
	if (network::_network_is_text_chat_active()) {
		return 0;
	}
	if (Global_68131) {
		return 0;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appinternet")) > 0) {
		return 0;
	}
	if (Global_53003) {
		return 0;
	}
	if (iParam1) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			if (ped::is_ped_in_any_boat(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
					return 0;
				}
			}
			else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
				return 0;
			}
			if (cam::is_gameplay_cam_looking_behind()) {
				return 0;
			}
		}
	}
	return 1;
}

// Position - 0x2D833
bool func_318() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x2D848
void func_319(int *iParam0, int iParam1, vector3 vParam2, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (entity::is_entity_dead(iParam1, 0)) {
		func_303(iParam0, 0, 0);
	}
	if (func_322(vParam2, 0f, 0f, 0f, 0)) {
		if (entity::is_entity_a_ped(iParam1)) {
			iVar0 = entity::get_ped_index_from_entity_index(iParam1);
			if (!ped::is_ped_in_any_vehicle(iVar0, 0)) {
				if (ped::is_ped_a_player(iVar0)) {
					if (!func_320()) {
						vParam2 = {0f, 0f, 1f};
					}
				}
				else if (ped::is_ped_male(iVar0)) {
					vParam2 = {0f, 0f, 1f};
				}
			}
		}
	}
	cam::set_cinematic_button_active(0);
	iVar1 = iParam0->f_9;
	iVar2 = iParam0->f_10;
	if (iParam5 == 1726668277) {
		if (iVar1 < 1500) {
			iVar1 = 1500;
		}
		if (iVar2 < 1500) {
			iVar2 = 1500;
		}
	}
	cam::set_gameplay_entity_hint(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	ai::task_look_at_entity(player::player_ped_id(), iParam1, -1, iVar3, iVar4);
	graphics::_start_screen_effect("FocusIn", 0, 0);
	audio::start_audio_scene("HINT_CAM_SCENE");
	audio::play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	iParam0->f_11 = 1;
	iParam0->f_8 = gameplay::get_game_timer();
	iParam0->f_1 = 1;
	*iParam0 = 0;
}

// Position - 0x2D94D
int func_320() { return func_321(player::player_id()); }

// Position - 0x2D95D
int func_321(int iParam0) {
	if (entity::get_entity_model(player::get_player_ped(iParam0)) == joaat("mp_f_freemode_01")) {
		return 1;
	}
	return 0;
}

// Position - 0x2D97C
bool func_322(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x2D9C3
bool func_323(var *uParam0, bool bParam1, bool bParam2, int iParam3) {
	if (uParam0->f_1) {
		if (gameplay::get_game_timer() >= uParam0->f_8 + uParam0->f_9) {
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5) {
	case 0:
		uParam0->f_7 = 0;
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (func_327(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (func_326(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (func_326(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (func_327(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		if (func_313(uParam0)) {
			uParam0->f_7 = 1;
			uParam0->f_5 = 4;
		}
		break;

	case 1:
		if (gameplay::get_game_timer() - uParam0->f_4 <= 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (!func_327(bParam1, bParam2, iParam3)) {
						uParam0->f_4 = gameplay::get_game_timer();
						uParam0->f_5 = 3;
					}
				}
				else if (!func_326(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (!func_326(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!func_327(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
		}
		else {
			uParam0->f_5 = 2;
		}
		break;

	case 2:
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (!func_327(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (!func_326(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (!func_326(bParam1, bParam2, iParam3) || ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
				ai::get_is_task_active(player::player_ped_id(), 2)) {
				uParam0->f_5 = 0;
			}
			else if (!func_327(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - uParam0->f_4 > 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (func_325(bParam1, bParam2, iParam3)) {
						uParam0->f_5 = 0;
					}
				}
				else if (func_324(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) || func_324(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
					ai::get_is_task_active(player::player_ped_id(), 2)) {
					uParam0->f_5 = 0;
				}
				else if (func_325(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
		}
		break;

	case 4:
		if (!func_313(uParam0)) {
			uParam0->f_5 = 0;
		}
		break;
	}
	if (!func_317(bParam1, bParam2, iParam3)) {
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7) {
		func_329();
		return true;
	}
	else {
		return false;
	}
	return false;
}

// Position - 0x2DD2F
bool func_324(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_317(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_just_released(0, 80)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2DD81
bool func_325(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_317(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_just_released(0, 80)) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2DDCA
bool func_326(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_317(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2DE29
bool func_327(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_317(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2DE7F
bool func_328(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (entity::is_entity_a_vehicle(iParam0)) {
			if (vehicle::is_vehicle_driveable(entity::get_vehicle_index_from_entity_index(iParam0), 0)) {
				return true;
			}
		}
		else if (entity::is_entity_a_ped(iParam0)) {
			if (!ped::is_ped_injured(entity::get_ped_index_from_entity_index(iParam0))) {
				return true;
			}
		}
		else if (entity::is_entity_an_object(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x2DEDA
void func_329() { gameplay::set_bit(&Global_2314, 4); }

// Position - 0x2DEEA
void func_330() {
	if (!iLocal_384) {
		audio::set_static_emitter_enabled("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 0);
		audio::trigger_music_event("EPS8_START");
		unk1::_0x293220DA1B46CEBC(0f, 10f, 1);
		iLocal_384 = 1;
	}
	vehicle::set_random_vehicle_density_multiplier_this_frame(0f);
	pathfind::_0x07FB139B592FA687(-744.6715f, -175.2881f, -205.6593f, 118.4107f);
	func_334();
	if (iLocal_256 == 1 || iLocal_256 == 4) {
		func_333();
	}
	if (iLocal_311 == 0) {
		func_331();
	}
	func_298();
	func_296();
	func_278();
	if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
		if (func_17(uLocal_616[0])) {
			func_309(&iLocal_555, uLocal_616[0], 0, 0, 1, 1, 1);
		}
		if (ped::is_ped_in_vehicle(uLocal_580[0], uLocal_616[0], 0)) {
			if (entity::is_entity_in_angled_area(uLocal_616[0], -384.1292f, -72.76846f, 41.7355f, -381.6261f,
												 -65.75608f, 52.89689f, 8.5f, 0, 1, 0)) {
				if (ui::does_blip_exist(iLocal_939)) {
					ui::remove_blip(&iLocal_939);
				}
				if (!ui::does_blip_exist(iLocal_935)) {
					iLocal_935 = ui::add_blip_for_coord(vLocal_158);
				}
				func_303(&iLocal_555, 0, 0);
				func_286("EPS8_28", 7500, 0);
				iLocal_568 = 4;
			}
		}
		if (entity::is_entity_in_angled_area(iLocal_632, -384.1292f, -72.76846f, 41.7355f, -381.6261f, -65.75608f,
											 52.89689f, 8.5f, 0, 1, 0)) {
			func_24(&iLocal_939);
			if (!ui::does_blip_exist(iLocal_935)) {
				iLocal_935 = ui::add_blip_for_coord(vLocal_158);
			}
			func_303(&iLocal_555, 0, 0);
			func_286("EPS8_28", 7500, 0);
			iLocal_568 = 4;
		}
	}
	else {
		func_303(&iLocal_555, 0, 0);
	}
	if (entity::is_entity_at_coord(iLocal_632, vLocal_158, 6f, 6f, 2f, 1, 1, 0)) {
	}
}

// Position - 0x2E0A5
void func_331() {
	if (func_17(iLocal_632)) {
		if (func_78(uLocal_580[0])) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
				if (gameplay::get_game_timer() > iLocal_291 + 8000) {
					if (!func_55(player::player_ped_id(), uLocal_580[0], 40f, 1)) {
						if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
							if (entity::get_entity_speed(iLocal_632) > 2f) {
								if (iLocal_353 == 0) {
									if (!func_287()) {
										if (func_276(&uLocal_390, "EPS8AU", "EPS8_LS4", 6, 0, 0, 0)) {
											iLocal_353 = 1;
											if (iLocal_261 < 2) {
												iLocal_261 = 2;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_306 == 10) {
						if (gameplay::get_game_timer() > iLocal_305 + 1000) {
							if (!func_287()) {
								sLocal_386 = "EPS8_23";
								iLocal_568 = 10;
								if (iLocal_261 < 2) {
									iLocal_261 = 2;
								}
								return;
							}
						}
					}
					if (fLocal_252 < 0.5f && fLocal_252 != -1f) {
						if (entity::get_entity_speed(iLocal_632) < 2f) {
							if (iLocal_349 == 0) {
								if (!func_287()) {
									if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS5", "EPS8_LS5_1", 6, 0, 0)) {
										iLocal_305 = gameplay::get_game_timer();
										iLocal_349 = 1;
										if (iLocal_261 < 2) {
											iLocal_261 = 2;
										}
									}
								}
							}
							else if (iLocal_261 >= 7) {
								if (gameplay::get_game_timer() > iLocal_305 + 9000) {
									if (!func_287()) {
										if (iLocal_306 < 5) {
											func_276(&uLocal_390, "EPS8AU", "EPS8_T2", 7, 0, 0, 0);
											iLocal_306++;
											iLocal_305 = gameplay::get_game_timer();
										}
										else if (iLocal_306 != 10) {
											if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_6", 7, 0, 0)) {
												iLocal_306 = 10;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_275 == 1) {
						if (iLocal_350 == 0) {
							if (!func_287()) {
								if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS3", "EPS8_LS3_1", 6, 0, 0)) {
									iLocal_350 = 1;
									if (iLocal_261 < 2) {
										iLocal_261 = 2;
									}
								}
							}
						}
					}
					if (iLocal_275 == 2) {
						if (iLocal_351 == 0) {
							if (!func_287()) {
								if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS3", "EPS8_LS3_2", 6, 0, 0)) {
									iLocal_351 = 1;
									if (iLocal_261 < 2) {
										iLocal_261 = 2;
									}
								}
							}
						}
					}
				}
				if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
														  -358.0764f, -88.2705f, 44.5901f, 1) <
					gameplay::get_distance_between_coords(entity::get_entity_coords(uLocal_580[0], 1), -358.0764f,
														  -88.2705f, 44.5901f, 1)) {
					if (gameplay::get_game_timer() > iLocal_291 + 8000) {
						if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
							if (iLocal_352 == 0) {
								if (!func_287()) {
									if (func_276(&uLocal_390, "EPS8AU", "EPS8_LS2", 6, 0, 0, 0)) {
										iLocal_352 = 1;
										if (iLocal_261 < 2) {
											iLocal_261 = 2;
										}
									}
								}
							}
						}
					}
				}
				else if (iLocal_261 == 0) {
					if (gameplay::get_game_timer() > iLocal_291 + 7000) {
						if (!func_287()) {
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_1", 5, 0, 0)) {
								iLocal_261 = 1;
							}
						}
					}
				}
				else if (iLocal_261 == 1) {
					if (gameplay::get_game_timer() > iLocal_291 + 9000) {
						if (!func_287()) {
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_2", 5, 0, 0)) {
								iLocal_261 = 2;
							}
						}
					}
				}
				else if (iLocal_261 == 2) {
					if (gameplay::get_game_timer() > iLocal_291 + 12000) {
						if (!func_287()) {
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_3", 5, 0, 0)) {
								iLocal_261 = 3;
							}
						}
					}
				}
				else if (iLocal_261 == 3) {
					if (gameplay::get_game_timer() > iLocal_291 + 13000) {
						if (!func_287()) {
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_4", 5, 0, 0)) {
								iLocal_261 = 4;
							}
						}
					}
				}
				else if (iLocal_261 == 4) {
					if (gameplay::get_game_timer() > iLocal_291 + 14000) {
						if (!func_287()) {
							if (func_16(iLocal_615) && func_16(uLocal_616[0])) {
								if (!func_277(uLocal_616[0], -696.0367f, 40.7954f, 42.2066f, 80f) &&
									!func_277(iLocal_615, -355.8568f, -89.7074f, 44.6341f, 50f)) {
									if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_5", 5, 0, 0)) {
										iLocal_261 = 5;
									}
								}
								else {
									iLocal_261 = 5;
								}
							}
						}
					}
				}
				else if (iLocal_261 == 5) {
					if (gameplay::get_game_timer() > iLocal_291 + 15000) {
						if (!func_287()) {
							if (func_63(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_6", 5, 0, 0)) {
								iLocal_261 = 6;
							}
						}
					}
				}
				else if (iLocal_261 == 6) {
					if (gameplay::get_game_timer() > iLocal_291 + 16000) {
						if (!func_287()) {
							if (func_332(&uLocal_390, "EPS8AU", "EPS8_LS", "EPS8_LS_7", 7, 0, 0)) {
								iLocal_261 = 7;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 0) {
				iLocal_282 = gameplay::get_game_timer();
				iLocal_283 = 1;
			}
			else if (iLocal_283 == 1) {
				if (gameplay::get_game_timer() > iLocal_282 + 7000) {
					if (!func_287()) {
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_1", 5, 0, 0)) {
							iLocal_282 = gameplay::get_game_timer();
							iLocal_305 = gameplay::get_game_timer();
							iLocal_283 = 2;
							if (iLocal_261 < 2) {
								iLocal_261 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 2) {
				if (gameplay::get_game_timer() > iLocal_282 + 8000) {
					if (!func_287()) {
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_2", 5, 0, 0)) {
							iLocal_282 = gameplay::get_game_timer();
							iLocal_305 = gameplay::get_game_timer();
							iLocal_283 = 3;
							if (iLocal_261 < 2) {
								iLocal_261 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 3) {
				if (gameplay::get_game_timer() > iLocal_282 + 8000) {
					if (!func_287()) {
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_3", 5, 0, 0)) {
							iLocal_282 = gameplay::get_game_timer();
							iLocal_305 = gameplay::get_game_timer();
							iLocal_283 = 4;
							if (iLocal_261 < 2) {
								iLocal_261 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 4) {
				if (gameplay::get_game_timer() > iLocal_282 + 7000) {
					if (!func_287()) {
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_4", 5, 0, 0)) {
							iLocal_282 = gameplay::get_game_timer();
							iLocal_305 = gameplay::get_game_timer();
							iLocal_283 = 5;
							if (iLocal_261 < 2) {
								iLocal_261 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 5) {
				if (gameplay::get_game_timer() > iLocal_282 + 1000) {
					if (!func_287()) {
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_5", 5, 0, 0)) {
							iLocal_282 = gameplay::get_game_timer();
							iLocal_305 = gameplay::get_game_timer();
							iLocal_283 = 6;
							if (iLocal_261 < 2) {
								iLocal_261 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 6) {
				if (gameplay::get_game_timer() > iLocal_282 + 10000) {
					if (!func_287()) {
						if (func_63(&uLocal_390, "EPS8AU", "EPS8_T1", "EPS8_T1_6", 5, 0, 0)) {
							iLocal_282 = gameplay::get_game_timer();
							iLocal_283 = 7;
							if (iLocal_261 < 2) {
								iLocal_261 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_283 == 7) {
				if (gameplay::get_game_timer() > iLocal_282 + 1000) {
					if (!func_287()) {
						sLocal_386 = "EPS8_23";
						iLocal_568 = 10;
						iLocal_283 = 8;
						if (iLocal_261 < 2) {
							iLocal_261 = 2;
						}
					}
				}
			}
		}
	}
}

// Position - 0x2E7A8
bool func_332(var *uParam0, char *sParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6) {
	func_77(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7) {
		if (iParam4 < 12) {
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_64(sParam2, iParam4, 0);
}

// Position - 0x2E7FC
void func_333() {
	int iVar0;
	int iVar1;
	float fVar2;

	gameplay::clear_area_of_vehicles(entity::get_entity_coords(player::player_ped_id(), 1), 200f, 1, 1, 0, 0, 0);
	if (streaming::has_model_loaded(joaat("taxi")) && streaming::has_model_loaded(joaat("sadler")) &&
		streaming::has_model_loaded(joaat("habanero")) && streaming::has_model_loaded(joaat("schafter2")) &&
		streaming::has_model_loaded(joaat("rumpo"))) {
		vLocal_650[0 /*3*/] = {-131.838f, -84.816f, 54.8058f};
		vLocal_650[1 /*3*/] = {-131.838f, -84.816f, 54.8058f};
		vLocal_650[2 /*3*/] = {-202.8393f, -60.2254f, 49.8713f};
		vLocal_650[3 /*3*/] = {-283.2474f, -32.2227f, 48.2857f};
		vLocal_650[4 /*3*/] = {-372.0164f, -1.9755f, 45.9995f};
		vLocal_650[5 /*3*/] = {-463.3591f, 7.4364f, 44.6764f};
		vLocal_650[6 /*3*/] = {-536.8303f, 12.2933f, 43.2611f};
		fLocal_672[0] = 71.7829f;
		fLocal_672[1] = 71.7829f;
		fLocal_672[2] = 70.6852f;
		fLocal_672[3] = 70.5582f;
		fLocal_672[4] = 75.2358f;
		fLocal_672[5] = 88.0273f;
		fLocal_672[6] = 86.8248f;
		vLocal_696[0 /*3*/] = {-312.1015f, 130.6894f, 66.5865f};
		vLocal_696[1 /*3*/] = {-345.6338f, 129.7367f, 65.7121f};
		vLocal_696[2 /*3*/] = {-393.3472f, 75.7086f, 58.9759f};
		vLocal_696[3 /*3*/] = {-394.0365f, 33.2626f, 47.2826f};
		vLocal_696[4 /*3*/] = {-432.5279f, 11.5918f, 45.1093f};
		vLocal_696[5 /*3*/] = {-473.8784f, 13.902f, 44.3884f};
		vLocal_696[6 /*3*/] = {-515.9524f, 16.8126f, 43.5537f};
		fLocal_718[0] = 91.2112f;
		fLocal_718[1] = 92.7461f;
		fLocal_718[2] = 179.5078f;
		fLocal_718[3] = 174.2351f;
		fLocal_718[4] = 87.2938f;
		fLocal_718[5] = 85.9476f;
		fLocal_718[6] = 86.5195f;
		vLocal_742[0 /*3*/] = {-821.8678f, -15.21f, 38.7738f};
		vLocal_742[1 /*3*/] = {-762.9101f, -61.369f, 36.8265f};
		vLocal_742[2 /*3*/] = {-683.5615f, -22.2863f, 37.2221f};
		vLocal_742[3 /*3*/] = {-598.2457f, -13.4337f, 42.8497f};
		vLocal_742[4 /*3*/] = {-566.7648f, -39.6658f, 41.744f};
		vLocal_742[5 /*3*/] = {-547.043f, -87.3705f, 39.7725f};
		vLocal_742[6 /*3*/] = {-542.4178f, -145.067f, 37.4423f};
		fLocal_764[0] = 213.1008f;
		fLocal_764[1] = 292.6512f;
		fLocal_764[2] = 280.8633f;
		fLocal_764[3] = 270.1932f;
		fLocal_764[4] = 162.4637f;
		fLocal_764[5] = 220.7259f;
		fLocal_764[6] = 109.6765f;
		vLocal_788[0 /*3*/] = {-538.8824f, 2.5863f, 43.2495f};
		vLocal_788[1 /*3*/] = {-510.9343f, 0.7568f, 43.7336f};
		vLocal_788[2 /*3*/] = {-468.7612f, -1.3575f, 44.5868f};
		vLocal_788[3 /*3*/] = {-419.5594f, -4.5629f, 45.5167f};
		vLocal_788[4 /*3*/] = {-373.0446f, -11.2775f, 46.0324f};
		vLocal_788[5 /*3*/] = {-278.3581f, -44.505f, 48.549f};
		vLocal_788[6 /*3*/] = {-211.5438f, -68.0673f, 49.5385f};
		fLocal_810[0] = 264.3932f;
		fLocal_810[1] = 265.6151f;
		fLocal_810[2] = 265.8879f;
		fLocal_810[3] = 267.9286f;
		fLocal_810[4] = 251.6172f;
		fLocal_810[5] = 254.6602f;
		fLocal_810[6] = 252.3606f;
		vLocal_834[0 /*3*/] = {-669.2421f, -7.4354f, 37.8635f};
		vLocal_834[1 /*3*/] = {-700.1176f, -17.5754f, 36.9578f};
		vLocal_834[2 /*3*/] = {-727.3986f, -31.1413f, 36.8838f};
		vLocal_834[3 /*3*/] = {-775.4231f, -56.9022f, 36.8581f};
		vLocal_834[4 /*3*/] = {-813.0173f, -76.7235f, 36.8717f};
		vLocal_834[5 /*3*/] = {-857.0458f, -99.6788f, 36.9241f};
		vLocal_834[6 /*3*/] = {-911.4196f, -127.5572f, 36.824f};
		fLocal_856[0] = 101.9021f;
		fLocal_856[1] = 116.4117f;
		fLocal_856[2] = 116.5154f;
		fLocal_856[3] = 117.926f;
		fLocal_856[4] = 117.6888f;
		fLocal_856[5] = 117.7467f;
		fLocal_856[6] = 115.4069f;
		vLocal_880[0 /*3*/] = {-808.274f, -46.2696f, 36.8528f};
		vLocal_880[1 /*3*/] = {-823.1899f, -74.6149f, 36.7824f};
		vLocal_880[2 /*3*/] = {-862.0953f, -95.4273f, 36.8721f};
		vLocal_880[3 /*3*/] = {-913.0912f, -122.397f, 36.7913f};
		vLocal_880[4 /*3*/] = {-959.4056f, -145.7552f, 36.7732f};
		vLocal_880[5 /*3*/] = {-1020.023f, -163.9246f, 36.7896f};
		vLocal_880[6 /*3*/] = {-1071.111f, -164.687f, 36.7161f};
		fLocal_902[0] = 206.0301f;
		fLocal_902[1] = 119.711f;
		fLocal_902[2] = 117.2803f;
		fLocal_902[3] = 117.1178f;
		fLocal_902[4] = 115.7739f;
		fLocal_902[5] = 118.1293f;
		fLocal_902[6] = 66.6215f;
		if (ai::get_is_waypoint_recording_loaded("Eps8TRAFFIC01")) {
			if (!entity::does_entity_exist(uLocal_634[iLocal_910])) {
				if (!func_277(player::player_ped_id(), vLocal_650[iLocal_910 /*3*/], 50f) &&
					!gameplay::is_position_occupied(vLocal_650[iLocal_910 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0)) {
					if (!cam::is_sphere_visible(vLocal_650[iLocal_910 /*3*/], 8f)) {
						iVar1 = gameplay::get_random_int_in_range(0, 6);
						if (iVar1 == 0) {
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1) {
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 2) {
							iVar0 = joaat("schafter2");
						}
						else if (iVar1 == 3) {
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4) {
							iVar0 = joaat("schafter2");
						}
						else {
							iVar0 = joaat("rumpo");
						}
						if (!gameplay::get_ground_z_for_3d_coord(vLocal_650[iLocal_910 /*3*/], &fVar2, 0)) {
							fVar2 = vLocal_650[iLocal_910 /*3*/].f_2;
						}
						if (iLocal_910 > 4 || func_277(player::player_ped_id(), vLocal_158, 150f)) {
							uLocal_634[iLocal_910] = vehicle::create_vehicle(iVar0, vLocal_650[iLocal_910 /*3*/],
																			 vLocal_650[iLocal_910 /*3*/].f_1, fVar2,
																			 fLocal_672[iLocal_910], 1, 1);
							uLocal_642[iLocal_910] = ped::create_random_ped_as_driver(uLocal_634[iLocal_910], 1);
							vehicle::set_vehicle_on_ground_properly(uLocal_634[iLocal_910], 1084227584);
							ai::task_vehicle_follow_waypoint_recording(uLocal_642[iLocal_910], uLocal_634[iLocal_910],
																	   "Eps8TRAFFIC01", 262275, 0, 1032, -1, -1f, 0,
																	   1073741824);
						}
					}
				}
			}
			else if (func_16(uLocal_634[iLocal_910])) {
				if (ai::is_waypoint_playback_going_on_for_vehicle(uLocal_634[iLocal_910])) {
					if (ai::get_vehicle_waypoint_progress(uLocal_634[iLocal_910]) > 70) {
						if (!func_55(player::player_ped_id(), uLocal_634[iLocal_910], 70f, 1)) {
							if (entity::is_entity_occluded(uLocal_634[iLocal_910])) {
								func_18(&uLocal_642[iLocal_910]);
								func_15(&uLocal_634[iLocal_910]);
							}
						}
					}
				}
				else if (entity::is_entity_occluded(uLocal_634[iLocal_910])) {
					func_18(&uLocal_642[iLocal_910]);
					func_15(&uLocal_634[iLocal_910]);
				}
			}
		}
		if (ai::get_is_waypoint_recording_loaded("Eps8TRAFFIC02")) {
			if (!entity::does_entity_exist(uLocal_680[iLocal_910])) {
				if (!func_277(player::player_ped_id(), vLocal_696[iLocal_910 /*3*/], 50f) &&
					!gameplay::is_position_occupied(vLocal_696[iLocal_910 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0)) {
					if (!cam::is_sphere_visible(vLocal_696[iLocal_910 /*3*/], 8f)) {
						iVar1 = gameplay::get_random_int_in_range(0, 6);
						if (iVar1 == 0) {
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1) {
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 2) {
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3) {
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4) {
							iVar0 = joaat("schafter2");
						}
						else {
							iVar0 = joaat("rumpo");
						}
						if (!gameplay::get_ground_z_for_3d_coord(vLocal_696[iLocal_910 /*3*/], &fVar2, 0)) {
							fVar2 = vLocal_696[iLocal_910 /*3*/].f_2;
						}
						uLocal_680[iLocal_910] = vehicle::create_vehicle(iVar0, vLocal_696[iLocal_910 /*3*/],
																		 vLocal_696[iLocal_910 /*3*/].f_1, fVar2,
																		 fLocal_718[iLocal_910], 1, 1);
						uLocal_688[iLocal_910] = ped::create_random_ped_as_driver(uLocal_680[iLocal_910], 1);
						vehicle::set_vehicle_on_ground_properly(uLocal_680[iLocal_910], 1084227584);
						ai::task_vehicle_follow_waypoint_recording(uLocal_688[iLocal_910], uLocal_680[iLocal_910],
																   "Eps8TRAFFIC02", 262275, 0, 1032, -1, -1f, 0,
																   1073741824);
					}
				}
			}
			else if (func_16(uLocal_680[iLocal_910])) {
				if (ai::is_waypoint_playback_going_on_for_vehicle(uLocal_680[iLocal_910])) {
					if (ai::get_vehicle_waypoint_progress(uLocal_680[iLocal_910]) > 70) {
						if (!func_55(player::player_ped_id(), uLocal_680[iLocal_910], 70f, 1)) {
							if (entity::is_entity_occluded(uLocal_680[iLocal_910])) {
								func_18(&uLocal_688[iLocal_910]);
								func_15(&uLocal_680[iLocal_910]);
							}
						}
					}
				}
				else if (entity::is_entity_occluded(uLocal_680[iLocal_910])) {
					func_18(&uLocal_688[iLocal_910]);
					func_15(&uLocal_680[iLocal_910]);
				}
			}
		}
		if (ai::get_is_waypoint_recording_loaded("Eps8TRAFFIC03")) {
			if (!entity::does_entity_exist(uLocal_726[iLocal_910])) {
				if (!func_277(player::player_ped_id(), vLocal_742[iLocal_910 /*3*/], 50f) &&
					func_277(player::player_ped_id(), vLocal_742[iLocal_910 /*3*/], 220f) &&
					!gameplay::is_position_occupied(vLocal_742[iLocal_910 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0)) {
					if (!cam::is_sphere_visible(vLocal_742[iLocal_910 /*3*/], 8f)) {
						iVar1 = gameplay::get_random_int_in_range(0, 6);
						if (iVar1 == 0) {
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1) {
							iVar0 = joaat("schafter2");
						}
						else if (iVar1 == 2) {
							iVar0 = joaat("rumpo");
						}
						else if (iVar1 == 3) {
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4) {
							iVar0 = joaat("schafter2");
						}
						else {
							iVar0 = joaat("rumpo");
						}
						if (!gameplay::get_ground_z_for_3d_coord(vLocal_742[iLocal_910 /*3*/], &fVar2, 0)) {
							fVar2 = vLocal_742[iLocal_910 /*3*/].f_2;
						}
						uLocal_726[iLocal_910] = vehicle::create_vehicle(iVar0, vLocal_742[iLocal_910 /*3*/],
																		 vLocal_742[iLocal_910 /*3*/].f_1, fVar2,
																		 fLocal_764[iLocal_910], 1, 1);
						uLocal_734[iLocal_910] = ped::create_random_ped_as_driver(uLocal_726[iLocal_910], 1);
						vehicle::set_vehicle_on_ground_properly(uLocal_726[iLocal_910], 1084227584);
						ai::task_vehicle_follow_waypoint_recording(uLocal_734[iLocal_910], uLocal_726[iLocal_910],
																   "Eps8TRAFFIC03", 262275, 0, 1032, -1, -1f, 0,
																   1073741824);
					}
				}
			}
			else if (func_16(uLocal_726[iLocal_910])) {
				if (ai::is_waypoint_playback_going_on_for_vehicle(uLocal_726[iLocal_910])) {
					if (ai::get_vehicle_waypoint_progress(uLocal_726[iLocal_910]) > 70) {
						if (!func_55(player::player_ped_id(), uLocal_726[iLocal_910], 70f, 1)) {
							if (entity::is_entity_occluded(uLocal_726[iLocal_910])) {
								func_18(&uLocal_734[iLocal_910]);
								func_15(&uLocal_726[iLocal_910]);
							}
						}
					}
				}
				else if (entity::is_entity_occluded(uLocal_726[iLocal_910])) {
					func_18(&uLocal_734[iLocal_910]);
					func_15(&uLocal_726[iLocal_910]);
				}
			}
		}
		if (ai::get_is_waypoint_recording_loaded("Eps8TRAFFIC04")) {
			if (!entity::does_entity_exist(uLocal_772[iLocal_910])) {
				if (!func_277(player::player_ped_id(), vLocal_788[iLocal_910 /*3*/], 50f) &&
					!gameplay::is_position_occupied(vLocal_788[iLocal_910 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0)) {
					if (!cam::is_sphere_visible(vLocal_788[iLocal_910 /*3*/], 8f)) {
						iVar1 = gameplay::get_random_int_in_range(0, 6);
						if (iVar1 == 0) {
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1) {
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 2) {
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3) {
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4) {
							iVar0 = joaat("schafter2");
						}
						else {
							iVar0 = joaat("rumpo");
						}
						if (!gameplay::get_ground_z_for_3d_coord(vLocal_788[iLocal_910 /*3*/], &fVar2, 0)) {
							fVar2 = vLocal_788[iLocal_910 /*3*/].f_2;
						}
						uLocal_772[iLocal_910] = vehicle::create_vehicle(iVar0, vLocal_788[iLocal_910 /*3*/],
																		 vLocal_788[iLocal_910 /*3*/].f_1, fVar2,
																		 fLocal_810[iLocal_910], 1, 1);
						uLocal_780[iLocal_910] = ped::create_random_ped_as_driver(uLocal_772[iLocal_910], 1);
						vehicle::set_vehicle_on_ground_properly(uLocal_772[iLocal_910], 1084227584);
						ai::task_vehicle_follow_waypoint_recording(uLocal_780[iLocal_910], uLocal_772[iLocal_910],
																   "Eps8TRAFFIC04", 262275, 0, 1032, -1, -1f, 0,
																   1073741824);
					}
				}
			}
			else if (func_16(uLocal_772[iLocal_910])) {
				if (ai::is_waypoint_playback_going_on_for_vehicle(uLocal_772[iLocal_910])) {
					if (ai::get_vehicle_waypoint_progress(uLocal_772[iLocal_910]) > 70) {
						if (!func_55(player::player_ped_id(), uLocal_772[iLocal_910], 70f, 1)) {
							if (entity::is_entity_occluded(uLocal_772[iLocal_910])) {
								func_18(&uLocal_780[iLocal_910]);
								func_15(&uLocal_772[iLocal_910]);
							}
						}
					}
				}
				else if (entity::is_entity_occluded(uLocal_772[iLocal_910])) {
					func_18(&uLocal_780[iLocal_910]);
					func_15(&uLocal_772[iLocal_910]);
				}
			}
		}
		if (ai::get_is_waypoint_recording_loaded("Eps8TRAFFIC05")) {
			if (!entity::does_entity_exist(uLocal_818[iLocal_910])) {
				if (!func_277(player::player_ped_id(), vLocal_834[iLocal_910 /*3*/], 50f) &&
					func_277(player::player_ped_id(), vLocal_834[iLocal_910 /*3*/], 170f) &&
					!gameplay::is_position_occupied(vLocal_834[iLocal_910 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0)) {
					if (!cam::is_sphere_visible(vLocal_834[iLocal_910 /*3*/], 8f)) {
						iVar1 = gameplay::get_random_int_in_range(0, 6);
						if (iVar1 == 0) {
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1) {
							iVar0 = joaat("schafter2");
						}
						else if (iVar1 == 2) {
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3) {
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4) {
							iVar0 = joaat("schafter2");
						}
						else {
							iVar0 = joaat("rumpo");
						}
						if (!gameplay::get_ground_z_for_3d_coord(vLocal_834[iLocal_910 /*3*/], &fVar2, 0)) {
							fVar2 = vLocal_834[iLocal_910 /*3*/].f_2;
						}
						uLocal_818[iLocal_910] = vehicle::create_vehicle(iVar0, vLocal_834[iLocal_910 /*3*/],
																		 vLocal_834[iLocal_910 /*3*/].f_1, fVar2,
																		 fLocal_856[iLocal_910], 1, 1);
						uLocal_826[iLocal_910] = ped::create_random_ped_as_driver(uLocal_818[iLocal_910], 1);
						vehicle::set_vehicle_on_ground_properly(uLocal_818[iLocal_910], 1084227584);
						ai::task_vehicle_follow_waypoint_recording(uLocal_826[iLocal_910], uLocal_818[iLocal_910],
																   "Eps8TRAFFIC05", 262275, 0, 1032, -1, -1f, 0,
																   1073741824);
					}
				}
			}
			else if (func_16(uLocal_818[iLocal_910])) {
				if (ai::is_waypoint_playback_going_on_for_vehicle(uLocal_818[iLocal_910])) {
					if (ai::get_vehicle_waypoint_progress(uLocal_818[iLocal_910]) > 40) {
						if (!func_55(player::player_ped_id(), uLocal_818[iLocal_910], 60f, 1)) {
							if (entity::is_entity_occluded(uLocal_818[iLocal_910])) {
								func_18(&uLocal_826[iLocal_910]);
								func_15(&uLocal_818[iLocal_910]);
							}
						}
					}
				}
				else if (entity::is_entity_occluded(uLocal_818[iLocal_910])) {
					func_18(&uLocal_826[iLocal_910]);
					func_15(&uLocal_818[iLocal_910]);
				}
			}
		}
		if (ai::get_is_waypoint_recording_loaded("Eps8TRAFFIC06")) {
			if (!entity::does_entity_exist(uLocal_864[iLocal_910])) {
				if (!func_277(player::player_ped_id(), vLocal_880[iLocal_910 /*3*/], 50f) &&
					func_277(player::player_ped_id(), vLocal_880[iLocal_910 /*3*/], 170f) &&
					!gameplay::is_position_occupied(vLocal_880[iLocal_910 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0)) {
					if (!cam::is_sphere_visible(vLocal_880[iLocal_910 /*3*/], 8f)) {
						iVar1 = gameplay::get_random_int_in_range(0, 6);
						if (iVar1 == 0) {
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1) {
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 2) {
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3) {
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4) {
							iVar0 = joaat("schafter2");
						}
						else {
							iVar0 = joaat("rumpo");
						}
						if (!gameplay::get_ground_z_for_3d_coord(vLocal_880[iLocal_910 /*3*/], &fVar2, 0)) {
							fVar2 = vLocal_880[iLocal_910 /*3*/].f_2;
						}
						uLocal_864[iLocal_910] = vehicle::create_vehicle(iVar0, vLocal_880[iLocal_910 /*3*/],
																		 vLocal_880[iLocal_910 /*3*/].f_1, fVar2,
																		 fLocal_902[iLocal_910], 1, 1);
						uLocal_872[iLocal_910] = ped::create_random_ped_as_driver(uLocal_864[iLocal_910], 1);
						vehicle::set_vehicle_on_ground_properly(uLocal_864[iLocal_910], 1084227584);
						ai::task_vehicle_follow_waypoint_recording(uLocal_872[iLocal_910], uLocal_864[iLocal_910],
																   "Eps8TRAFFIC06", 262275, 0, 1032, -1, -1f, 0,
																   1073741824);
					}
				}
			}
			else if (func_16(uLocal_864[iLocal_910])) {
				if (ai::is_waypoint_playback_going_on_for_vehicle(uLocal_864[iLocal_910])) {
					if (ai::get_vehicle_waypoint_progress(uLocal_864[iLocal_910]) > 40) {
						if (!func_55(player::player_ped_id(), uLocal_864[iLocal_910], 60f, 1)) {
							if (entity::is_entity_occluded(uLocal_864[iLocal_910])) {
								func_18(&uLocal_872[iLocal_910]);
								func_15(&uLocal_864[iLocal_910]);
							}
						}
					}
				}
				else if (entity::is_entity_occluded(uLocal_864[iLocal_910])) {
					func_18(&uLocal_872[iLocal_910]);
					func_15(&uLocal_864[iLocal_910]);
				}
			}
		}
		iLocal_910++;
		if (iLocal_910 > 6) {
			iLocal_910 = 0;
		}
	}
}

// Position - 0x2FAAF
void func_334() {
	if (!audio::is_audio_scene_active("EPSILONISM_08_COMPLIANCE")) {
		if (func_16(uLocal_616[0])) {
			audio::_dynamic_mixer_related_fn(uLocal_616[0], "EPSILONISM_08_COMPLIANCE_CAR_LEADER", 0);
		}
		if (func_16(iLocal_615)) {
			audio::_dynamic_mixer_related_fn(iLocal_615, "EPSILONISM_08_COMPLIANCE_HELI", 0);
		}
		audio::start_audio_scene("EPSILONISM_08_COMPLIANCE");
	}
}

// Position - 0x2FAFE
void func_335() {
	vehicle::set_random_vehicle_density_multiplier_this_frame(0f);
	func_342();
	func_341();
	func_337();
	func_336();
	if (!iLocal_384) {
		audio::set_static_emitter_enabled("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 0);
		audio::trigger_music_event("EPS8_START");
		iLocal_384 = 1;
	}
	iLocal_568 = 3;
}

// Position - 0x2FB3C
void func_336() {
	ui::clear_prints();
	streaming::set_model_as_no_longer_needed(joaat("s_m_m_highsec_01"));
	streaming::set_model_as_no_longer_needed(joaat("sentinel"));
	streaming::set_model_as_no_longer_needed(joaat("landstalker"));
	iLocal_939 = func_279(uLocal_616[0], 1, 5);
	func_286("EPS8_05", 7500, 0);
	iLocal_358 = 1;
	iLocal_291 = gameplay::get_game_timer();
	if (func_17(uLocal_616[0])) {
		if (func_78(uLocal_580[0])) {
			ai::open_sequence_task(&iLocal_942);
			ai::task_vehicle_follow_waypoint_recording(0, uLocal_616[0], "Eps8LS01", 786468, 0, 8, -1, -1f, 0,
													   1073741824);
			ai::close_sequence_task(iLocal_942);
			ai::clear_ped_tasks(uLocal_580[0]);
			ai::task_perform_sequence(uLocal_580[0], iLocal_942);
			ai::clear_sequence_task(&iLocal_942);
		}
	}
	if (func_17(iLocal_615)) {
		vehicle::start_playback_recorded_vehicle(iLocal_615, 222, "Ep8Heli01", 1);
		vehicle::set_playback_speed(iLocal_615, 1.25f);
	}
}

// Position - 0x2FC11
void func_337() {
	iLocal_615 = vehicle::create_vehicle(joaat("maverick"), vLocal_206, fLocal_250, 1, 1);
	vehicle::set_vehicle_colours(iLocal_615, iLocal_161, iLocal_161);
	vehicle::set_vehicle_extra_colours(iLocal_615, 0, 0);
	streaming::set_model_as_no_longer_needed(joaat("maverick"));
	iLocal_578 = ped::create_ped_inside_vehicle(iLocal_615, 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
	ped::set_ped_accuracy(iLocal_578, iLocal_154);
	ped::set_ped_shoot_rate(iLocal_578, iLocal_156);
	weapon::give_weapon_to_ped(iLocal_578, joaat("weapon_combatpistol"), -1, 0, 0);
	ped::set_ped_relationship_group_hash(iLocal_578, iLocal_388);
	vehicle::set_vehicle_doors_locked(iLocal_615, 3);
	entity::set_entity_is_target_priority(iLocal_578, 1, 0);
	ped::set_ped_component_variation(iLocal_578, 0, 0, 1, 0);
	ped::set_ped_component_variation(iLocal_578, 3, 0, 2, 0);
	ped::set_ped_component_variation(iLocal_578, 4, 0, 2, 0);
	ped::set_ped_component_variation(iLocal_578, 8, 1, 0, 0);
	ped::set_ped_component_variation(iLocal_578, 11, 1, 0, 0);
	iLocal_596 = ped::create_ped_inside_vehicle(iLocal_615, 26, joaat("a_m_y_epsilon_01"), 1, 1, 1);
	entity::set_entity_lod_dist(iLocal_596, 100);
	ped::set_ped_accuracy(iLocal_596, iLocal_154);
	ped::set_ped_shoot_rate(iLocal_596, iLocal_156);
	ped::set_ped_component_variation(iLocal_596, 0, 1, 0, 0);
	ped::set_ped_component_variation(iLocal_596, 1, 1, 0, 0);
	ped::set_ped_component_variation(iLocal_596, 3, 0, 0, 0);
	ped::set_ped_component_variation(iLocal_596, 4, 0, 0, 0);
	ped::set_ped_component_variation(iLocal_596, 10, 1, 0, 0);
	ped::set_ped_relationship_group_hash(iLocal_596, iLocal_388);
	weapon::give_weapon_to_ped(iLocal_596, joaat("weapon_combatpistol"), -1, 0, 0);
	weapon::give_weapon_component_to_ped(iLocal_596, joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
	ped::set_ped_keep_task(iLocal_596, 1);
	ai::task_look_at_entity(iLocal_596, player::player_ped_id(), -1, 0, 2);
	ped::set_ped_can_head_ik(iLocal_596, 1);
	ped::set_ped_combat_attributes(iLocal_596, 13, 1);
	ped::set_ped_can_be_targetted(iLocal_596, 0);
	iLocal_579 = ped::create_ped_inside_vehicle(iLocal_615, 26, joaat("s_m_m_highsec_01"), 2, 1, 1);
	ped::set_ped_accuracy(iLocal_579, iLocal_154 - iLocal_155);
	ped::set_ped_shoot_rate(iLocal_579, iLocal_156 + iLocal_157);
	ped::set_ped_config_flag(iLocal_579, 324, 1);
	weapon::give_weapon_to_ped(iLocal_579, joaat("weapon_advancedrifle"), -1, 0, 0);
	weapon::give_weapon_component_to_ped(iLocal_579, joaat("weapon_advancedrifle"), joaat("component_at_ar_flsh"));
	weapon::give_weapon_component_to_ped(iLocal_579, joaat("weapon_advancedrifle"), joaat("component_at_scope_small"));
	weapon::set_current_ped_weapon(iLocal_579, joaat("weapon_advancedrifle"), 1);
	ped::set_ped_keep_task(iLocal_579, 1);
	ped::set_ped_combat_range(iLocal_579, 2);
	ped::set_ped_hearing_range(iLocal_579, 400f);
	ped::set_ped_seeing_range(iLocal_579, 400f);
	ped::set_ped_id_range(iLocal_579, 400f);
	ped::set_ped_firing_pattern(iLocal_579, -957453492);
	ped::set_ped_combat_attributes(iLocal_579, 2, 1);
	ped::set_ped_combat_attributes(iLocal_579, 3, 0);
	ped::set_ped_relationship_group_hash(iLocal_579, iLocal_388);
	ai::task_look_at_entity(iLocal_579, player::player_ped_id(), -1, 0, 2);
	entity::set_entity_is_target_priority(iLocal_579, 1, 0);
	uLocal_570[5] = ped::create_ped_inside_vehicle(iLocal_615, 26, joaat("s_m_m_highsec_01"), 0, 1, 1);
	ped::set_ped_accuracy(uLocal_570[5], iLocal_154);
	ped::set_ped_shoot_rate(uLocal_570[5], iLocal_156);
	weapon::give_weapon_to_ped(uLocal_570[5], joaat("weapon_combatpistol"), -1, 0, 0);
	weapon::give_weapon_component_to_ped(uLocal_570[5], joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
	ped::set_ped_combat_attributes(uLocal_570[5], 12, 1);
	ped::set_ped_relationship_group_hash(uLocal_570[5], iLocal_388);
	entity::set_entity_is_target_priority(uLocal_570[5], 1, 0);
	ped::set_ped_config_flag(uLocal_570[5], 324, 1);
	uLocal_616[2] = vehicle::create_vehicle(joaat("sentinel"), vLocal_162[2 /*3*/], fLocal_233[2], 1, 1);
	vehicle::set_vehicle_on_ground_properly(uLocal_616[2], 1084227584);
	vehicle::set_vehicle_colours(uLocal_616[2], iLocal_161, iLocal_161);
	vehicle::set_vehicle_extra_colours(uLocal_616[2], 0, 0);
	entity::set_entity_only_damaged_by_player(uLocal_616[2], 1);
	vehicle::set_vehicle_mod_kit(uLocal_616[2], 0);
	vehicle::set_vehicle_window_tint(uLocal_616[2], 2);
	vehicle::set_vehicle_mod(uLocal_616[2], 15, 1, 0);
	vehicle::set_vehicle_mod(uLocal_616[2], 11, 1, 0);
	vehicle::set_vehicle_mod(uLocal_616[2], 12, 0, 0);
	vehicle::toggle_vehicle_mod(uLocal_616[2], 18, 1);
	vehicle::set_vehicle_number_plate_text_index(uLocal_616[2], 0);
	uLocal_580[2] = ped::create_ped_inside_vehicle(uLocal_616[2], 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
	ped::set_driver_ability(uLocal_580[2], 1f);
	ped::_0xDED5AF5A0EA4B297(uLocal_580[2], 1f);
	ped::set_ped_accuracy(uLocal_580[2], iLocal_154);
	ped::set_ped_shoot_rate(uLocal_580[2], iLocal_156);
	entity::set_entity_load_collision_flag(uLocal_580[2], 1);
	ped::set_ped_keep_task(uLocal_580[2], 1);
	weapon::give_weapon_to_ped(uLocal_580[2], joaat("weapon_pistol"), -1, 0, 0);
	ped::set_ped_combat_attributes(uLocal_580[2], 2, 1);
	ped::set_ped_combat_attributes(uLocal_580[2], 12, 1);
	ped::set_ped_relationship_group_hash(uLocal_580[2], iLocal_388);
	entity::set_entity_is_target_priority(uLocal_580[2], 1, 0);
	ped::set_ped_config_flag(uLocal_580[2], 324, 1);
	uLocal_588[2] = ped::create_ped_inside_vehicle(uLocal_616[2], 26, joaat("s_m_m_highsec_01"), 0, 1, 1);
	ped::set_ped_accuracy(uLocal_588[2], iLocal_154);
	ped::set_ped_shoot_rate(uLocal_588[2], iLocal_156);
	ped::set_ped_keep_task(uLocal_588[2], 1);
	weapon::give_weapon_to_ped(uLocal_588[2], joaat("weapon_combatpistol"), -1, 0, 0);
	weapon::give_weapon_component_to_ped(uLocal_588[2], joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
	ped::set_ped_combat_attributes(uLocal_588[2], 2, 1);
	ped::set_ped_combat_attributes(uLocal_588[2], 13, 1);
	ped::set_ped_relationship_group_hash(uLocal_588[2], iLocal_388);
	entity::set_entity_is_target_priority(uLocal_588[2], 1, 0);
	ped::set_ped_config_flag(uLocal_588[2], 324, 1);
	uLocal_616[3] = vehicle::create_vehicle(joaat("sentinel"), vLocal_162[3 /*3*/], fLocal_233[3], 1, 1);
	vehicle::set_vehicle_on_ground_properly(uLocal_616[3], 1084227584);
	vehicle::set_vehicle_colours(uLocal_616[3], iLocal_161, iLocal_161);
	vehicle::set_vehicle_extra_colours(uLocal_616[3], 0, 0);
	entity::set_entity_only_damaged_by_player(uLocal_616[3], 1);
	vehicle::set_vehicle_mod_kit(uLocal_616[3], 0);
	vehicle::set_vehicle_window_tint(uLocal_616[3], 2);
	vehicle::set_vehicle_mod(uLocal_616[3], 15, 1, 0);
	vehicle::set_vehicle_mod(uLocal_616[3], 11, 1, 0);
	vehicle::set_vehicle_mod(uLocal_616[3], 12, 0, 0);
	vehicle::toggle_vehicle_mod(uLocal_616[3], 18, 1);
	vehicle::set_vehicle_number_plate_text_index(uLocal_616[3], 0);
	uLocal_580[3] = ped::create_ped_inside_vehicle(uLocal_616[3], 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
	ped::set_driver_ability(uLocal_580[3], 1f);
	ped::_0xDED5AF5A0EA4B297(uLocal_580[3], 1f);
	ped::set_ped_accuracy(uLocal_580[3], iLocal_154);
	ped::set_ped_shoot_rate(uLocal_580[3], iLocal_156);
	entity::set_entity_load_collision_flag(uLocal_580[3], 1);
	ped::set_ped_keep_task(uLocal_580[3], 1);
	weapon::give_weapon_to_ped(uLocal_580[3], joaat("weapon_pistol"), -1, 0, 0);
	ped::set_ped_combat_attributes(uLocal_580[3], 2, 1);
	ped::set_ped_combat_attributes(uLocal_580[3], 12, 1);
	ped::set_ped_relationship_group_hash(uLocal_580[3], iLocal_388);
	entity::set_entity_is_target_priority(uLocal_580[3], 1, 0);
	ped::set_ped_config_flag(uLocal_580[3], 324, 1);
	uLocal_588[3] = ped::create_ped_inside_vehicle(uLocal_616[3], 26, joaat("s_m_m_highsec_01"), 0, 1, 1);
	ped::set_ped_accuracy(uLocal_588[3], iLocal_154);
	ped::set_ped_shoot_rate(uLocal_588[3], iLocal_156);
	ped::set_ped_keep_task(uLocal_588[3], 1);
	weapon::give_weapon_to_ped(uLocal_588[3], joaat("weapon_pistol"), -1, 0, 0);
	weapon::give_weapon_component_to_ped(uLocal_588[3], joaat("weapon_pistol"), joaat("component_at_pi_flsh"));
	ped::set_ped_combat_attributes(uLocal_588[3], 2, 1);
	ped::set_ped_combat_attributes(uLocal_588[3], 13, 1);
	ped::set_ped_relationship_group_hash(uLocal_588[3], iLocal_388);
	entity::set_entity_is_target_priority(uLocal_588[3], 1, 0);
	ped::set_ped_config_flag(uLocal_588[3], 324, 1);
	if (func_78(uLocal_570[0])) {
		ped::set_ped_accuracy(uLocal_570[0], iLocal_154);
		ped::set_ped_shoot_rate(uLocal_570[0], iLocal_156);
		weapon::give_weapon_to_ped(uLocal_570[0], joaat("weapon_smg"), -1, 0, 0);
		ped::set_ped_combat_attributes(uLocal_570[0], 12, 1);
		ped::set_ped_combat_attributes(uLocal_570[0], 1, 0);
		ai::task_look_at_entity(uLocal_570[0], player::player_ped_id(), -1, 0, 2);
		ped::set_ped_relationship_group_hash(uLocal_570[0], iLocal_388);
		entity::set_entity_is_target_priority(uLocal_570[0], 1, 0);
		ped::set_ped_can_evasive_dive(uLocal_570[0], 0);
		ped::set_ped_config_flag(uLocal_570[0], 324, 1);
		ped::set_ped_component_variation(uLocal_570[0], 0, 1, 1, 0);
		ped::set_ped_component_variation(uLocal_570[0], 3, 0, 1, 0);
		ped::set_ped_component_variation(uLocal_570[0], 4, 0, 1, 0);
		ped::set_ped_component_variation(uLocal_570[0], 8, 1, 0, 0);
		ped::set_ped_component_variation(uLocal_570[0], 11, 1, 0, 0);
	}
	if (func_78(uLocal_570[2])) {
		ped::set_ped_accuracy(uLocal_570[2], iLocal_154);
		ped::set_ped_shoot_rate(uLocal_570[2], iLocal_156);
		weapon::give_weapon_to_ped(uLocal_570[2], joaat("weapon_smg"), -1, 0, 0);
		weapon::give_weapon_component_to_ped(uLocal_570[2], joaat("weapon_smg"), joaat("component_at_ar_flsh"));
		ped::set_ped_combat_attributes(uLocal_570[2], 12, 1);
		ped::set_ped_combat_attributes(uLocal_570[2], 1, 0);
		ai::task_look_at_entity(uLocal_570[2], player::player_ped_id(), -1, 0, 2);
		ped::set_ped_relationship_group_hash(uLocal_570[2], iLocal_388);
		entity::set_entity_is_target_priority(uLocal_570[2], 1, 0);
		ped::set_ped_can_evasive_dive(uLocal_570[2], 0);
		ped::set_ped_config_flag(uLocal_570[2], 324, 1);
		ped::set_ped_component_variation(uLocal_570[2], 0, 0, 0, 0);
		ped::set_ped_component_variation(uLocal_570[2], 3, 0, 1, 0);
		ped::set_ped_component_variation(uLocal_570[2], 4, 0, 1, 0);
		ped::set_ped_component_variation(uLocal_570[2], 8, 0, 0, 0);
		ped::set_ped_component_variation(uLocal_570[2], 11, 0, 0, 0);
	}
	uLocal_570[3] = ped::create_ped(26, joaat("s_m_m_highsec_01"), vLocal_184[3 /*3*/], fLocal_241[3], 1, 1);
	ped::set_ped_accuracy(uLocal_570[3], iLocal_154);
	ped::set_ped_shoot_rate(uLocal_570[3], iLocal_156);
	weapon::give_weapon_to_ped(uLocal_570[3], joaat("weapon_smg"), -1, 0, 0);
	ped::set_ped_combat_attributes(uLocal_570[3], 12, 1);
	ped::set_ped_combat_attributes(uLocal_570[3], 1, 0);
	ai::task_look_at_entity(uLocal_570[3], player::player_ped_id(), -1, 0, 2);
	ped::set_ped_relationship_group_hash(uLocal_570[3], iLocal_388);
	entity::set_entity_is_target_priority(uLocal_570[3], 1, 0);
	ai::task_play_anim(uLocal_570[3], "rcmepsilonism8", "security_idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
	ped::set_ped_can_evasive_dive(uLocal_570[3], 0);
	ped::set_ped_config_flag(uLocal_570[3], 324, 1);
	ped::set_ped_component_variation(uLocal_570[3], 0, 1, 2, 0);
	ped::set_ped_component_variation(uLocal_570[3], 3, 0, 0, 0);
	ped::set_ped_component_variation(uLocal_570[3], 4, 0, 0, 0);
	ped::set_ped_component_variation(uLocal_570[3], 8, 0, 0, 0);
	ped::set_ped_component_variation(uLocal_570[3], 11, 0, 0, 0);
	uLocal_570[4] = ped::create_ped(26, joaat("s_m_m_highsec_01"), vLocal_184[4 /*3*/], fLocal_241[4], 1, 1);
	ped::set_ped_accuracy(uLocal_570[4], iLocal_154);
	ped::set_ped_shoot_rate(uLocal_570[4], iLocal_156);
	weapon::give_weapon_to_ped(uLocal_570[4], joaat("weapon_smg"), -1, 0, 0);
	weapon::give_weapon_component_to_ped(uLocal_570[4], joaat("weapon_smg"), joaat("component_at_ar_flsh"));
	ped::set_ped_combat_attributes(uLocal_570[4], 13, 1);
	ped::set_ped_combat_attributes(uLocal_570[4], 1, 0);
	ai::task_look_at_entity(uLocal_570[4], player::player_ped_id(), -1, 0, 2);
	ped::set_ped_relationship_group_hash(uLocal_570[4], iLocal_388);
	entity::set_entity_is_target_priority(uLocal_570[4], 1, 0);
	ai::task_play_anim(uLocal_570[4], "rcmepsilonism8", "security_idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
	ped::set_ped_can_evasive_dive(uLocal_570[4], 0);
	ped::set_ped_config_flag(uLocal_570[4], 324, 1);
	ped::set_ped_component_variation(uLocal_570[4], 0, 1, 0, 0);
	ped::set_ped_component_variation(uLocal_570[4], 3, 0, 2, 0);
	ped::set_ped_component_variation(uLocal_570[4], 4, 0, 0, 0);
	ped::set_ped_component_variation(uLocal_570[4], 8, 1, 0, 0);
	ped::set_ped_component_variation(uLocal_570[4], 11, 1, 0, 0);
	if (func_78(uLocal_580[0])) {
		ped::set_driver_ability(uLocal_580[0], 1f);
		ped::_0xDED5AF5A0EA4B297(uLocal_580[0], 1f);
		ped::set_ped_accuracy(uLocal_580[0], iLocal_154);
		ped::set_ped_shoot_rate(uLocal_580[0], iLocal_156);
		weapon::give_weapon_to_ped(uLocal_580[0], joaat("weapon_combatpistol"), -1, 0, 0);
		ped::set_ped_combat_attributes(uLocal_580[0], 12, 1);
		ped::set_ped_combat_attributes(uLocal_580[0], 2, 1);
		ped::set_ped_relationship_group_hash(uLocal_580[0], iLocal_388);
		entity::set_entity_is_target_priority(uLocal_580[0], 1, 0);
		ped::set_ped_config_flag(uLocal_580[0], 324, 1);
		ped::set_ped_component_variation(uLocal_580[0], 0, 0, 1, 0);
		ped::set_ped_component_variation(uLocal_580[0], 3, 0, 1, 0);
		ped::set_ped_component_variation(uLocal_580[0], 4, 0, 1, 0);
		ped::set_ped_component_variation(uLocal_580[0], 8, 0, 0, 0);
		ped::set_ped_component_variation(uLocal_580[0], 11, 0, 0, 0);
	}
	if (func_78(uLocal_588[0])) {
		ped::set_ped_accuracy(uLocal_588[0], iLocal_154);
		ped::set_ped_shoot_rate(uLocal_588[0], iLocal_156);
		weapon::give_weapon_to_ped(uLocal_588[0], joaat("weapon_microsmg"), -1, 0, 0);
		weapon::give_weapon_component_to_ped(uLocal_588[0], joaat("weapon_microsmg"), joaat("component_at_pi_flsh"));
		weapon::give_weapon_component_to_ped(uLocal_588[0], joaat("weapon_microsmg"),
											 joaat("component_at_scope_macro"));
		ped::set_ped_combat_attributes(uLocal_588[0], 2, 1);
		ped::set_ped_combat_attributes(uLocal_588[0], 13, 1);
		ped::set_ped_relationship_group_hash(uLocal_588[0], iLocal_388);
		entity::set_entity_is_target_priority(uLocal_588[0], 1, 0);
		ped::set_ped_config_flag(uLocal_588[0], 324, 1);
		ped::set_ped_component_variation(uLocal_588[0], 0, 1, 0, 0);
		ped::set_ped_component_variation(uLocal_588[0], 3, 0, 2, 0);
		ped::set_ped_component_variation(uLocal_588[0], 4, 0, 2, 0);
		ped::set_ped_component_variation(uLocal_588[0], 8, 1, 0, 0);
		ped::set_ped_component_variation(uLocal_588[0], 11, 0, 1, 0);
	}
	func_340(&uLocal_390, 8, iLocal_596, "EPSGUARD", 0, 1);
	func_340(&uLocal_390, 3, iLocal_578, "EPSPILOT", 0, 1);
	func_340(&uLocal_390, 5, uLocal_570[0], "EPSGUARD2", 0, 1);
	func_340(&uLocal_390, 6, uLocal_570[3], "EPSGUARD7", 0, 1);
	func_340(&uLocal_390, 7, uLocal_570[4], "EPSGUARD8", 0, 1);
	func_338(1, 0, 0);
	func_338(60, 0, 0);
	func_338(55, 0, 0);
	func_112(player::player_ped_id(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	gameplay::_0x9B2BD3773123EA2F(12, 1);
	gameplay::_0x9B2BD3773123EA2F(2, 1);
	gameplay::_0x9B2BD3773123EA2F(5, 1);
	gameplay::_0x9B2BD3773123EA2F(3, 1);
	iLocal_291 = gameplay::get_game_timer();
}

// Position - 0x3095D
void func_338(int iParam0, int iParam1, int iParam2) {
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		func_68();
		if (iParam1 == 4) {
			Global_101700.f_27009[iParam0 /*29*/].f_12[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[2] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[2] = 1;
		}
		else {
			if (Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] == 1 &&
				Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] == 1) {
				iParam2 = 0;
			}
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (iParam2) {
			if (!Global_69702) {
				if (iParam1 != 4) {
					if (Global_14443 != iParam1) {
						Global_2972[iParam1 /*4*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443) {
					}
					else {
						Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_339();
					}
				}
				else {
					Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_339();
				}
			}
			else {
				Global_2923[1 /*6*/] = {Global_101700.f_27009[iParam0 /*29*/].f_3};
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_339();
			}
		}
	}
}

// Position - 0x30B07
void func_339() {
	char cVar0[64];
	char cVar16[64];
	char *sVar32;

	StringCopy(&cVar0, ui::_get_label_text(&Global_101700.f_27009[Global_2999 /*29*/].f_7), 64);
	if (Global_3018 == 0) {
		ui::_set_notification_text_entry("");
		StringCopy(&cVar16, ui::_get_label_text(&Global_2923[1 /*6*/]), 64);
		sVar32 = ui::_get_label_text("CELL_253");
		ui::_set_notification_message(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else {
		ui::_set_notification_text_entry("CELL_255");
		ui::add_text_component_substring_text_label(&Global_2923[1 /*6*/]);
		ui::_set_notification_message(&cVar0, &cVar0, 0, 3, "", 0);
	}
	gameplay::clear_bit(&Global_2313, 0);
}

// Position - 0x30B86
void func_340(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&(*uParam0)[iParam1 /*10*/].f_1, sParam3, 24);
	(*uParam0)[iParam1 /*10*/].f_7 = 1;
	(*uParam0)[iParam1 /*10*/].f_8 = iParam4;
	(*uParam0)[iParam1 /*10*/].f_9 = iParam5;
	if (!Global_69702) {
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_8 == 0) {
				ped::set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else {
				ped::set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_9 == 0) {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

// Position - 0x30C21
void func_341() {
	while (!streaming::has_model_loaded(joaat("s_m_m_highsec_01")) ||
		   !streaming::has_model_loaded(joaat("a_m_y_epsilon_01")) || !streaming::has_model_loaded(joaat("sentinel")) ||
		   !streaming::has_model_loaded(joaat("maverick")) ||
		   !streaming::has_model_loaded(joaat("p_ld_heist_bag_s_1")) ||
		   !vehicle::has_vehicle_recording_been_loaded(222, "Ep8Heli01") ||
		   !streaming::has_anim_dict_loaded("rcmepsilonism8") || !ai::get_is_waypoint_recording_loaded("Eps8EPED") ||
		   !ai::get_is_waypoint_recording_loaded("Eps8LS01") ||
		   !graphics::has_streamed_texture_dict_loaded("helicopterhud")) {
		system::wait(0);
	}
}

// Position - 0x30CCB
void func_342() {
	if (!entity::does_entity_exist(iLocal_632)) {
		iLocal_632 = vehicle::create_vehicle(joaat("tailgater"), vLocal_212, fLocal_251, 1, 1);
		func_305(iLocal_632, 0);
		vehicle::set_vehicle_colours(iLocal_632, iLocal_161, iLocal_161);
		vehicle::set_vehicle_extra_colours(iLocal_632, 0, 0);
		vehicle::set_vehicle_number_plate_text_index(iLocal_632, 0);
		vehicle::set_vehicle_number_plate_text(iLocal_632, "K1FFL0M");
	}
	if (func_17(iLocal_632)) {
		iLocal_271 = entity::get_entity_health(iLocal_632);
		fLocal_253 = vehicle::get_vehicle_petrol_tank_health(iLocal_632);
		fLocal_254 = vehicle::get_vehicle_engine_health(iLocal_632);
		entity::set_entity_health(iLocal_632, iLocal_271 + iLocal_271 / 3);
		vehicle::set_vehicle_petrol_tank_health(iLocal_632, fLocal_253 + fLocal_253 / 3f);
		vehicle::set_vehicle_engine_health(iLocal_632, fLocal_254 + fLocal_254 / 3f);
		vehicle::_0x51BB2D88D31A914B(iLocal_632, 0);
		vehicle::_0x192547247864DFDD(iLocal_632, 0);
		vehicle::set_vehicle_tyres_can_burst(iLocal_632, 0);
		vehicle::set_vehicle_has_strong_axles(iLocal_632, 1);
		vehicle::_set_vehicle_door_can_break(iLocal_632, 5, 0);
		vehicle::add_vehicle_stuck_check_with_warp(iLocal_632, 0.2f, 1000, 0, 0, 0, -1);
		uLocal_597[0] =
			object::create_object(joaat("p_ld_heist_bag_s_1"),
								  entity::get_offset_from_entity_in_world_coords(iLocal_632, 0f, 0f, 10f), 1, 1, 0);
		uLocal_597[1] =
			object::create_object(joaat("p_ld_heist_bag_s_1"),
								  entity::get_offset_from_entity_in_world_coords(iLocal_632, 0f, 0f, 11f), 1, 1, 0);
		uLocal_597[2] =
			object::create_object(joaat("p_ld_heist_bag_s_1"),
								  entity::get_offset_from_entity_in_world_coords(iLocal_632, 0f, 0f, 12f), 1, 1, 0);
		uLocal_597[3] =
			object::create_object(joaat("p_ld_heist_bag_s_1"),
								  entity::get_offset_from_entity_in_world_coords(iLocal_632, 0f, 0f, 13f), 1, 1, 0);
		entity::attach_entity_to_entity(uLocal_597[0], iLocal_632, 0, -0.06f, -1.93f, -0.1f, 0f, 0f, 91f, 0, 0, 0, 0, 2,
										1);
		entity::attach_entity_to_entity(uLocal_597[1], iLocal_632, 0, 0.2f, -1.92f, -0.1f, 0f, 0f, 93f, 0, 0, 0, 0, 2,
										1);
		entity::attach_entity_to_entity(uLocal_597[2], iLocal_632, 0, 0.4f, -1.94f, -0.1f, 0f, 0f, 89f, 0, 0, 0, 0, 2,
										1);
		entity::attach_entity_to_entity(uLocal_597[3], iLocal_632, 0, 0.66f, -1.95f, -0.1f, 0f, 0f, 89f, 0, 0, 0, 0, 2,
										1);
		vehicle::set_vehicle_doors_locked(iLocal_632, 1);
		if (!func_343()) {
			if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
				ped::set_ped_into_vehicle(player::player_ped_id(), iLocal_632, -1);
			}
		}
	}
	gameplay::clear_area_of_vehicles(-567.6498f, -2.9035f, 43.3971f, 400f, 1, 0, 0, 0, 0);
	ped::set_ped_non_creation_area(-711.6323f, 42.0868f, 14.5077f, -663.5175f, 118.0403f, 86.0362f);
}

// Position - 0x30F42
bool func_343() { return gameplay::is_bit_set(Global_91491.f_20, 13); }

// Position - 0x30F56
void func_344() {
	int iVar0;

	ui::hide_hud_and_radar_this_frame();
	ui::_0x25F87B30C382FCA7();
	switch (iLocal_567) {
	case 0:
		if (iLocal_308 == 0) {
			func_422("ep_8_rcm", 0);
			if (!cam::does_cam_exist(iLocal_613)) {
				iLocal_613 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 1);
			}
			if (!cam::does_cam_exist(iLocal_614)) {
				iLocal_614 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 1);
			}
			cam::set_cam_params(iLocal_613, -692.1f, 18.8f, 40.3f, 0.7f, 0f, 24.5f, 50f, 0, 1, 1, 2);
			cam::set_cam_params(iLocal_614, -691.8f, 18.9f, 42.9f, 22.2f, 0f, 24.8f, 50f, 0, 1, 1, 2);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			player::set_player_control(player::player_id(), 0, 128);
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), -677.9299f, 31.37431f, 37.97105f,
													 -677.7263f, 51.89373f, 48.20758f, 25f, 0, 1, 0)) {
					func_421(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), -676.7216f, 46.6862f, 41.7595f,
							 91.6871f, 0, 1);
					func_421(player::player_ped_id(), -682.9754f, 48.252f, 42.1423f, 107.7723f, 0, 1);
					ai::task_follow_nav_mesh_to_coord(player::player_ped_id(), -696.1459f, 41.7659f, 42.218f, 1f, -1,
													  1f, 0, 25.269f);
				}
				else {
					func_421(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), -719.0406f, 32.5248f, 41.7419f,
							 287.2928f, 0, 1);
					vehicle::set_vehicle_forward_speed(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 5f);
					ai::open_sequence_task(&iVar0);
					ai::task_vehicle_drive_to_coord(0, ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
													-703.656f, 37.143f, 42.2135f, 3f, 0, 0, 262144, 6f, 100f);
					ai::task_follow_nav_mesh_to_coord(0, -696.1459f, 41.7659f, 42.218f, 1f, -1, 1f, 0, 25.269f);
					ai::close_sequence_task(iVar0);
					ai::task_perform_sequence(player::player_ped_id(), iVar0);
					ai::clear_sequence_task(&iVar0);
				}
			}
			else {
				ai::task_follow_nav_mesh_to_coord(player::player_ped_id(), -696.1459f, 41.7659f, 42.218f, 1f, -1, 1f, 0,
												  25.269f);
			}
			cam::set_cam_active_with_interp(iLocal_614, iLocal_613, 6200, 1, 1);
			iLocal_307 = gameplay::get_game_timer();
			iLocal_308 = 1;
		}
		else if (iLocal_308 == 1) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (func_16(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
					if (!entity::is_entity_at_coord(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), -703.656f,
													37.143f, 42.2135f, 9f, 9f, 9f, 0, 1, 0)) {
						vehicle::set_vehicle_forward_speed(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 5f);
					}
				}
			}
			if (gameplay::get_game_timer() > iLocal_307 + 6000 || func_419(1000)) {
				iLocal_308 = 2;
			}
		}
		else if (iLocal_308 == 2) {
			if (cutscene::_0xB56BBBCC2955D9CB()) {
				if (func_224(player::player_ped_id(), 12, 8)) {
					func_418("Michael", joaat("player_zero"), 8);
				}
				if (func_224(player::player_ped_id(), 12, 28)) {
					func_418("Michael", joaat("player_zero"), 28);
				}
			}
			if (func_414(1, 1093140480, 0)) {
				iLocal_378 = 0;
				iLocal_379 = 0;
				iLocal_381 = 0;
				iLocal_380 = 0;
				if (!entity::is_entity_dead(iLocal_632, 0)) {
					cutscene::register_entity_for_cutscene(iLocal_632, "epsilon_car", 0, joaat("tailgater"), 32);
				}
				unk1::_0x48621C9FCA3EBD28(1);
				func_413();
				cutscene::start_cutscene(0);
				cutscene::_0x7F96F23FA9B73327(joaat("tailgater"));
				system::wait(0);
				cam::render_script_cams(0, 0, 3000, 1, 0, 0);
				cam::destroy_cam(iLocal_613, 0);
				cam::destroy_cam(iLocal_614, 0);
				func_406(-702.0282f, 38.17753f, 46.45677f, -659.6471f, 47.08546f, 38.1703f, 16f, -717.3519f, 34.7669f,
						 42.0465f, 289.3352f, 1, 1, 1, 0, 0);
				func_359(0f, 0f, 0f, 0f, 1, 0);
				func_355(-697.75f, 45.38f, 43.03f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				gameplay::clear_area_of_vehicles(-651.949f, 62.916f, 44.7353f, 150f, 0, 0, 0, 0, 0);
				pathfind::set_roads_in_angled_area(-651.3148f, 121.844f, 63.45312f, -650.0618f, 0.95496f, 35.75433f,
												   41.75f, 0, 0, 1);
				iLocal_567 = 1;
			}
		}
		break;

	case 1:
		if (cutscene::is_cutscene_playing()) {
			if (cutscene::can_set_exit_state_for_registered_entity("Michael", 0)) {
				unk1::_0x81CBAE94390F9F89();
				if (func_17(iLocal_632)) {
					if (func_78(player::player_ped_id())) {
						if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
							ped::set_ped_into_vehicle(player::player_ped_id(), iLocal_632, -1);
							ped::_0x2208438012482A1A(player::player_ped_id(), 0, 0);
						}
						iLocal_378 = 1;
					}
				}
			}
			if (cutscene::can_set_exit_state_for_registered_entity("epsilon_car", 0)) {
				if (!entity::is_entity_dead(iLocal_632, 0)) {
				}
				iLocal_381 = 1;
			}
			if (iLocal_381 == 0) {
				if (!entity::is_entity_dead(iLocal_632, 0)) {
					vehicle::set_all_vehicles_spawn(iLocal_632, 1, 1, 1);
				}
			}
			if (cutscene::can_set_exit_state_for_registered_entity("Cris", 0)) {
				iLocal_379 = 1;
			}
			cam::_0x59424BD75174C9B1();
		}
		else {
			iLocal_567 = 2;
		}
		if (cutscene::can_set_exit_state_for_camera(0)) {
			iLocal_380 = 1;
		}
		if (iLocal_378 == 0 || cutscene::was_cutscene_skipped()) {
			cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
			cam::set_gameplay_cam_relative_heading(0f);
		}
		if (iLocal_378 == 1 && iLocal_379 == 1 && iLocal_381 == 1 && iLocal_380 == 1) {
			iLocal_567 = 2;
		}
		break;

	case 2:
		if (!iLocal_384) {
			audio::set_static_emitter_enabled("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 0);
			audio::trigger_music_event("EPS8_START");
			iLocal_384 = 1;
		}
		if (Global_101700.f_17533.f_387 == 0) {
			func_354(0, 29, 50000);
			Global_101700.f_17533.f_387 = 1;
		}
		func_345(1, 1, 1, 1);
		if (func_17(iLocal_632)) {
			vehicle::set_vehicle_doors_shut(iLocal_632, 1);
			vehicle::set_vehicle_doors_locked(iLocal_632, 1);
		}
		iLocal_568 = 2;
		break;
	}
}

// Position - 0x31508
void func_345(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = player::get_player_index();
	player::set_everyone_ignore_player(iVar0, 0);
	player::set_player_control(iVar0, iParam3, 0);
	func_346(0, 1, 0, 0);
	if (iParam2 == 1) {
		ui::display_radar(1);
		ui::display_hud(1);
	}
	ui::clear_help(1);
	if (iParam0 == 1) {
		cam::set_widescreen_borders(0, 0);
	}
	if (iParam1 == 1) {
		if (iLocal_36 != 0 && iLocal_36 != joaat("object") && iLocal_36 != joaat("gadget_parachute")) {
			if (func_16(player::player_ped_id())) {
				if (weapon::has_ped_got_weapon(player::player_ped_id(), iLocal_36, 0)) {
					weapon::set_current_ped_weapon(player::player_ped_id(), iLocal_36, 0);
				}
			}
		}
	}
	if (func_78(player::player_ped_id())) {
		ped::set_ped_stealth_movement(player::player_ped_id(), 0, 0);
	}
}

// Position - 0x315AF
void func_346(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_353(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_7()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_352(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_353(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_352(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_350(player::player_id()) &&
				!func_348(player::player_id(), 0) && !func_347()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_350(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0x316C8
bool func_347() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x316E5
bool func_348(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_349(-1, 0) == 8;
	}
	else {
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1) {
		if (network::network_is_player_active(iParam0)) {
			bVar0 = player::get_player_team(iParam0) == 8;
		}
	}
	return bVar0;
}

// Position - 0x31730
int func_349(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_88();
	}
	if (Global_1315213[iVar1] == 1) {
		if (iParam1) {
		}
		iVar0 = 8;
	}
	else {
		iVar0 = Global_1312729[iVar1];
		if (iParam1) {
		}
	}
	return iVar0;
}

// Position - 0x31771
int func_350(int iParam0) {
	if (func_348(iParam0, 0)) {
		return 1;
	}
	if (func_351()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x317B3
bool func_351() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x317C4
int func_352(int iParam0, int iParam1, var uParam2, int iParam3) {
	int iVar0;

	iVar0 = 0;
	if (gameplay::is_pc_version()) {
		if (cutscene::_0xA0FE76168A189DDB() != iParam0 && uParam2) {
			cutscene::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

// Position - 0x317F7
void func_353(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}

// Position - 0x3181A
int func_354(int iParam0, int iParam1, int iParam2) {
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return 0;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return 0;
	}
	return func_26(Global_101700.f_27009[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

// Position - 0x31863
void func_355(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8,
			  int iParam9, int iParam10, int iParam11, int iParam12) {
	int iVar0;

	iVar0 = player::get_player_index();
	if (player::is_player_playing(iVar0)) {
		func_358(0);
		if (iParam9) {
			player::remove_player_helmet(player::get_player_index(), 1);
		}
		if (iParam8) {
			switch (func_69()) {
			case 0:
				if (func_224(player::player_ped_id(), 8, 15)) {
					func_112(player::player_ped_id(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				if (func_224(player::player_ped_id(), 9, 6)) {
					func_112(player::player_ped_id(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				break;

			case 1:
				if (func_224(player::player_ped_id(), 8, 1) || func_224(player::player_ped_id(), 8, 10)) {
					func_112(player::player_ped_id(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				break;

			case 2:
				if (func_224(player::player_ped_id(), 8, 4)) {
					func_112(player::player_ped_id(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				break;
			}
		}
		if (iParam6 == 1) {
			gameplay::clear_area_of_peds(func_357(player::get_player_index()), 50f, 0);
		}
		if (iParam7 == 1) {
			gameplay::clear_area_of_objects(vParam0, 30f, 0);
		}
		if (iParam10) {
			fire::stop_fire_in_range(vParam0, 30f);
		}
		gameplay::clear_area_of_projectiles(vParam0, 30f, 0);
		player::set_player_wanted_level(iVar0, 0, 0);
		player::set_player_wanted_level_now(iVar0, 0);
		player::set_everyone_ignore_player(iVar0, 1);
		if (iParam12) {
			ui::display_radar(0);
			ui::display_hud(0);
		}
		ui::clear_prints();
		if (iParam11 == 1) {
			ui::clear_help(1);
		}
		if (iParam3 == 1) {
			cam::set_widescreen_borders(1, 0);
		}
		if (iParam4 == 1) {
			iLocal_36 = 0;
			if (func_16(player::player_ped_id())) {
				iLocal_36 = weapon::get_selected_ped_weapon(player::player_ped_id());
				weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1) {
			func_356(500, 0);
		}
	}
}

// Position - 0x31A21
void func_356(int iParam0, int iParam1) {
	if (cam::is_screen_faded_out() || cam::is_screen_fading_out()) {
		if (!cam::is_screen_fading_in()) {
			cam::do_screen_fade_in(iParam0);
		}
	}
	if (iParam1) {
		while (!cam::is_screen_faded_in()) {
			system::wait(0);
		}
	}
}

// Position - 0x31A5D
Vector3 func_357(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0x31A70
void func_358(int iParam0) {
	int iVar0;

	iVar0 = player::get_player_index();
	if (!player::is_player_dead(iVar0)) {
		if (iParam0) {
		}
		player::set_player_control(iVar0, iParam0, 16);
		player::set_player_control(iVar0, iParam0, 32);
	}
	func_346(1, 1, 0, 0);
}

// Position - 0x31AAC
void func_359(vector3 vParam0, float *fParam3, int iParam4, int iParam5) {
	vector3 vVar0;
	float *fVar3;

	if (entity::does_entity_exist(Global_93635.f_4)) {
		if (vehicle::is_vehicle_driveable(Global_93635.f_4, 0)) {
			if (func_405(24) != Global_93635.f_4) {
				if (iParam4 == 1) {
					if (func_402(entity::get_entity_coords(Global_93635.f_4, 1), iParam5, &vVar0, &fVar3)) {
						vParam0 = {vVar0};
						fParam3 = fVar3;
					}
				}
				func_360(Global_93635.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

// Position - 0x31B27
void func_360(int iParam0, vector3 vParam1, float *fParam4, int iParam5, int iParam6) {
	struct<60> Var0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (iParam5 != 24 && iParam5 != 25) {
			return;
		}
		if (iParam5 == 24) {
			if (entity::does_entity_exist(Global_68531.f_484[25]) &&
				vehicle::is_vehicle_driveable(Global_68531.f_484[25], 0)) {
				if (Global_68531.f_484[25] == iParam0) {
					return;
				}
			}
		}
		if (!iParam6) {
			if (vehicle::is_big_vehicle(iParam0) || entity::get_entity_model(iParam0) == joaat("bus") ||
				entity::get_entity_model(iParam0) == joaat("tourbus")) {
				return;
			}
		}
		func_401(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_398(iParam0, &Var0);
		if (func_322(vParam1, 0f, 0f, 0f, 0)) {
			vParam1 = {entity::get_entity_coords(iParam0, 1)};
			fParam4 = entity::get_entity_heading(iParam0);
		}
		if (iParam5 == 24) {
			if (gameplay::get_hash_key(script::get_this_script_name()) != joaat("vehicle_gen_controller")) {
				Global_69519 = gameplay::get_hash_key(script::get_this_script_name());
			}
		}
		func_394(iParam5, &Var0, vParam1, fParam4, func_397(iParam0));
		func_361(iParam5, iParam0, 0);
	}
}

// Position - 0x31C50
void func_361(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam0 == -1) {
		return;
	}
	if (!func_391(&Global_68531.f_555[0 /*21*/], iParam0)) {
		return;
	}
	if (!gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 12) &&
		!gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
		if (Global_68531.f_555[0 /*21*/].f_4 != entity::get_entity_model(iParam1)) {
			return;
		}
	}
	if (Global_69438 != -1 && Global_69438 != iParam0) {
		return;
	}
	if (entity::does_entity_exist(iParam1)) {
		if (vehicle::is_vehicle_driveable(iParam1, 0)) {
			if (!entity::is_entity_a_mission_entity(iParam1)) {
				entity::set_entity_as_mission_entity(iParam1, 1, 1);
			}
			if (iParam0 == 24) {
				Global_101700.f_31389.f_4801 = func_380();
			}
			if (iParam1 != Global_68531.f_139[iParam0]) {
				if (iParam0 == 24) {
					iVar0 = func_405(iParam0);
					if (entity::does_entity_exist(iVar0) && vehicle::is_vehicle_driveable(iVar0, 0) &&
						iParam1 != iVar0) {
						func_362(iVar0, 145);
					}
				}
				Global_69437 = iParam1;
				Global_69438 = iParam0;
				Global_69439 = iParam2;
			}
		}
	}
}

// Position - 0x31D6D
void func_362(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_363(iParam0)) {
		return;
	}
	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
		iVar0 = vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0);
		if (!entity::does_entity_exist(iVar0)) {
			iVar0 = vehicle::get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (entity::does_entity_exist(iVar0) && !ped::is_ped_injured(iVar0)) {
			if (entity::get_entity_model(iVar0) == joaat("player_zero")) {
				iParam1 = 0;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_one")) {
				iParam1 = 1;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_two")) {
				iParam1 = 2;
			}
		}
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		iVar2 = 0;
		while (iVar2 < 2) {
			if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66) {
				if (!gameplay::is_string_null_or_empty(
						&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
					if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
													&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66) {
			if (!gameplay::is_string_null_or_empty(&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
				if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
												&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_398(iParam0, &Global_101700.f_31389.f_5510);
}

// Position - 0x31F6F
int func_363(int iParam0) {
	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0) || func_378(iParam0, 0, 0) ||
		func_378(iParam0, 1, 0) || func_378(iParam0, 2, 0) || func_397(iParam0) != 145 || func_377(iParam0) ||
		func_376(iParam0) || func_375(iParam0) || func_374(iParam0) || !func_364(entity::get_entity_model(iParam0))) {
		if (func_376(iParam0)) {
		}
		if (func_376(iParam0)) {
		}
		if (func_378(iParam0, 0, 0)) {
		}
		if (func_378(iParam0, 1, 0)) {
		}
		if (func_378(iParam0, 2, 0)) {
		}
		if (func_397(iParam0) != 145) {
		}
		return 0;
	}
	return 1;
}

// Position - 0x3204C
int func_364(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	if (!func_365(iParam0, 0)) {
		return 0;
	}
	if (vehicle::is_this_model_a_boat(iParam0) || vehicle::is_this_model_a_plane(iParam0) ||
		vehicle::is_this_model_a_heli(iParam0) || vehicle::is_this_model_a_train(iParam0)) {
		return 0;
	}
	switch (iParam0) {
	case joaat("bus"):
	case joaat("stretch"):
	case joaat("barracks"):
	case joaat("armytanker"):
	case joaat("rhino"):
	case joaat("armytrailer"):
	case joaat("barracks2"):
	case joaat("flatbed"):
	case joaat("ripley"):
	case joaat("towtruck"):
	case joaat("towtruck2"):
	case joaat("airbus"):
	case joaat("coach"):
	case joaat("rentalbus"):
	case joaat("tourbus"):
	case joaat("firetruk"):
	case joaat("pbus"):
	case joaat("trash"):
	case joaat("benson"):
	case joaat("boattrailer"):
	case joaat("biff"):
	case joaat("hauler"):
	case joaat("docktrailer"):
	case joaat("phantom"):
	case joaat("pounder"):
	case joaat("tractor2"):
	case joaat("bulldozer"):
	case joaat("handler"):
	case joaat("tiptruck"):
	case joaat("cutter"):
	case joaat("dump"):
	case joaat("mixer"):
	case joaat("mixer2"):
	case joaat("rubble"):
	case joaat("scrap"):
	case joaat("tiptruck2"):
	case joaat("camper"):
	case joaat("taco"):
	case joaat("boxville"):
	case joaat("boxville2"):
	case joaat("boxville3"):
	case joaat("journey"):
	case joaat("mule"):
	case joaat("mule2"):
	case joaat("police"):
	case joaat("police2"):
	case joaat("police3"):
	case joaat("police4"):
	case joaat("policeb"):
	case joaat("policeold1"):
	case joaat("policeold2"):
	case joaat("policet"):
	case joaat("taxi"):
	case joaat("submersible"):
	case joaat("submersible2"):
	case joaat("monster"): return 0;
	}
	return 1;
}

// Position - 0x321FD
int func_365(int iParam0, int iParam1) {
	int iVar0;
	struct<2> Var1;

	if (iParam0 == 0) {
		return 0;
	}
	if (!streaming::is_model_a_vehicle(iParam0)) {
		return 0;
	}
	if (iParam0 == joaat("dominator2") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("buffalo3") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("gauntlet2") && !network::network_is_game_in_progress() || iParam0 == joaat("blimp2") ||
		iParam0 == joaat("stalion2") && !network::network_is_game_in_progress() || iParam0 == joaat("blista3")) {
		if (!func_373()) {
			return 0;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < dlc1::get_num_dlc_vehicles()) {
			if (dlc1::get_dlc_vehicle_data(iVar0, &Var1)) {
				if (iParam0 == Var1.f_1) {
					if (dlc1::_is_dlc_data_empty(Var1)) {
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp")) {
		if (!func_372() && !func_371() && !func_370() && !func_369() && !func_373()) {
			return 0;
		}
	}
	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion")) {
		if (gameplay::is_durango_version() || gameplay::is_pc_version() || gameplay::is_orbis_version()) {
		}
		else if (!func_370()) {
			return 0;
		}
	}
	if (iParam1) {
		if (!func_368(iParam0)) {
			return 0;
		}
	}
	if (!func_366(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x3238B
int func_366(int iParam0) {
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_367()) {
		return 1;
	}
	unk3::_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4) {
		return 1;
	}
	switch (iParam0) {
	case joaat("dune4"): StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64); break;

	case joaat("voltic2"): StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64); break;

	case joaat("ruiner2"): StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64); break;

	case joaat("phantom2"): StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64); break;

	case joaat("technical2"): StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64); break;

	case joaat("boxville5"): StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64); break;

	case joaat("wastelander"): StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64); break;

	case joaat("blazer5"): StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64); break;

	default: return 1;
	}
	if (!mobile::_network_shop_is_item_unlocked(&cVar2)) {
		return 0;
	}
	return 1;
}

// Position - 0x32457
int func_367() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0x3246B
int func_368(int iParam0) {
	int iVar0;
	int iVar1;

	if (Global_2482093) {
		return 1;
	}
	iVar0 = 1;
	iVar1 = network::_get_posix_time();
	if (iParam0 == joaat("btype3")) {
		if (!Global_262145.f_5506 && !Global_262145.f_11530 && iVar1 < Global_262145.f_11531) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3")) {
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2")) {
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2")) {
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5")) {
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2")) {
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3")) {
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo")) {
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70")) {
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811")) {
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400")) {
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso")) {
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger")) {
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender")) {
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b")) {
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis")) {
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck")) {
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2")) {
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos")) {
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle")) {
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck")) {
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2")) {
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus")) {
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava")) {
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx")) {
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2")) {
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2")) {
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2")) {
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3")) {
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler")) {
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade")) {
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea")) {
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey")) {
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus")) {
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb")) {
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2")) {
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex")) {
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro")) {
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera")) {
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor")) {
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2")) {
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4")) {
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6")) {
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2")) {
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane")) {
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3")) {
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio")) {
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger")) {
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus")) {
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez")) {
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike")) {
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2")) {
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2")) {
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4")) {
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5")) {
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2")) {
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2")) {
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5")) {
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander")) {
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5")) {
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2")) {
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3")) {
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous")) {
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2")) {
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy")) {
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2")) {
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr")) {
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2")) {
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb")) {
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2")) {
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero")) {
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2")) {
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator")) {
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter")) {
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2")) {
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta")) {
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1")) {
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2")) {
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston")) {
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2")) {
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796) {
			iVar0 = 0;
		}
	}
	return iVar0;
}

// Position - 0x331AE
int func_369() { return 0; }

// Position - 0x331B7
int func_370() { return 1; }

// Position - 0x331C0
int func_371() { return 1; }

// Position - 0x331C9
int func_372() {
	if (dlc2::is_dlc_present(-1226939934)) {
		return 1;
	}
	return 0;
}

// Position - 0x331E2
bool func_373() {
	int iVar0;

	if (network::network_is_signed_in()) {
		if (network::_network_are_ros_available()) {
			if (network::_0x593570C289A77688()) {
				stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				gameplay::set_bit(&iVar0, 2);
				gameplay::set_bit(&iVar0, 4);
				gameplay::set_bit(&iVar0, 6);
				gameplay::set_bit(&Global_25, 2);
				gameplay::set_bit(&Global_25, 4);
				gameplay::set_bit(&Global_25, 6);
				stats::stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (gameplay::_0x5AA3BEFA29F03AD4()) {
					iVar0 = gameplay::get_profile_setting(866);
					gameplay::set_bit(&iVar0, 0);
					stats::_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_139179 == 2) {
		return true;
	}
	else if (Global_139179 == 3) {
		return false;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x3329D
int func_374(int iParam0) {
	int iVar0;
	char *sVar1;

	iVar0 = entity::get_entity_model(iParam0);
	sVar1 = vehicle::get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && gameplay::are_strings_equal(sVar1, "LAMAR G ")) {
		return 1;
	}
	if (!func_365(iVar0, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x332E3
int func_375(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(Global_89185[iVar0])) {
			if (Global_89185[iVar0] == iParam0) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x3331E
bool func_376(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar0 = 0;
		while (iVar0 < 9) {
			if (entity::does_entity_exist(Global_89155[iVar0]) &&
				vehicle::is_vehicle_driveable(Global_89155[iVar0], 0)) {
				if (Global_89155[iVar0] == iParam0 &&
					entity::get_entity_model(Global_89155[iVar0]) == entity::get_entity_model(iParam0)) {
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0x3339A
int func_377(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(Global_68531.f_484[24])) {
		if (iParam0 == Global_68531.f_484[24]) {
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iVar0 != 24 && iVar0 != 21 && iVar0 != 22 && iVar0 != 23 && iVar0 != 27 && iVar0 != 30 && iVar0 != 33 &&
				iVar0 != 28 && iVar0 != 31 && iVar0 != 34 && iVar0 != 26 && iVar0 != 29 && iVar0 != 32) {
				if (iParam0 == Global_68531.f_484[iVar0]) {
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x33482
bool func_378(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_379(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x334F3
bool func_379(int iParam0, int iParam1, char *sParam2, int *iParam3) {
	StringCopy(sParam2, "", 32);
	switch (iParam0) {
	case 0:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Michael - Beverly Hills", 32);
			*iParam3 = 0;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 1;
			return true;
		}
		break;

	case 1:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Franklin - Aunt", 32);
			*iParam3 = 5;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Franklin - Hills", 32);
			*iParam3 = 6;
			return true;
		}
		break;

	case 2:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 2;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - City", 32);
			*iParam3 = 3;
			return true;
		}
		else if (iParam1 == 2) {
			StringCopy(sParam2, "Trevor - Stripclub", 32);
			*iParam3 = 4;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x335CB
var func_380() {
	int *iVar0;

	func_390(&iVar0, time::get_clock_seconds());
	func_389(&iVar0, time::get_clock_minutes());
	func_388(&iVar0, time::get_clock_hours());
	func_383(&iVar0, time::get_clock_day_of_month());
	func_382(&iVar0, time::get_clock_month());
	func_381(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x33611
void func_381(int *iParam0, int iParam1) {
	if (iParam1 <= 0) {
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979) {
		return;
	}
	*iParam0 -= (*iParam0 & 2080374784);
	if (iParam1 < 2011) {
		*iParam0 |= system::shift_left(2011 - iParam1, 26);
		*iParam0 |= -2147483648;
	}
	else {
		*iParam0 |= system::shift_left(iParam1 - 2011, 26);
		*iParam0 -= (*iParam0 & -2147483648);
	}
}

// Position - 0x33697
void func_382(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x336CA
void func_383(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_387(*uParam0);
	iVar1 = func_385(*uParam0);
	if (iParam1 < 1 || iParam1 > func_384(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x3371B
int func_384(int iParam0, int iParam1) {
	if (iParam1 < 0) {
		iParam1 = 0;
	}
	switch (iParam0) {
	case 0:
	case 2:
	case 4:
	case 6:
	case 7:
	case 9:
	case 11: return 31;

	case 3:
	case 5:
	case 8:
	case 10: return 30;

	case 1:
		if (iParam1 % 4 == 0) {
			if (iParam1 % 100 != 0) {
				return 29;
			}
			else if (iParam1 % 400 == 0) {
				return 29;
			}
		}
		return 28;
	}
	return 30;
}

// Position - 0x337BD
var func_385(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_386(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x337E2
int func_386(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x337F9
int func_387(var uParam0) { return uParam0 & 15; }

// Position - 0x33806
void func_388(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x33840
void func_389(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x3387B
void func_390(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x338B7
bool func_391(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&uParam0->f_5, "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = {0f, 0f, 0f};
	uParam0->f_18 = {0f, 0f, 0f};
	switch (iParam1) {
	case 0:
		*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
		uParam0->f_3 = 157.5705f;
		uParam0->f_4 = func_392(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 1:
		*uParam0 = {1970.943f, 3801.684f, 31.1396f};
		uParam0->f_3 = 301.3964f;
		uParam0->f_4 = func_392(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 2:
		*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
		uParam0->f_3 = 180.0808f;
		uParam0->f_4 = func_392(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 3:
		*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
		uParam0->f_3 = 141.6114f;
		uParam0->f_4 = func_392(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 4:
		*uParam0 = {10.9281f, 545.669f, 174.7951f};
		uParam0->f_3 = 61.392f;
		uParam0->f_4 = func_392(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 5:
		*uParam0 = {6.1093f, 544.9742f, 174.2835f};
		uParam0->f_3 = 92.1548f;
		uParam0->f_4 = func_392(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 6:
		*uParam0 = {1981.416f, 3808.131f, 31.1384f};
		uParam0->f_3 = 117.2557f;
		uParam0->f_4 = func_392(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 7:
		*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
		uParam0->f_3 = 35.7505f;
		uParam0->f_4 = func_392(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 8:
		*uParam0 = {148.2868f, -1270.569f, 28.2252f};
		uParam0->f_3 = 208.4685f;
		uParam0->f_4 = func_392(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 9:
		*uParam0 = {1459.509f, -1380.45f, 78.3259f};
		uParam0->f_3 = 99.6211f;
		uParam0->f_4 = joaat("scorcher");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 10:
		*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
		uParam0->f_3 = 98.3867f;
		uParam0->f_4 = joaat("seashark");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 11:
		*uParam0 = {353.0926f, 3577.593f, 32.351f};
		uParam0->f_3 = 16.6205f;
		uParam0->f_4 = joaat("duster");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 12:
		uParam0->f_14 = 0;
		*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
		uParam0->f_3 = 329.1082f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 13:
		uParam0->f_14 = 1;
		*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
		uParam0->f_3 = 329.5137f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 14:
		uParam0->f_14 = 2;
		*uParam0 = {1735.586f, 3294.531f, 40.1651f};
		uParam0->f_3 = 194.9525f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 15:
		uParam0->f_14 = 3;
		*uParam0 = {-846.27f, -1363.19f, 0.22f};
		uParam0->f_3 = 108.78f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 16:
		uParam0->f_14 = 4;
		*uParam0 = {-849.47f, -1354.99f, 0.24f};
		uParam0->f_3 = 109.84f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 17:
		uParam0->f_14 = 5;
		*uParam0 = {-852.47f, -1346.2f, 0.21f};
		uParam0->f_3 = 108.76f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 18:
		uParam0->f_14 = 6;
		*uParam0 = {-745.857f, -1433.904f, 4.0005f};
		uParam0->f_12 = 0;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-756.2952f, -1441.609f, 2.9184f};
		uParam0->f_18 = {-738.0606f, -1423.068f, 8.2835f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 19:
		uParam0->f_14 = 7;
		*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
		uParam0->f_12 = 1;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-772.8158f, -1459.957f, 3.2894f};
		uParam0->f_18 = {-754.3353f, -1440.836f, 8.3334f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 20:
		uParam0->f_14 = 8;
		*uParam0 = {1769.3f, 3244f, 41.1f};
		uParam0->f_12 = 2;
		uParam0->f_13 = 360;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 21:
		uParam0->f_14 = 9;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 22:
		uParam0->f_14 = 10;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 1;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 23:
		uParam0->f_14 = 11;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 2;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 26:
	case 27:
	case 28:
		iVar1 = iParam1 - 26;
		uParam0->f_14 = 12 + iVar1;
		*uParam0 = {196.2794f, -1020.479f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 29:
	case 30:
	case 31:
		iVar1 = iParam1 - 29;
		uParam0->f_14 = 15 + iVar1;
		*uParam0 = {199.8872f, -1020.048f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 32:
	case 33:
	case 34:
		iVar1 = iParam1 - 32;
		uParam0->f_14 = 18 + iVar1;
		*uParam0 = {203.6006f, -1019.776f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 24:
		uParam0->f_14 = 21;
		*uParam0 = {0f, 0f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = 0;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 25:
		uParam0->f_14 = 22;
		*uParam0 = {723.2515f, -632.0496f, 27.1484f};
		uParam0->f_3 = 12.9316f;
		uParam0->f_4 = joaat("tailgater");
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 35:
		*uParam0 = {-51.23f, 3111.9f, 24.95f};
		uParam0->f_3 = 46.78f;
		uParam0->f_4 = joaat("proptrailer");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 36:
		*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
		uParam0->f_3 = 308.0596f;
		uParam0->f_4 = joaat("bjxl");
		uParam0->f_10 = 126;
		uParam0->f_11 = 126;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 37:
		*uParam0 = {-2892.93f, 3192.37f, 11.66f};
		uParam0->f_3 = -132.35f;
		uParam0->f_4 = joaat("velum");
		uParam0->f_10 = 157;
		uParam0->f_11 = 157;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 38:
		*uParam0 = {1744.308f, 3270.673f, 40.2076f};
		uParam0->f_3 = 125f;
		uParam0->f_4 = joaat("cargobob3");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 39:
		*uParam0 = {1751.44f, 3322.643f, 42.1855f};
		uParam0->f_3 = 268.134f;
		uParam0->f_4 = joaat("submersible");
		gameplay::set_bit(&uParam0->f_9, 23);
		iVar0 = 1;
		break;

	case 41:
		*uParam0 = {1377.104f, -2076.2f, 52f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("towtruck");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 40:
		*uParam0 = {1380.42f, -2072.77f, 51.7607f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("trash");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 42:
		*uParam0 = {1359.389f, 3618.441f, 33.8907f};
		uParam0->f_3 = 108.2337f;
		uParam0->f_4 = joaat("barracks");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 43:
		*uParam0 = {693.1154f, -1018.155f, 21.6387f};
		uParam0->f_3 = 177.6454f;
		uParam0->f_4 = joaat("firetruk");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 44:
		*uParam0 = {-73.6963f, 495.124f, 143.5226f};
		uParam0->f_3 = 155.5994f;
		uParam0->f_4 = joaat("vacca");
		iVar0 = 1;
		break;

	case 45:
		*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
		uParam0->f_3 = 294.993f;
		uParam0->f_4 = joaat("surano");
		iVar0 = 1;
		break;

	case 46:
		*uParam0 = {533.9048f, -169.2469f, 53.7005f};
		uParam0->f_3 = 1.2998f;
		uParam0->f_4 = joaat("tornado2");
		iVar0 = 1;
		break;

	case 47:
		*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
		uParam0->f_3 = 267.7392f;
		uParam0->f_4 = joaat("superd");
		iVar0 = 1;
		break;

	case 48:
		*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
		uParam0->f_3 = 350.7697f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 49:
		*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
		uParam0->f_3 = 48.9311f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 50:
		*uParam0 = {-1062.076f, -226.7637f, 37.157f};
		uParam0->f_3 = 234.2767f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 51:
		*uParam0 = {68.16914f, -1558.958f, 29.46904f};
		uParam0->f_3 = 49.90575f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 52:
		*uParam0 = {589.4399f, 2736.708f, 42.03316f};
		uParam0->f_3 = -175.7105f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 53:
		*uParam0 = {-488.774f, -344.5721f, 34.36356f};
		uParam0->f_3 = 82.4042f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 54:
		*uParam0 = {288.8808f, -585.4728f, 43.15428f};
		uParam0->f_3 = -20.80707f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 55:
		*uParam0 = {304.8294f, -1383.674f, 31.67744f};
		uParam0->f_3 = -41.11603f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 56:
		*uParam0 = {1126.194f, -1481.486f, 34.7016f};
		uParam0->f_3 = -91.43369f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 57:
		*uParam0 = {-1598.36f, 5252.84f, 0f};
		uParam0->f_3 = 28.14f;
		uParam0->f_4 = joaat("submersible");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 58:
		*uParam0 = {-1602.62f, 5260.37f, 0.86f};
		uParam0->f_3 = 25.32f;
		uParam0->f_4 = joaat("dinghy");
		uParam0->f_13 = 404;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 59:
		*uParam0 = {2116.571f, 4763.279f, 40.1596f};
		uParam0->f_3 = 198.723f;
		uParam0->f_4 = joaat("bfinjection");
		iVar0 = 1;
		break;

	case 60:
		*uParam0 = {1133.21f, 120.2f, 80.9f};
		uParam0->f_3 = 134.4f;
		if (func_373()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 61:
		*uParam0 = {-806.31f, -2679.65f, 13.9f};
		uParam0->f_3 = 150.54f;
		if (func_373()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 62:
		*uParam0 = {1985.85f, 3828.96f, 31.98f};
		uParam0->f_3 = -16.58f;
		uParam0->f_4 = joaat("blazer3");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 63:
		*uParam0 = {3870.75f, 4464.67f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = joaat("submersible2");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		gameplay::set_bit(&uParam0->f_9, 30);
		iVar0 = 1;
		break;

	case 64:
		*uParam0 = {1257.729f, -2564.474f, 41.717f};
		uParam0->f_3 = 284.5561f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 65:
		*uParam0 = {643.2823f, 3014.152f, 42.2733f};
		uParam0->f_3 = 128.0554f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 66:
		*uParam0 = {38.9368f, 850.8677f, 196.3f};
		uParam0->f_3 = 311.6813f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 67:
		*uParam0 = {1333.875f, 4262.226f, 30.78f};
		uParam0->f_3 = 262.5293f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;
	}
	if (gameplay::is_bit_set(uParam0->f_9, 10)) {
		uParam0->f_4 = Global_101700.f_31389.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14) {
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") ||
				uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2")) {
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_322(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/]};
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f) {
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (gameplay::is_bit_set(uParam0->f_9, 19)) {
		if (!func_322(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (gameplay::is_bit_set(uParam0->f_9, 20)) {
		if (!func_322(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

// Position - 0x34FAF
int func_392(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_71(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_393(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x34FF1
void func_393(int iParam0, var *uParam1, int iParam2) {
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0) {
	case 0:
		iVar0 = joaat("tailgater");
		if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131]) {
			iVar0 = joaat("premier");
		}
		switch (iVar0) {
		case joaat("tailgater"):
			*uParam1 = iVar0;
			uParam1->f_2 = 3f;
			uParam1->f_4 = 0;
			uParam1->f_9 = 1;
			uParam1->f_11[0] = 1;
			StringCopy(&uParam1->f_27, "5MDS003", 16);
			break;

		case joaat("premier"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14.9f;
			uParam1->f_5 = 43;
			uParam1->f_6 = 43;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_9 = 0;
			StringCopy(&uParam1->f_27, "880HS955", 16);
			break;
		}
		break;

	case 2:
		iVar0 = joaat("bodhi2");
		switch (iVar0) {
		case joaat("bodhi2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14f;
			uParam1->f_5 = 32;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "BETTY 32", 16);
			if (Global_101700.f_8044.f_99.f_58[119]) {
				uParam1->f_11[1] = 1;
			}
			break;
		}
		break;

	case 1:
		if (iParam2 == 1) {
			iVar0 = joaat("buffalo2");
		}
		else if (iParam2 == 2) {
			iVar0 = joaat("bagger");
		}
		else if (Global_101700.f_8044.f_99.f_58[118]) {
			iVar0 = joaat("bagger");
		}
		else {
			iVar0 = joaat("buffalo2");
		}
		switch (iVar0) {
		case joaat("bagger"):
			*uParam1 = iVar0;
			uParam1->f_2 = 6f;
			uParam1->f_5 = 53;
			uParam1->f_6 = 0;
			uParam1->f_7 = 59;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "FC88", 16);
			break;

		case joaat("buffalo2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 0f;
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_10 = 1;
			StringCopy(&uParam1->f_27, "FC1988", 16);
			uParam1->f_11[0] = 1;
			uParam1->f_11[1] = 1;
			uParam1->f_11[2] = 1;
			uParam1->f_11[3] = 1;
			uParam1->f_11[4] = 1;
			uParam1->f_11[5] = 1;
			uParam1->f_11[6] = 1;
			uParam1->f_11[7] = 1;
			uParam1->f_11[8] = 1;
			break;
		}
		break;

	default: break;
	}
}

// Position - 0x3524D
void func_394(int iParam0, var *uParam1, vector3 vParam2, var uParam5, int iParam6) {
	if (func_391(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
			func_396(iParam0);
			func_395(uParam1, &Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]);
			if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 11)) {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = uParam5;
			}
			else {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_250(iParam0, 1);
		}
	}
}

// Position - 0x3534C
void func_395(var *uParam0, var *uParam1) {
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = {uParam0->f_1};
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = {uParam0->f_9};
	uParam1->f_59 = {uParam0->f_59};
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

// Position - 0x35418
void func_396(int iParam0) {
	if (iParam0 == -1) {
		return;
	}
	if (func_391(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
			entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
			Global_68531.f_139[iParam0] = 0;
		}
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			func_250(iParam0, 0);
		}
	}
}

// Position - 0x35492
int func_397(int iParam0) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 145;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

// Position - 0x354F5
void func_398(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_102(uParam1);
		uParam1->f_66 = entity::get_entity_model(iParam0);
		StringCopy(&uParam1->f_1, vehicle::get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = vehicle::get_vehicle_number_plate_text_index(iParam0);
		vehicle::get_vehicle_colours(iParam0, &uParam1->f_5, &uParam1->f_6);
		vehicle::get_vehicle_extra_colours(iParam0, &uParam1->f_7, &uParam1->f_8);
		vehicle::get_vehicle_tyre_smoke_color(iParam0, &uParam1->f_62, &uParam1->f_63, &uParam1->f_64);
		uParam1->f_65 = vehicle::get_vehicle_window_tint(iParam0);
		uParam1->f_67 = vehicle::get_vehicle_livery(iParam0);
		uParam1->f_69 = vehicle::get_vehicle_wheel_type(iParam0);
		uParam1->f_70 = vehicle::get_vehicle_door_lock_status(iParam0);
		vehicle::get_vehicle_custom_secondary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		vehicle::_get_vehicle_neon_lights_colour(iParam0, &uParam1->f_74, &uParam1->f_75, &uParam1->f_76);
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 2)) {
			gameplay::set_bit(&uParam1->f_77, 28);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 3)) {
			gameplay::set_bit(&uParam1->f_77, 29);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 30);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 1)) {
			gameplay::set_bit(&uParam1->f_77, 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			uParam1->f_65 = 0;
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			uParam1->f_68 = vehicle::get_convertible_roof_state(iParam0);
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (vehicle::_vehicle_has_landing_gear(iParam0)) {
				switch (vehicle::get_landing_gear_state(iParam0)) {
				case 2:
				case 0:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::set_bit(&uParam1->f_77, 22);
					break;

				case 3:
				case 1:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::clear_bit(&uParam1->f_77, 22);
					break;

				case 4: gameplay::set_bit(&uParam1->f_77, 23); break;
				}
			}
			else {
				gameplay::set_bit(&uParam1->f_77, 23);
			}
		}
		if (!vehicle::get_vehicle_tyres_can_burst(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 9);
		}
		if (vehicle::is_vehicle_stolen(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 10);
		}
		if (vehicle::get_is_vehicle_primary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 13);
			vehicle::get_vehicle_custom_primary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		}
		if (vehicle::get_is_vehicle_secondary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 12);
		}
		func_400(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_399(iVar0 + 1));
			}
			iVar0++;
		}
		if (graphics::_does_vehicle_have_decal(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 11);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 11);
		}
		if (decorator::decor_exist_on(iParam0, "IgnoredByQuickSave") &&
			decorator::decor_get_bool(iParam0, "IgnoredByQuickSave")) {
			gameplay::set_bit(&uParam1->f_77, 27);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 27);
		}
	}
}

// Position - 0x357A1
int func_399(int iParam0) {
	switch (iParam0) {
	case 1: return 0;

	case 2: return 1;

	case 3: return 2;

	case 4: return 3;

	case 5: return 4;

	case 6: return 5;

	case 7: return 6;

	case 8: return 7;

	case 9: return 8;

	case 10: return 24;

	case 11: return 25;

	case 12: return 26;
	}
	return 0;
}

// Position - 0x35851
int func_400(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			(*uParam1)[iVar0] = 0;
			if (vehicle::is_toggle_mod_on(*iParam0, iVar1)) {
				(*uParam1)[iVar0] = 1;
			}
		}
		else {
			(*uParam1)[iVar0] = vehicle::get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23) {
				(*uParam2)[0] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24) {
				(*uParam2)[1] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x3592B
void func_401(int iParam0) {
	if (iParam0 != 24 && iParam0 != 25) {
	}
	func_396(iParam0);
	func_250(iParam0, 0);
}

// Position - 0x35952
bool func_402(vector3 vParam0, int iParam3, var *uParam4, float *fParam5) {
	int iVar0;

	iVar0 = func_403(vParam0, iParam3, 1);
	switch (iVar0) {
	case 0:
		*uParam4 = {-827.351f, 157.785f, 68.2143f};
		*fParam5 = 85.1509f;
		return true;

	case 1:
	case 2:
		*uParam4 = {1992.523f, 3813.916f, 31.1008f};
		*fParam5 = 122.1498f;
		return true;

	case 3:
		*uParam4 = {-1184.258f, -1496.556f, 3.3895f};
		*fParam5 = 303.2098f;
		return true;

	case 4:
		*uParam4 = {118.1067f, -1325.906f, 28.3706f};
		*fParam5 = 123.5016f;
		return true;

	case 5:
		*uParam4 = {-18.118f, -1455.126f, 29.5004f};
		*fParam5 = 273.2822f;
		return true;

	case 6:
		*uParam4 = {1.5947f, 543.4017f, 173.4644f};
		*fParam5 = 310.7556f;
		return true;

	default: break;
	}
	return false;
}

// Position - 0x35A68
int func_403(vector3 vParam0, int iParam3, int iParam4) {
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= 10 - 1) {
		if (Global_86862[iVar0 /*10*/].f_7 != 263) {
			if (Global_86862[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145) {
				if (func_404(iVar0) || iParam4 == 0) {
					fVar1 = gameplay::get_distance_between_coords(vParam0, Global_86862[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2) {
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

// Position - 0x35AF7
var func_404(int iParam0) { return gameplay::is_bit_set(Global_101700.f_6188[iParam0], 0); }

// Position - 0x35B0F
int func_405(int iParam0) {
	if (iParam0 == -1) {
		return 0;
	}
	return Global_68531.f_139[iParam0];
}

// Position - 0x35B2B
void func_406(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, int iParam11,
			  int iParam12, int iParam13, int iParam14, int iParam15) {
	func_407(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, iParam11, iParam12, iParam13, iParam14,
			 iParam15);
}

// Position - 0x35B54
void func_407(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11,
			  bool bParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18) {
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;

	if (iParam15) {
		iParam15 = 0;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = player::get_players_last_vehicle();
	if (entity::does_entity_exist(iVar0)) {
		if (!entity::is_entity_a_mission_entity(iVar0)) {
			entity::set_entity_as_mission_entity(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (vehicle::is_vehicle_driveable(iVar0, 0)) {
			if (bParam18) {
				func_412(iVar0);
			}
			if (entity::is_entity_in_angled_area(iVar0, vParam0, vParam3, fParam6, 0, 1, 0)) {
				bVar1 = true;
			}
			else {
				vVar10 = {entity::get_entity_coords(iVar0, 1)};
				if (vVar10.z > vParam0.z && vVar10.z < vParam3.z || vVar10.z > vParam3.z && vVar10.z < vParam0.z) {
					if (func_409(iVar0, vParam0, vParam3, fParam6)) {
						bVar1 = true;
					}
				}
			}
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				if (vehicle::is_vehicle_model(iVar0, joaat("taxi"))) {
					if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != player::player_ped_id() &&
						vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != 0) {
						if (gameplay::get_distance_between_coords(vParam0 + vParam3 / FtoV(2f),
																  entity::get_entity_coords(iVar0, 1), 1) < 20f) {
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16) {
				if (func_378(iVar0, func_69(), 1)) {
					bVar1 = false;
				}
			}
			if (bVar1) {
				if (!func_408(vParam11)) {
					if (vehicle::is_vehicle_driveable(iVar0, 0)) {
						iVar13 = entity::get_entity_model(iVar0);
						vehicle::_0xDF7E3EEB29642C38(iVar0, &vVar4, &vVar7);
						if (vehicle::is_this_model_a_heli(iVar13)) {
							vParam11.x += 3f;
							vParam11.y += 3f;
						}
						if (iVar13 == joaat("zentorno") || iVar13 == joaat("btype") || iVar13 == joaat("dubsta3") ||
							iVar13 == joaat("monster")) {
							vParam11 = {vParam11 * FtoV(1.1f)};
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo")) {
							vParam11 = {vParam11 * FtoV(1.2f)};
						}
						if (vVar7.x - vVar4.x > vParam11.x) {
							bVar2 = false;
						}
						else if (vVar7.y - vVar4.y > vParam11.y) {
							bVar2 = false;
						}
						else if (vVar7.z - vVar4.z > vParam11.z) {
							bVar2 = false;
						}
					}
				}
				if (vehicle::is_vehicle_driveable(iVar0, 0)) {
					if (bVar2) {
						gameplay::clear_area_of_vehicles(vParam7, 5f, 0, 0, 0, 0, 0);
						entity::set_entity_heading(iVar0, fParam10);
						entity::set_entity_coords(iVar0, vParam7, 1, 0, 0, 1);
						vehicle::set_vehicle_on_ground_properly(iVar0, 1084227584);
						if (bParam17) {
							vehicle::set_vehicle_engine_on(iVar0, 0, 1, 0);
							vehicle::set_vehicle_doors_shut(iVar0, 1);
						}
					}
					else {
						if (!entity::is_entity_a_mission_entity(iVar0) ||
							!entity::does_entity_belong_to_this_script(iVar0, 1)) {
							entity::set_entity_as_mission_entity(iVar0, 1, 1);
						}
						if (ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
							entity::set_entity_coords(player::player_ped_id(), entity::get_entity_coords(iVar0, 1), 1,
													  0, 0, 1);
						}
						vehicle::delete_vehicle(&iVar0);
					}
				}
			}
			if (bParam14) {
				gameplay::clear_angled_area_of_vehicles(vParam0, vParam3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1) {
				if (entity::does_entity_exist(iVar0)) {
					if (entity::is_entity_a_mission_entity(iVar0)) {
						entity::set_vehicle_as_no_longer_needed(&iVar0);
					}
				}
			}
		}
		else {
			if (!entity::is_entity_a_mission_entity(iVar0)) {
				entity::set_entity_as_mission_entity(iVar0, 1, 0);
			}
			iVar14 = vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0);
			if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
				entity::set_entity_coords(iVar14, entity::get_entity_coords(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = vehicle::get_vehicle_model_number_of_seats(entity::get_entity_model(iVar0));
			if (iVar15 <= 2) {
				iVar14 = vehicle::get_ped_in_vehicle_seat(iVar0, 0, 0);
				if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
					entity::set_entity_coords(iVar14, entity::get_entity_coords(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4) {
				iVar14 = vehicle::get_ped_in_vehicle_seat(iVar0, 1, 0);
				if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
					entity::set_entity_coords(iVar14, entity::get_entity_coords(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = vehicle::get_ped_in_vehicle_seat(iVar0, 2, 0);
				if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
					entity::set_entity_coords(iVar14, entity::get_entity_coords(iVar14, 1), 1, 0, 0, 1);
				}
			}
			vehicle::delete_vehicle(&iVar0);
		}
	}
}

// Position - 0x35F46
int func_408(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return 1;
	}
	return 0;
}

// Position - 0x35F70
bool func_409(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18[4];
	struct<2> Var31;
	struct<2> Var34;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		vParam1.z = vParam4.z;
		vVar0 = {func_411(vParam1 - vParam4)};
		vVar3 = {vVar0};
		vVar0.x = -vVar3.y;
		vVar0.y = vVar3.x;
		vVar0.z = 0f;
		vVar6 = {vParam1 - vVar0 * FtoV(fParam7 / 2f)};
		vVar9 = {vParam1 + vVar0 * FtoV(fParam7 / 2f)};
		vVar12 = {vParam4 - vVar0 * FtoV(fParam7 / 2f)};
		vVar15 = {vParam4 + vVar0 * FtoV(fParam7 / 2f)};
		gameplay::get_model_dimensions(entity::get_entity_model(iParam0), &Var31, &Var34);
		vVar18[0 /*3*/] = {entity::get_offset_from_entity_in_world_coords(iParam0, Var31, Var31.f_1, 0f)};
		vVar18[1 /*3*/] = {entity::get_offset_from_entity_in_world_coords(iParam0, Var31, Var34.f_1, 0f)};
		vVar18[2 /*3*/] = {entity::get_offset_from_entity_in_world_coords(iParam0, Var34, Var31.f_1, 0f)};
		vVar18[3 /*3*/] = {entity::get_offset_from_entity_in_world_coords(iParam0, Var34, Var34.f_1, 0f)};
		if (func_410(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) ||
			func_410(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15) ||
			func_410(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15) ||
			func_410(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12) ||
			func_410(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9) ||
			func_410(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15) ||
			func_410(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15) ||
			func_410(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12) ||
			func_410(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9) ||
			func_410(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15) ||
			func_410(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15) ||
			func_410(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12) ||
			func_410(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9) ||
			func_410(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15) ||
			func_410(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15) ||
			func_410(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12)) {
			return true;
		}
	}
	return false;
}

// Position - 0x36266
int func_410(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8,
			 struct<2> Param9, var uParam11) {
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;

	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = fVar2 - fVar0;
	fVar9 = fVar3 - fVar1;
	fVar10 = fVar6 - fVar4;
	fVar11 = fVar7 - fVar5;
	fVar12 = (-fVar9 * (fVar0 - fVar4) + fVar8 * (fVar1 - fVar5)) / (-fVar10 * fVar9 + fVar8 * fVar11);
	fVar13 = (fVar10 * (fVar1 - fVar5) - fVar11 * (fVar0 - fVar4)) / (-fVar10 * fVar9 + fVar8 * fVar11);
	if (fVar12 >= 0f && fVar12 <= 1f && fVar13 >= 0f && fVar13 <= 1f) {
		return 1;
	}
	return 0;
}

// Position - 0x3631A
Vector3 func_411(vector3 vParam0) {
	float fVar0;
	float fVar1;

	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f) {
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * FtoV(fVar1)};
	}
	else {
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

// Position - 0x36359
void func_412(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (vehicle::get_vehicle_engine_health(iParam0) <= 200f) {
				vehicle::set_vehicle_engine_health(iParam0, 500f);
			}
			if (vehicle::get_vehicle_petrol_tank_health(iParam0) <= 700f) {
				vehicle::set_vehicle_engine_health(iParam0, 900f);
			}
			if (entity::get_entity_health(iParam0) < 200) {
				vehicle::set_vehicle_engine_health(iParam0, 500f);
			}
		}
	}
}

// Position - 0x363BE
void func_413() {
	int iVar0;

	iVar0 = func_272();
	if (iVar0 == -1) {
		return;
	}
	Global_100787[iVar0 /*10*/] = 1;
}

// Position - 0x363DE
bool func_414(int iParam0, float fParam1, int iParam2) {
	int iVar0;

	iVar0 = 1;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!ped::is_ped_in_any_heli(player::player_ped_id()) && !ped::is_ped_in_any_boat(player::player_ped_id()) &&
			!ped::is_ped_in_any_plane(player::player_ped_id())) {
			if (!func_307(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), fParam1, 1, 1056964608, 0, 1, 0)) {
				iVar0 = 0;
			}
			else if (iParam2 == 1) {
				iVar0 = 0;
				if (!func_417(player::player_ped_id(), -828834893)) {
					ai::task_leave_any_vehicle(player::player_ped_id(), 0, 0);
				}
			}
			if (entity::is_entity_in_air(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
				iVar0 = 0;
			}
		}
	}
	func_416();
	if (func_287()) {
		func_294();
		iVar0 = 0;
	}
	if (iVar0 == 0) {
		return false;
	}
	if (iParam0 == 1) {
		if (!func_415()) {
			return false;
		}
	}
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	return true;
}

// Position - 0x364B2
bool func_415() {
	bool bVar0;

	bVar0 = cutscene::has_cutscene_loaded();
	if (!Global_69701) {
		if (!bVar0) {
			Global_69701 = 1;
		}
	}
	return bVar0;
}

// Position - 0x364D5
void func_416() {
	controls::disable_control_action(0, 21, 1);
	controls::disable_control_action(0, 37, 1);
	controls::disable_control_action(0, 25, 1);
	controls::disable_control_action(0, 141, 1);
	controls::disable_control_action(0, 140, 1);
	controls::disable_control_action(0, 24, 1);
	controls::disable_control_action(0, 257, 1);
	controls::disable_control_action(0, 22, 1);
	controls::disable_control_action(0, 23, 1);
}

// Position - 0x36526
int func_417(int iParam0, int iParam1) {
	if (func_78(iParam0)) {
		if (ai::get_script_task_status(iParam0, iParam1) == 1 || ai::get_script_task_status(iParam0, iParam1) == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x36559
void func_418(char *sParam0, int iParam1, int iParam2) {
	int iVar0;
	struct<14> Var1;
	var uVar15;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	var uVar30;
	int iVar47;

	uVar15 = 9;
	uVar30 = {func_156(iParam1, iParam2)};
	iVar47 = 0;
	if (uVar30[2] == -99 && uVar30[0] == -99) {
		iVar47 = 1;
	}
	iVar28 = 0;
	while (iVar28 <= 14) {
		iVar0 = iVar28;
		if (iVar0 != 12 && iVar0 != 14) {
			if (iVar0 == 13) {
				uVar15 = {func_153(iParam1, uVar30[iVar28])};
				iVar29 = 0;
				while (iVar29 <= 8) {
					iVar25 = iVar29;
					iVar26 = func_168(iVar25);
					iVar27 = func_136(iVar26);
					if (uVar15[iVar29] != iVar27) {
						Var1 = {func_160(iParam1, 14, uVar15[iVar29])};
						cutscene::set_cutscene_ped_prop_variation(sParam0, Var1.f_12, Var1.f_3, 0, iParam1);
					}
					iVar29++;
				}
			}
			else {
				Var1 = {func_160(iParam1, iVar0, uVar30[iVar28])};
				if ((iVar28 == 2 || iVar28 == 0) && iVar47 || uVar30[iVar28] == -99) {
					Var1.f_3 = Global_101700.f_2095.f_539[Var1.f_5 /*65*/].f_13[iVar28];
					Var1.f_4 = Global_101700.f_2095.f_539[Var1.f_5 /*65*/][iVar28];
				}
				cutscene::set_cutscene_ped_component_variation(sParam0, func_152(iVar0), Var1.f_3, Var1.f_4, iParam1);
			}
		}
		iVar28++;
	}
}

// Position - 0x366B6
int func_419(int iParam0) {
	if (cam::is_screen_faded_in()) {
		if (gameplay::get_game_timer() - Global_28 > iParam0) {
			Global_27 = gameplay::get_game_timer();
		}
		Global_28 = gameplay::get_game_timer();
		if (gameplay::get_game_timer() - Global_27 > iParam0) {
			if (func_420()) {
				Global_27 = gameplay::get_game_timer();
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x36700
bool func_420() {
	if (ui::is_pause_menu_active()) {
		return false;
	}
	if (controls::is_control_just_pressed(0, 18) || controls::is_control_just_pressed(2, 18)) {
		return true;
	}
	return false;
}

// Position - 0x36732
int func_421(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6) {
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (func_16(iParam0)) {
		if (iParam5 == 1) {
			fVar1 = 0f;
			bVar0 = gameplay::get_ground_z_for_3d_coord(vParam1, &fVar1, 0);
			if (bVar0) {
				vParam1.z = fVar1;
			}
		}
		entity::set_entity_coords(iParam0, vParam1, 1, 0, 0, iParam6);
		entity::set_entity_heading(iParam0, fParam4);
		if (iParam5) {
			return bVar0;
		}
		return 1;
	}
	return 0;
}

// Position - 0x3678D
void func_422(char *sParam0, int iParam1) {
	func_358(iParam1);
	cutscene::request_cutscene(sParam0, 8);
}

// Position - 0x367A3
void func_423() {
	if (func_465() == 1 && iLocal_357 == 0) {
		func_426();
	}
	else {
		func_425();
		func_424();
		iLocal_568 = 1;
	}
}

// Position - 0x367D1
void func_424() {
	vector3 vVar0;
	vector3 vVar3;

	if (func_17(Local_83.f_35[1])) {
		iLocal_632 = Local_83.f_35[1];
		Local_83.f_35[1] = 0;
		func_305(iLocal_632, 0);
		vVar0 = {entity::get_entity_coords(iLocal_632, 1)};
		if (vVar0.x < vLocal_212.x - 0.01f || vVar0.x > vLocal_212.x + 0.01f || vVar0.y < vLocal_212.y - 0.01f ||
			vVar0.y > vLocal_212.y + 0.01f) {
			func_421(iLocal_632, vLocal_212, fLocal_251, 0, 1);
			vehicle::set_vehicle_on_ground_properly(iLocal_632, 1084227584);
		}
	}
	else {
		iLocal_632 = vehicle::create_vehicle(joaat("tailgater"), vLocal_212, fLocal_251, 1, 1);
		func_305(iLocal_632, 0);
		vehicle::set_vehicle_number_plate_text_index(iLocal_632, 0);
		vehicle::set_vehicle_number_plate_text(iLocal_632, "K1FFL0M");
		vehicle::set_vehicle_colours(iLocal_632, iLocal_161, iLocal_161);
		vehicle::set_vehicle_extra_colours(iLocal_632, 0, 0);
		vehicle::set_vehicle_on_ground_properly(iLocal_632, 1084227584);
	}
	if (func_17(Local_83.f_35[0])) {
		uLocal_616[0] = Local_83.f_35[0];
		Local_83.f_35[0] = 0;
		vehicle::set_vehicle_doors_locked(uLocal_616[0], 1);
		vVar3 = {entity::get_entity_coords(iLocal_632, 1)};
		if (vVar3.x < vLocal_162[0 /*3*/] - 0.01f || vVar3.x > vLocal_162[0 /*3*/] + 0.01f ||
			vVar3.y < vLocal_162[0 /*3*/].f_1 - 0.01f || vVar3.y > vLocal_162[0 /*3*/].f_1 + 0.01f) {
			func_421(uLocal_616[0], vLocal_162[0 /*3*/], fLocal_233[0], 0, 1);
			vehicle::set_vehicle_on_ground_properly(uLocal_616[0], 1084227584);
		}
	}
	else {
		uLocal_616[0] = vehicle::create_vehicle(joaat("landstalker"), vLocal_162[0 /*3*/], fLocal_233[0], 1, 1);
		vehicle::set_vehicle_colours(uLocal_616[0], iLocal_161, iLocal_161);
		vehicle::set_vehicle_extra_colours(uLocal_616[0], 0, 0);
		vehicle::set_vehicle_on_ground_properly(uLocal_616[0], 1084227584);
		vehicle::set_vehicle_number_plate_text_index(uLocal_616[0], 0);
	}
	if (!entity::does_entity_exist(uLocal_580[0])) {
		uLocal_580[0] = ped::create_ped_inside_vehicle(uLocal_616[0], 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
	}
	if (func_78(uLocal_580[0])) {
		func_112(uLocal_580[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_340(&uLocal_390, 5, uLocal_580[0], "EPSGUARD2", 0, 1);
	}
	if (!entity::does_entity_exist(uLocal_588[0])) {
		uLocal_588[0] = ped::create_ped_inside_vehicle(uLocal_616[0], 26, joaat("s_m_m_highsec_01"), 0, 1, 1);
	}
	if (!entity::does_entity_exist(uLocal_570[0])) {
		uLocal_570[0] = ped::create_ped(26, joaat("s_m_m_highsec_01"), vLocal_184[0 /*3*/], fLocal_241[0], 1, 1);
	}
	if (!entity::does_entity_exist(uLocal_570[2])) {
		uLocal_570[2] = ped::create_ped(26, joaat("s_m_m_highsec_01"), vLocal_184[2 /*3*/], fLocal_241[2], 1, 1);
	}
}

// Position - 0x36AB7
void func_425() {
	vehicle::request_vehicle_recording(222, "Ep8Heli01");
	ai::request_waypoint_recording("Eps8EPED");
	ai::request_waypoint_recording("Eps8LS01");
	streaming::request_anim_dict("rcmepsilonism8");
	streaming::request_model(joaat("s_m_m_highsec_01"));
	streaming::request_model(joaat("a_m_y_epsilon_01"));
	streaming::request_model(joaat("sentinel"));
	streaming::request_model(joaat("maverick"));
	streaming::request_model(joaat("landstalker"));
	streaming::request_model(joaat("tailgater"));
	streaming::request_model(joaat("p_ld_heist_bag_s_1"));
	ai::request_waypoint_recording("Eps8TRAFFIC01");
	ai::request_waypoint_recording("Eps8TRAFFIC02");
	ai::request_waypoint_recording("Eps8TRAFFIC03");
	ai::request_waypoint_recording("Eps8TRAFFIC04");
	ai::request_waypoint_recording("Eps8TRAFFIC05");
	ai::request_waypoint_recording("Eps8TRAFFIC06");
	streaming::request_model(joaat("taxi"));
	streaming::request_model(joaat("sadler"));
	streaming::request_model(joaat("habanero"));
	streaming::request_model(joaat("schafter2"));
	streaming::request_model(joaat("rumpo"));
	graphics::request_streamed_texture_dict("helicopterhud", 0);
	ui::request_additional_text("EPS8", 0);
	while (!ui::has_additional_text_loaded(0) || !streaming::has_model_loaded(joaat("landstalker")) ||
		   !streaming::has_model_loaded(joaat("tailgater")) ||
		   !streaming::has_model_loaded(joaat("s_m_m_highsec_01"))) {
		system::wait(0);
	}
	vLocal_224 = {-281.6395f, -102.0944f, 45.8373f};
	vLocal_227 = {-409.0169f, -58.1734f, 43.6077f};
	vLocal_212 = {-697.3215f, 39.0406f, 42.86736f};
	fLocal_251 = -66.98854f;
	vLocal_206 = {-357.1071f, -91.7128f, 45.0982f};
	fLocal_250 = 8.7486f;
	vLocal_162[0 /*3*/] = {-686.5046f, 43.9098f, 42.2067f};
	vLocal_162[1 /*3*/] = {188.3458f, 169.2785f, 104.3145f};
	vLocal_162[2 /*3*/] = {-410.1774f, -68.8325f, 42.4324f};
	vLocal_162[3 /*3*/] = {-656.588f, 56.539f, 42.719f};
	vLocal_162[4 /*3*/] = {299.5176f, -11.642f, 76.1623f};
	vLocal_162[5 /*3*/] = {175.4031f, 93.0495f, 87.8098f};
	vLocal_162[6 /*3*/] = {257.4567f, 161.3084f, 103.6166f};
	fLocal_233[0] = 296.81f;
	fLocal_233[1] = 162.1519f;
	fLocal_233[2] = 317.5537f;
	fLocal_233[3] = 176.3863f;
	fLocal_233[4] = 157.9f;
	fLocal_233[5] = 340.5091f;
	fLocal_233[6] = 249.2435f;
	vLocal_184[0 /*3*/] = {-726.4555f, 33.33568f, 43.22695f};
	vLocal_184[1 /*3*/] = {222.146f, 206.6046f, 104.4984f};
	vLocal_184[2 /*3*/] = {-666.5512f, 49.19759f, 42.07154f};
	vLocal_184[3 /*3*/] = {-379.9735f, -73.8836f, 44.6215f};
	vLocal_184[4 /*3*/] = {-378.7636f, -86.7811f, 44.6579f};
	vLocal_184[5 /*3*/] = {-374.7542f, -81.9368f, 44.6577f};
	vLocal_184[6 /*3*/] = {248.7298f, 109.6775f, 101.4054f};
	fLocal_241[0] = -147.8099f;
	fLocal_241[1] = 129.6183f;
	fLocal_241[2] = -171.6803f;
	fLocal_241[3] = 340.8513f;
	fLocal_241[4] = 256.0816f;
	fLocal_241[5] = 251.5665f;
	fLocal_241[6] = 23.1111f;
	vehicle::set_vehicle_model_is_suppressed(joaat("landstalker"), 1);
	vehicle::set_vehicle_model_is_suppressed(joaat("sentinel"), 1);
	vehicle::set_vehicle_model_is_suppressed(joaat("sentinel2"), 1);
	vehicle::set_vehicle_model_is_suppressed(joaat("tailgater"), 1);
	ped::set_ped_model_is_suppressed(joaat("a_f_y_epsilon_01"), 1);
	ped::set_ped_model_is_suppressed(joaat("a_m_y_epsilon_01"), 1);
	ped::set_ped_model_is_suppressed(joaat("a_m_y_epsilon_02"), 1);
	player::set_wanted_level_multiplier(0.5f);
	vehicle::set_all_vehicle_generators_active_in_area(-375.76f, -101.27f, 42.79f, -344.3f, -100.84f, 48.77f, 0, 1);
	func_340(&uLocal_390, 0, player::player_ped_id(), "MICHAEL", 0, 1);
	func_338(51, 0, 0);
}

// Position - 0x36E77
void func_426() {
	func_430(-702.9905f, 37.0211f, 42.2136f, 292.7606f, 1, 0);
	func_429(0, 0);
	func_425();
	func_424();
	func_342();
	func_341();
	gameplay::clear_area(entity::get_entity_coords(player::player_ped_id(), 1), 100f, 1, 0, 0, 0);
	gameplay::clear_area(-661.5685f, 45.5499f, 40.0669f, 20f, 1, 0, 0, 0);
	func_428(iLocal_632, -1, 1);
	func_337();
	func_336();
	cam::set_gameplay_cam_relative_heading(0f);
	cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
	player::set_player_control(player::player_id(), 1, 0);
	func_286("EPS8_05", 7500, 0);
	iLocal_358 = 1;
	audio::set_static_emitter_enabled("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 0);
	audio::trigger_music_event("EPS8_START");
	func_356(800, 0);
	func_427(1, 1, 1);
	iLocal_568 = 3;
}

// Position - 0x36F40
void func_427(int iParam0, int iParam1, int iParam2) {
	func_345(0, 0, iParam2, 1);
	if (iParam0 == 1) {
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		cam::set_gameplay_cam_relative_heading(0f);
	}
	if (iParam1 == 1) {
		func_356(500, 0);
	}
}

// Position - 0x36F74
void func_428(int iParam0, int iParam1, int iParam2) {
	if (func_465() && func_343()) {
		while (Global_91486 != 6) {
			system::wait(0);
		}
		gameplay::set_game_paused(0);
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				ped::clear_ped_wetness(player::player_ped_id());
			}
		}
		if (iParam0 != 0) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (entity::does_entity_exist(iParam0)) {
					if (vehicle::is_vehicle_driveable(iParam0, 0)) {
						if (!ped::is_ped_in_vehicle(player::player_ped_id(), iParam0, 0)) {
							ped::set_ped_into_vehicle(player::player_ped_id(), iParam0, iParam1);
							cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
							cam::set_gameplay_cam_relative_heading(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1) {
			if (player::is_player_playing(player::player_id())) {
				player::set_player_control(player::player_id(), 1, 0);
			}
		}
		graphics::_stop_all_screen_effects();
		func_90(0);
	}
}

// Position - 0x37038
void func_429(int iParam0, int iParam1) {
	if (cam::is_screen_faded_in()) {
		if (!cam::is_screen_fading_out()) {
			cam::do_screen_fade_out(iParam0);
			if (iParam1) {
				while (!cam::is_screen_faded_out()) {
					system::wait(0);
				}
			}
		}
	}
}

// Position - 0x3706A
void func_430(vector3 vParam0, float fParam3, int iParam4, int iParam5) {
	if (func_465()) {
		gameplay::set_this_script_can_be_paused(0);
		gameplay::clear_bit(&Global_91491.f_20, 2);
		gameplay::set_game_paused(1);
		if (player::is_player_playing(player::player_id())) {
			player::set_player_control(player::player_id(), 0, 0);
		}
		Global_91487 = {vParam0};
		Global_91490 = fParam3;
		Global_91486 = 1;
		if (iParam4 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 14);
		}
		else {
			gameplay::clear_bit(&Global_91491.f_20, 14);
		}
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 24);
		}
		else {
			gameplay::clear_bit(&Global_91491.f_20, 24);
		}
		func_90(1);
	}
}

// Position - 0x370FF
void func_431() {
	float fVar0;
	var uVar1;
	struct<6> Var2;

	if (iLocal_568 == 3 || iLocal_568 == 4 || iLocal_568 == 5 || iLocal_568 == 6 || iLocal_568 == 7) {
		if (iLocal_312 == 1) {
			if (func_78(iLocal_596)) {
				if (!entity::is_entity_playing_anim(iLocal_596, "rcmepsilonism8", "worship_enter", 3) &&
					!entity::is_entity_playing_anim(iLocal_596, "rcmepsilonism8", "worship_base", 3) &&
					!entity::is_entity_playing_anim(iLocal_596, "rcmepsilonism8", "worship_idle_a", 3)) {
					if (!entity::is_entity_playing_anim(iLocal_596, "rcmepsilonism8", "worship_exit", 3)) {
						iLocal_256 = 0;
						func_435();
						func_80();
					}
					else if (entity::find_anim_event_phase("rcmepsilonism8", "worship_exit", "WalkInterruptible",
														   &fVar0, &uVar1) &&
							 entity::get_entity_anim_current_time(iLocal_596, "rcmepsilonism8", "worship_exit") >=
								 fVar0) {
						ped::force_ped_motion_state(iLocal_596, -530524, 0, 0, 0);
						ped::set_ped_keep_task(iLocal_596, 1);
						ai::task_follow_nav_mesh_to_coord(iLocal_596, -355.739f, -181.6352f, 36.7355f, 2f, -1, 3f, 0,
														  1193033728);
						ped::set_blocking_of_non_temporary_events(iLocal_596, 0);
						entity::set_ped_as_no_longer_needed(&iLocal_596);
						iLocal_256 = 0;
						func_435();
						func_80();
					}
					else if (entity::get_entity_anim_current_time(iLocal_596, "rcmepsilonism8", "worship_exit") >=
							 0.88f) {
						ped::force_ped_motion_state(iLocal_596, -530524, 0, 0, 0);
						ped::set_ped_keep_task(iLocal_596, 1);
						ai::task_follow_nav_mesh_to_coord(iLocal_596, -355.739f, -181.6352f, 36.7355f, 2f, -1, 3f, 0,
														  1193033728);
						ped::set_blocking_of_non_temporary_events(iLocal_596, 0);
						entity::set_ped_as_no_longer_needed(&iLocal_596);
						iLocal_256 = 0;
						func_435();
						func_80();
					}
				}
			}
		}
		if (iLocal_311 == 1) {
			Var2 = {func_295()};
			if (!gameplay::is_string_null_or_empty(&Var2)) {
				if (gameplay::are_strings_equal(&Var2, "EPS8_ESC") || gameplay::are_strings_equal(&Var2, "EPS8_E1")) {
					func_433();
				}
			}
			if (ped::is_synchronized_scene_running(iLocal_309)) {
				entity::stop_synchronized_entity_anim(iLocal_632, -8f, 1);
			}
		}
		if (!func_287() || !iLocal_353 == 1) {
			if (iLocal_311 == 1) {
				if (func_78(uLocal_570[5])) {
					ped::reset_ped_weapon_movement_clipset(uLocal_570[5]);
				}
				func_303(&iLocal_555, 0, 0);
				func_433();
				gameplay::_set_unk_map_flag(2);
				func_24(&iLocal_940);
				func_281(&uLocal_390, 6);
				func_281(&uLocal_390, 7);
				func_281(&uLocal_390, 4);
				func_340(&uLocal_390, 6, 0, "EPSGUARD4", 0, 1);
				func_340(&uLocal_390, 7, 0, "EPSGUARD8", 0, 1);
				func_340(&uLocal_390, 4, 0, "CRIS", 0, 1);
				func_432();
				func_11();
				if (func_78(iLocal_596)) {
					ped::set_ped_can_be_targetted(iLocal_596, 1);
					entity::set_entity_is_target_priority(iLocal_596, 1, 0);
					if (func_16(iLocal_615) && ped::is_ped_in_vehicle(iLocal_596, iLocal_615, 0)) {
						ped::set_ped_accuracy(iLocal_596, iLocal_154 - iLocal_155);
						ped::set_ped_shoot_rate(iLocal_596, iLocal_156 + iLocal_157);
						ped::set_ped_config_flag(iLocal_596, 324, 1);
						weapon::give_weapon_to_ped(iLocal_596, joaat("weapon_advancedrifle"), -1, 0, 0);
						weapon::give_weapon_component_to_ped(iLocal_596, joaat("weapon_advancedrifle"),
															 joaat("component_at_ar_flsh"));
						weapon::give_weapon_component_to_ped(iLocal_596, joaat("weapon_advancedrifle"),
															 joaat("component_at_scope_small"));
						weapon::set_current_ped_weapon(iLocal_596, joaat("weapon_advancedrifle"), 1);
						ped::set_ped_keep_task(iLocal_596, 1);
						ped::set_ped_combat_range(iLocal_596, 2);
						ped::set_ped_hearing_range(iLocal_596, 400f);
						ped::set_ped_seeing_range(iLocal_596, 400f);
						ped::set_ped_id_range(iLocal_596, 400f);
						ped::set_ped_firing_pattern(iLocal_596, -957453492);
						ped::set_ped_combat_attributes(iLocal_596, 2, 1);
						ped::set_ped_combat_attributes(iLocal_596, 3, 0);
						ai::task_combat_ped(iLocal_596, player::player_ped_id(), 0, 16);
					}
				}
				pathfind::set_roads_in_angled_area(-651.3148f, 121.844f, 63.45312f, -650.0618f, 0.95496f, 35.75433f,
												   41.75f, 0, 1, 1);
				gameplay::_0x9B2BD3773123EA2F(5, 0);
				gameplay::_0x9B2BD3773123EA2F(3, 0);
				iLocal_256 = 0;
				if (!player::is_player_control_on(player::player_id())) {
					player::set_player_control(player::player_id(), 1, 0);
				}
				ai::task_clear_look_at(player::player_ped_id());
				if (!entity::is_entity_dead(uLocal_570[5], 0)) {
					if (!entity::is_entity_dead(uLocal_597[0], 0)) {
						if (entity::is_entity_attached_to_entity(uLocal_597[0], uLocal_570[5])) {
							entity::detach_entity(uLocal_597[0], 1, 1);
						}
					}
					if (!entity::is_entity_dead(uLocal_597[1], 0)) {
						if (entity::is_entity_attached_to_entity(uLocal_597[1], uLocal_570[5])) {
							entity::detach_entity(uLocal_597[1], 1, 1);
						}
					}
					if (!entity::is_entity_dead(uLocal_597[2], 0)) {
						if (entity::is_entity_attached_to_entity(uLocal_597[2], uLocal_570[5])) {
							entity::detach_entity(uLocal_597[2], 1, 1);
						}
					}
					if (!entity::is_entity_dead(uLocal_597[3], 0)) {
						if (entity::is_entity_attached_to_entity(uLocal_597[3], uLocal_570[5])) {
							entity::detach_entity(uLocal_597[3], 1, 1);
						}
					}
				}
				iLocal_290 = gameplay::get_game_timer();
				ui::clear_prints();
				if (iLocal_336 == 0) {
					if (iLocal_333 == 0) {
						if (!entity::is_entity_dead(iLocal_632, 0)) {
							if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_632, 0)) {
								if (iLocal_258 != iLocal_257) {
									if (iLocal_314 == 0) {
										func_286("EPS8_12", 7500, 0);
									}
									iLocal_335 = 1;
								}
							}
							else if (iLocal_568 == 5 || iLocal_568 == 6 || iLocal_568 == 7) {
								func_286("EPS8_11", 7500, 0);
							}
						}
					}
					else if (iLocal_258 != iLocal_257) {
						if (iLocal_314 == 0) {
							func_286("EPS8_12", 7500, 0);
						}
						iLocal_335 = 1;
					}
				}
				else if (!ui::does_blip_exist(iLocal_941)) {
					iLocal_941 = ui::add_blip_for_entity(uLocal_597[3]);
					ui::set_blip_colour(iLocal_941, 2);
					ui::set_blip_scale(iLocal_941, fLocal_149);
					func_286("EPS8_21", 7500, 0);
				}
				if (!gameplay::is_bit_set(Global_101700.f_17533.f_382, 1)) {
					gameplay::set_bit(&Global_101700.f_17533.f_382, 1);
				}
				iLocal_568 = 8;
			}
		}
	}
}

// Position - 0x3769D
void func_432() {
	if (func_17(uLocal_616[0])) {
		audio::_dynamic_mixer_related_fn(uLocal_616[0], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (func_17(uLocal_616[1])) {
		audio::_dynamic_mixer_related_fn(uLocal_616[1], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (func_17(uLocal_616[2])) {
		audio::_dynamic_mixer_related_fn(uLocal_616[2], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (func_17(uLocal_616[3])) {
		audio::_dynamic_mixer_related_fn(uLocal_616[3], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (func_17(uLocal_616[4])) {
		audio::_dynamic_mixer_related_fn(uLocal_616[4], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (func_17(uLocal_616[5])) {
		audio::_dynamic_mixer_related_fn(uLocal_616[5], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (func_17(uLocal_616[6])) {
		audio::_dynamic_mixer_related_fn(uLocal_616[6], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
}

// Position - 0x37770
void func_433() {
	Global_14611 = 0;
	func_434();
}

// Position - 0x37780
void func_434() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x377A1
void func_435() {
	int iVar0;

	func_24(&iLocal_939);
	if (func_78(iLocal_596)) {
		ai::clear_ped_tasks_immediately(iLocal_596);
	}
	if (func_17(iLocal_615)) {
		if (func_78(iLocal_578)) {
			if (iLocal_313 == 0) {
				vehicle::set_vehicle_engine_on(iLocal_615, 1, 1, 0);
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					vLocal_209 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				}
				iLocal_260 = system::round(vLocal_209.z + 10f);
				ai::open_sequence_task(&iVar0);
				ai::task_heli_mission(0, iLocal_615, 0, 0, -582.5234f, -363.9155f, 498.4256f, 4, 200f, 2f, 130.0071f,
									  100, 30, -1f, 0);
				ai::task_heli_mission(0, iLocal_615, 0, 0, -1352.705f, -2861.194f, 498.4256f, 4, 200f, 2f, 183.7912f,
									  100, 30, -1f, 0);
				ai::close_sequence_task(iVar0);
				ai::task_perform_sequence(iLocal_578, iVar0);
				ai::clear_sequence_task(&iVar0);
				ped::set_ped_keep_task(iLocal_578, 1);
				iLocal_313 = 1;
			}
		}
	}
}

// Position - 0x37894
void func_436() {
	if (iLocal_336 == 0) {
		if (iLocal_333 == 0) {
			if (entity::does_entity_exist(iLocal_632)) {
				if (entity::is_entity_dead(iLocal_632, 0)) {
					if (iLocal_337 == 0) {
						iLocal_278 = gameplay::get_game_timer();
						iLocal_337 = 1;
					}
					else if (gameplay::get_game_timer() > iLocal_278 + 100) {
						if (entity::is_entity_in_water(iLocal_632)) {
							sLocal_386 = "EPS8_19";
						}
						else {
							sLocal_386 = "EPS8_18";
						}
						iLocal_568 = 10;
					}
				}
				else {
					if (vehicle::is_vehicle_stuck_timer_up(iLocal_632, 0, 5000) ||
						vehicle::is_vehicle_stuck_timer_up(iLocal_632, 1, 20000) ||
						vehicle::is_vehicle_stuck_timer_up(iLocal_632, 2, 30000) ||
						vehicle::is_vehicle_stuck_timer_up(iLocal_632, 3, 60000)) {
						sLocal_386 = "EPS8_19";
						iLocal_568 = 10;
					}
					if (!vehicle::is_vehicle_driveable(iLocal_632, 0)) {
						if (iLocal_337 == 0) {
							iLocal_278 = gameplay::get_game_timer();
							iLocal_337 = 1;
						}
						else if (gameplay::get_game_timer() > iLocal_278 + 100) {
							sLocal_386 = "EPS8_19";
							iLocal_568 = 10;
						}
					}
					if (iLocal_568 != 7) {
						if (iLocal_329 == 0) {
							if (!func_55(iLocal_632, player::player_ped_id(), 150f, 1)) {
								if (iLocal_299 != -1 && func_78(uLocal_570[iLocal_299]) &&
									ped::is_ped_in_vehicle(uLocal_570[iLocal_299], iLocal_632, 0)) {
									func_286("EPS8_25", 7500, 0);
								}
								else {
									func_286("EPS8_16", 7500, 0);
								}
								iLocal_329 = 1;
							}
						}
						else if (!func_79("EPS8_25", 0, 0) && !func_79("EPS8_16", 0, 0)) {
							if (!func_55(iLocal_632, player::player_ped_id(), 230f, 1)) {
								if (iLocal_299 != -1 && func_78(uLocal_570[iLocal_299]) &&
									ped::is_ped_in_vehicle(uLocal_570[iLocal_299], iLocal_632, 0)) {
									sLocal_386 = "EPS8_26";
								}
								else {
									sLocal_386 = "EPS8_17";
								}
								iLocal_568 = 10;
							}
							else if (func_55(iLocal_632, player::player_ped_id(), 100f, 1)) {
							}
						}
					}
				}
			}
		}
		else if (entity::does_entity_exist(iLocal_615)) {
			if (entity::is_entity_dead(iLocal_615, 0)) {
				sLocal_386 = "EPS8_18";
				iLocal_568 = 10;
			}
			else {
				if (!vehicle::is_vehicle_driveable(iLocal_615, 0)) {
					sLocal_386 = "EPS8_18";
					iLocal_568 = 10;
				}
				if (iLocal_568 != 7) {
					if (iLocal_329 == 0) {
						if (!func_55(iLocal_615, player::player_ped_id(), 150f, 1)) {
							func_286("EPS8_16", 7500, 0);
							iLocal_329 = 1;
						}
					}
					else if (!func_55(iLocal_615, player::player_ped_id(), 230f, 1)) {
						sLocal_386 = "EPS8_17";
						iLocal_568 = 10;
					}
					else if (func_55(iLocal_615, player::player_ped_id(), 100f, 1)) {
						iLocal_329 = 0;
					}
				}
			}
		}
	}
}

// Position - 0x37B45
void func_437(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;

	if (Global_69956 != 6) {
		if (Global_69958 == -1) {
			if (func_448(1, Param0)) {
				if (Global_69959 == 3) {
					fVar0 = 1.5f;
				}
				else {
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0) {
					Global_69958 = gameplay::get_game_timer();
					vLocal_22 = {ui::get_hud_component_position(15)};
					fLocal_21 = 0f;
				}
				else {
					fLocal_21 += gameplay::get_frame_time();
				}
			}
			else {
				fLocal_21 = 0f;
			}
		}
		else {
			if (!func_448(0, Param0)) {
				Global_69958 = gameplay::get_game_timer() - 9000;
			}
			ui::hide_hud_component_this_frame(7);
			ui::hide_hud_component_this_frame(6);
			ui::hide_hud_component_this_frame(8);
			ui::hide_hud_component_this_frame(9);
			iVar1 = gameplay::get_game_timer() - Global_69958;
			if (iVar1 < 9000 && !cam::is_screen_faded_out()) {
				iVar2 = 255;
				if (iVar1 < 1000) {
					iVar2 = system::ceil(system::to_float(iVar1) / 1000f * 255f);
				}
				else {
					iVar3 = 9000 - iVar1;
					if (iVar3 < 1000) {
						iVar2 = system::ceil(system::to_float(iVar3) / 1000f * 255f);
					}
				}
				switch (Global_69956) {
				case 3:
				case 5:
					if (iParam6 == 1) {
						fVar6 = 0f;
						fVar7 = -0.07f;
					}
					else if (iParam7 == 1) {
						fVar6 = 0f;
						fVar7 = -0.077f;
					}
					else if (iParam8 == 1) {
						fVar6 = 0f;
						fVar7 = -0.05f;
					}
					else if (iParam9 == 1) {
						fVar6 = 0f;
						fVar7 = -0.035f;
					}
					else {
						fVar6 = 0f;
						fVar7 = -0.014f;
					}
					break;

				default:
					fVar6 = 0f;
					fVar7 = -0.014f;
					break;
				}
				graphics::_set_screen_draw_position(82, 66);
				ui::set_text_font(1);
				ui::set_text_justification(2);
				iVar12 = func_69();
				if (Global_69959 == 1 && Global_69957 == 62) {
					iVar12 = Global_101700.f_2095.f_539.f_3550;
				}
				switch (iVar12) {
				case 0: ui::get_hud_colour(143, &iVar8, &iVar9, &iVar10, &uVar11); break;

				case 1: ui::get_hud_colour(144, &iVar8, &iVar9, &iVar10, &uVar11); break;

				case 2: ui::get_hud_colour(145, &iVar8, &iVar9, &iVar10, &uVar11); break;

				default:
					iVar8 = 240;
					iVar9 = 200;
					iVar10 = 80;
				}
				ui::set_text_colour(iVar8, iVar9, iVar10, iVar2);
				ui::set_text_drop_shadow();
				Var4 = {func_439(Global_69957, Global_69959, iParam10)};
				if (fVar7 == -0.014f) {
				}
				graphics::_screen_draw_position_ratio(fVar6, fVar7, 0f, 0.01f);
				ui::set_text_scale(0.67f, 0.67f);
				if (!graphics::get_is_widescreen() && !graphics::get_is_hidef()) {
					fLocal_26 = 0.14f;
				}
				else {
					fLocal_26 = 0.17f;
				}
				if (fVar7 == -0.014f) {
					if (func_438(&Var4) > fLocal_26) {
						if (ui::is_hud_component_active(15)) {
							ui::set_hud_component_position(15, vLocal_22.x, vLocal_22.y + fLocal_25);
							Global_69961 = 1;
						}
					}
				}
				ui::begin_text_command_display_text(&Var4);
				ui::end_text_command_display_text(fVar6, fVar7, 0);
				graphics::_screen_draw_position_end();
				if (Global_69960 == 1) {
					func_241();
					fLocal_21 = 0f;
				}
			}
			else {
				func_241();
				fLocal_21 = 0f;
			}
		}
	}
}

// Position - 0x37E2A
float func_438(char *sParam0) {
	ui::_begin_text_command_width(sParam0);
	return ui::_end_text_command_get_width(1);
}

// Position - 0x37E3D
struct<2> func_439(int iParam0, int iParam1, int iParam2) {
	struct<2> Var0;
	int iVar2;

	StringCopy(&Var0, "", 8);
	switch (iParam1) {
	case 1: Var0 = {func_447(iParam0)}; break;

	case 7: Var0 = {func_227(iParam0)}; break;

	case 3:
		iVar2 = iParam0;
		switch (iVar2) {
		case 0: Var0 = {func_446(iParam2)}; break;

		case 8: Var0 = {func_445(iParam2)}; break;

		case 7: Var0 = {func_444(iParam2)}; break;

		case 10: Var0 = {func_443(iParam2)}; break;

		case 5: Var0 = {func_442(iParam2)}; break;

		case 4: Var0 = {func_441(iParam2)}; break;

		default: StringCopy(&Var0, func_440(iVar2), 8); break;
		}
		break;

	default: break;
	}
	return Var0;
}

// Position - 0x37F13
char *
func_440(int iParam0) {
	switch (iParam0) {
	case 0: return "MG_BJUM";

	case 1: return "MG_DART";

	case 2: return "MG_GOLF";

	case 3: return "MG_HUNT";

	case 4: return "MG_OFFR";

	case 5: return "MG_PILO";

	case 6: return "MG_RMPG";

	case 7: return "MG_SERA";

	case 8: return "MG_SRAC";

	case 9: return "MG_STRP";

	case 10: return "MG_STNT";

	case 11: return "MG_SHTR";

	case 12: return "MG_TAXI";

	case 13: return "MG_TENN";

	case 14: return "MG_TOWI";

	case 15: return "MG_TRFA";

	case 16: return "MG_TRFG";

	case 17: return "MG_TRIA";

	case 18: return "MG_YOGA";

	case 19: return "MG_CRCE";
	}
	return "INVALID!";
}

// Position - 0x3807C
struct<2> func_441(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x380B0
struct<2>
func_442(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x380E4
struct<2>
func_443(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x38118
struct<2>
func_444(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x3814C
struct<2>
func_445(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2) || iParam0 == 3) {
	}
	else {
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x3818A
struct<2>
func_446(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x381BE
struct<2>
func_447(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &Global_82612[iParam0 /*34*/].f_8, 8);
	if (iParam0 == 90) {
		switch (Global_101700.f_8044.f_99.f_205[7]) {
		case 1: StringConCat(&Var0, "A", 8); break;

		case 2: StringConCat(&Var0, "B", 8); break;

		default: StringConCat(&Var0, "A", 8); break;
		}
	}
	return Var0;
}

//Position - 0x3822B
bool func_448(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!func_450(0) || Global_69971 || Global_69960 == 1 || !cam::is_screen_faded_in()) {
		return false;
	}
	switch (Global_69956) {
	case 0:
		if (gameplay::are_strings_equal(&uParam1, "NONE") || gameplay::is_string_null_or_empty(&uParam1)) {
			Global_69956 = 3;
		}
		else {
			Global_69956 = 1;
		}
		break;

	case 1:
		if (cutscene::has_cutscene_loaded()) {
			Global_69956 = 2;
		}
		break;

	case 2:
		if (cutscene::is_cutscene_playing()) {
			Global_69956 = 4;
			return true;
		}
		else if (!cutscene::is_cutscene_active()) {
			Global_69956 = 3;
		}
		break;

	case 3:
		if (cutscene::is_cutscene_playing()) {
		}
		else {
			Global_69956 = 5;
			return true;
		}
		break;

	case 4:
		if (cutscene::is_cutscene_playing()) {
			return true;
		}
		else if (iParam0 == 1) {
			Global_69956 = 5;
		}
		break;

	case 5:
		if (cutscene::is_cutscene_playing() || func_9(0) || func_449(1)) {
		}
		else {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x38344
bool func_449(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0x3836D
int func_450(int iParam0) {
	if (Global_35781 == 15) {
		return 0;
	}
	if (func_451(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x3838F
bool func_451(int iParam0) { return func_452(iParam0, Global_35781); }

// Position - 0x383A0
int func_452(int iParam0, int iParam1) {
	if (iParam1 == 15) {
		return 1;
	}
	if (iParam0 == 15) {
		return 0;
	}
	switch (iParam0) {
	case 16:
		switch (iParam1) {
		case 9:
		case 10:
		case 7:
		case 13:
		case 14: return 0;
		}
		return 1;

	case 0:
		switch (iParam1) {
		case 5:
		case 17: return 1;
		}
		break;

	case 2:
	case 3:
		switch (iParam1) {
		case 5:
		case 6:
		case 8:
		case 17: return 1;
		}
		break;

	case 4:
		if (iParam1 == 17) {
			return 1;
		}
		break;

	case 5: break;

	case 6:
	case 8:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 7:
		if (iParam1 == 6) {
			return 1;
		}
		break;

	case 9:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 10:
		switch (iParam1) {
		case 5:
		case 6:
		case 17: return 1;
		}
		break;

	case 11:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 17:
		switch (iParam1) {
		case 17:
		case 12:
		case 5: return 1;
		}
		break;

	case 18:
	case 12:
		switch (iParam1) {
		case 5:
		case 6:
		case 8: return 1;
		}
		break;

	case 13:
		switch (iParam1) {
		case 5: return 1;
		}
		break;

	case 14:
		switch (iParam1) {
		case 5: return 1;
		}
		break;
	}
	return 0;
}

// Position - 0x38581
void func_453(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 46) {
		func_454(iVar0, iParam0);
		iVar0++;
	}
}

// Position - 0x385A4
void func_454(int iParam0, bool bParam1) {
	if (bParam1) {
		if (!func_458(iParam0, 2, 1)) {
			func_457(iParam0, 2, 1);
		}
	}
	else if (func_458(iParam0, 2, 1)) {
		func_455(iParam0, 2, 1);
	}
}

// Position - 0x385DB
void func_455(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::clear_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_86() == 0) {
			iVar0 = func_147(func_456(iParam0), -1, 0);
			gameplay::clear_bit(&iVar0, iParam1);
			func_145(func_456(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::clear_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x38644
int func_456(int iParam0) {
	switch (iParam0) {
	case 0: return 822;

	case 1: return 823;

	case 2: return 824;

	case 3: return 825;

	case 4: return 826;

	case 5: return 827;

	case 6: return 828;

	case 7: return 829;

	case 8: return 830;

	case 9: return 831;

	case 10: return 832;

	case 11: return 833;

	case 12: return 834;

	case 13: return 835;

	case 14: return 836;

	case 15: return 838;

	case 16: return 839;

	case 17: return 840;

	case 18: return 841;

	case 19: return 842;

	case 20: return 843;

	case 21: return 844;

	case 22: return 845;

	case 23: return 846;

	case 24: return 847;

	case 25: return 848;

	case 26: return 849;

	case 27: return 850;

	case 28: return 851;

	case 29: return 852;

	case 30: return 853;

	case 31: return 854;

	case 32: return 855;

	case 33: return 856;

	case 34: return 857;

	case 35: return 858;

	case 36: return 859;

	case 37: return 860;

	case 38: return 861;

	case 39: return 862;

	case 40: return 866;

	case 41: return 867;

	case 42: return 868;

	case 43: return 869;

	case 44: return 5847;

	case 45: return 3780;

	default: break;
	}
	return 6022;
}

// Position - 0x3890B
void func_457(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::set_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_86() == 0) {
			iVar0 = func_147(func_456(iParam0), -1, 0);
			gameplay::set_bit(&iVar0, iParam1);
			func_145(func_456(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::set_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x38974
bool func_458(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_86() == 0) {
			return gameplay::is_bit_set(func_147(func_456(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return false;
}

// Position - 0x389D4
void func_459(var *uParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6) {
		if (func_16(uParam0->f_28[iVar0])) {
			entity::set_entity_proofs(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		if (func_16(uParam0->f_35[iVar0])) {
			entity::set_entity_proofs(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6) {
		if (func_16(uParam0->f_41[iVar0])) {
			entity::set_entity_proofs(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		entity::set_entity_proofs(player::player_ped_id(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		entity::set_entity_invincible(player::player_ped_id(), iParam1);
		if (iParam2) {
			weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
		}
	}
}

// Position - 0x38AC9
var func_460() {
	return ped::add_scenario_blocking_area(-722.7994f, 14.8417f, 37.4501f, -661.751f, 56.4227f, 42.8989f, 0, 1, 1, 1);
}

// Position - 0x38AF7
int func_461(var *uParam0) {
	int iVar0[3];
	int iVar4;

	iVar0[0] = joaat("landstalker");
	iVar0[1] = joaat("tailgater");
	iVar0[2] = joaat("s_m_m_highsec_01");
	switch (iLocal_79) {
	case 0:
		uParam0->f_16 = 5;
		uParam0->f_17[0 /*3*/] = {-670.9681f, 53.53062f, 40.04339f};
		uParam0->f_17[1 /*3*/] = {-723.7632f, 34.0545f, 46.97017f};
		uParam0->f_24 = 19.75f;
		uParam0->f_27 = 1;
		uParam0->f_26 = 1;
		uParam0->f_25 = 1;
		StringCopy(&uParam0->f_9, "EP_8_RCM", 24);
		iVar4 = 0;
		while (iVar4 <= iVar0 - 1) {
			streaming::request_model(iVar0[iVar4]);
			iVar4++;
		}
		iLocal_79 = 1;
		break;

	case 1:
		if (!func_464(&iVar0)) {
			return 0;
		}
		iLocal_79 = 2;
		break;

	case 2:
		func_463(&uParam0->f_35[0], iVar0[0], -686.5046f, 43.9098f, 42.2067f, 296.81f);
		vehicle::set_vehicle_doors_locked(uParam0->f_35[0], 3);
		vehicle::set_vehicle_colours(uParam0->f_35[0], 157, 157);
		vehicle::set_vehicle_extra_colours(uParam0->f_35[0], 0, 0);
		vehicle::_0x25367DE49D64CF16(uParam0->f_35[0], 1);
		vehicle::set_vehicle_number_plate_text_index(uParam0->f_35[0], 0);
		func_463(&uParam0->f_35[1], iVar0[1], -697.3215f, 39.0406f, 42.86736f, -66.98854f);
		vehicle::set_vehicle_doors_locked(uParam0->f_35[1], 3);
		vehicle::set_vehicle_number_plate_text(uParam0->f_35[1], "K1FFL0M");
		vehicle::set_vehicle_colours(uParam0->f_35[1], 157, 157);
		vehicle::set_vehicle_extra_colours(uParam0->f_35[1], 0, 0);
		vehicle::set_vehicle_number_plate_text_index(uParam0->f_35[1], 0);
		func_462(&uParam0->f_28[0], iVar0[2], -726.4555f, 33.33568f, 43.22695f, -147.8099f, 26);
		weapon::give_weapon_to_ped(uParam0->f_28[0], joaat("weapon_smg"), -1, 0, 0);
		ai::task_look_at_entity(uParam0->f_28[0], player::player_ped_id(), -1, 0, 2);
		ped::set_ped_leg_ik_mode(uParam0->f_28[0], 2);
		ai::task_start_scenario_in_place(uParam0->f_28[0], "WORLD_HUMAN_GUARD_STAND", 0, 0);
		ped::set_ped_component_variation(uParam0->f_28[0], 0, 1, 1, 0);
		ped::set_ped_component_variation(uParam0->f_28[0], 3, 0, 1, 0);
		ped::set_ped_component_variation(uParam0->f_28[0], 4, 0, 1, 0);
		ped::set_ped_component_variation(uParam0->f_28[0], 8, 1, 0, 0);
		ped::set_ped_component_variation(uParam0->f_28[0], 11, 1, 0, 0);
		func_462(&uParam0->f_28[1], iVar0[2], -666.5512f, 49.19759f, 42.07154f, -171.6803f, 26);
		weapon::give_weapon_to_ped(uParam0->f_28[1], joaat("weapon_smg"), -1, 0, 0);
		ai::task_look_at_entity(uParam0->f_28[1], player::player_ped_id(), -1, 0, 2);
		ped::set_ped_leg_ik_mode(uParam0->f_28[1], 2);
		ai::task_start_scenario_in_place(uParam0->f_28[1], "WORLD_HUMAN_GUARD_STAND", 0, 0);
		ped::set_ped_component_variation(uParam0->f_28[1], 0, 0, 0, 0);
		ped::set_ped_component_variation(uParam0->f_28[1], 3, 0, 1, 0);
		ped::set_ped_component_variation(uParam0->f_28[1], 4, 0, 1, 0);
		ped::set_ped_component_variation(uParam0->f_28[1], 8, 0, 0, 0);
		ped::set_ped_component_variation(uParam0->f_28[1], 11, 0, 0, 0);
		func_462(&uParam0->f_28[2], iVar0[2], -690f, 42f, 42f, 0f, 26);
		func_462(&uParam0->f_28[3], iVar0[2], -690f, 42f, 43f, 0f, 26);
		ped::set_ped_into_vehicle(uParam0->f_28[2], uParam0->f_35[0], -1);
		ped::set_ped_into_vehicle(uParam0->f_28[3], uParam0->f_35[0], 0);
		weapon::give_weapon_to_ped(uParam0->f_28[2], joaat("weapon_combatpistol"), -1, 0, 0);
		weapon::give_weapon_to_ped(uParam0->f_28[3], joaat("weapon_microsmg"), -1, 0, 0);
		ped::set_ped_component_variation(uParam0->f_28[2], 0, 0, 1, 0);
		ped::set_ped_component_variation(uParam0->f_28[2], 3, 0, 1, 0);
		ped::set_ped_component_variation(uParam0->f_28[2], 4, 0, 1, 0);
		ped::set_ped_component_variation(uParam0->f_28[2], 8, 0, 0, 0);
		ped::set_ped_component_variation(uParam0->f_28[2], 11, 0, 0, 0);
		ped::set_ped_component_variation(uParam0->f_28[3], 0, 1, 0, 0);
		ped::set_ped_component_variation(uParam0->f_28[3], 3, 0, 2, 0);
		ped::set_ped_component_variation(uParam0->f_28[3], 4, 0, 2, 0);
		ped::set_ped_component_variation(uParam0->f_28[3], 8, 1, 0, 0);
		ped::set_ped_component_variation(uParam0->f_28[3], 11, 0, 1, 0);
		ped::add_relationship_group("gang", &iLocal_82);
		ped::set_ped_relationship_group_hash(uParam0->f_28[0], iLocal_82);
		ped::set_ped_relationship_group_hash(uParam0->f_28[1], iLocal_82);
		ped::set_ped_relationship_group_hash(uParam0->f_28[2], iLocal_82);
		ped::set_ped_relationship_group_hash(uParam0->f_28[3], iLocal_82);
		ped::set_ped_can_evasive_dive(uParam0->f_28[0], 0);
		ped::set_ped_can_evasive_dive(uParam0->f_28[1], 0);
		iVar4 = 0;
		while (iVar4 <= iVar0 - 1) {
			streaming::set_model_as_no_longer_needed(iVar0[iVar4]);
			iVar4++;
		}
		return 1;
	}
	return 0;
}

// Position - 0x38FA8
void func_462(var *uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6) {
	func_18(uParam0);
	*uParam0 = ped::create_ped(iParam6, iParam1, vParam2, fParam5, 0, 0);
}

// Position - 0x38FC9
void func_463(var *uParam0, int iParam1, vector3 vParam2, float fParam5) {
	func_15(uParam0);
	*uParam0 = vehicle::create_vehicle(iParam1, vParam2, fParam5, 1, 1);
	if (entity::does_entity_exist(*uParam0)) {
		vehicle::set_vehicle_on_ground_properly(*uParam0, 1084227584);
		entity::set_entity_health(*uParam0, 1000);
	}
}

// Position - 0x39009
int func_464(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= *iParam0 - 1) {
		if (!streaming::has_model_loaded((*iParam0)[iVar0])) {
			return 0;
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x3903A
bool func_465() {
	if (Global_91491 == 10 || Global_91491 == 9) {
		return true;
	}
	return false;
}

// Position - 0x3905E
void func_466() {
	func_413();
	if (func_479()) {
	}
	func_471(&Local_83, 1, 0, 0);
	func_303(&iLocal_555, 0, 0);
	func_289();
	func_470();
	func_453(0);
	gameplay::_set_unk_map_flag(0);
	if (ped::is_synchronized_scene_running(iLocal_309)) {
		entity::stop_synchronized_entity_anim(iLocal_632, -8f, 1);
	}
	if (entity::does_entity_exist(iLocal_578)) {
		if (iLocal_312 == 1) {
			if (!entity::is_entity_dead(iLocal_578, 0)) {
				ped::set_ped_keep_task(iLocal_578, 1);
			}
		}
		func_13(&iLocal_578, 1, 0, 1);
	}
	if (func_16(iLocal_632)) {
		if (iLocal_330 == 1) {
			vehicle::set_vehicle_door_shut(iLocal_632, 5, 0);
			vehicle::set_vehicle_doors_locked(iLocal_632, 1);
			iLocal_330 = 0;
		}
	}
	func_13(&iLocal_579, 1, 0, 1);
	if (func_16(iLocal_615)) {
		vehicle::set_vehicle_doors_locked(iLocal_615, 1);
	}
	func_12(&iLocal_615);
	if (cam::does_cam_exist(iLocal_608)) {
		cam::set_cam_active(iLocal_608, 0);
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		cam::destroy_cam(iLocal_608, 0);
		if (cam::does_cam_exist(iLocal_609)) {
			cam::set_cam_active(iLocal_609, 0);
			cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			cam::destroy_cam(iLocal_609, 0);
		}
		ui::display_hud(1);
		ui::display_radar(1);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		cam::set_gameplay_cam_relative_heading(0f);
	}
	cam::set_cinematic_button_active(1);
	iLocal_256 = 0;
	if (func_17(uLocal_616[0])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[0], 0);
		vehicle::_0x25367DE49D64CF16(uLocal_616[0], 1);
	}
	if (func_17(uLocal_616[1])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[1], 0);
		vehicle::_0x25367DE49D64CF16(uLocal_616[1], 1);
	}
	if (func_17(uLocal_616[2])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[2], 0);
		vehicle::_0x25367DE49D64CF16(uLocal_616[2], 1);
	}
	if (func_17(uLocal_616[3])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[3], 0);
		vehicle::_0x25367DE49D64CF16(uLocal_616[3], 1);
	}
	if (func_17(uLocal_616[4])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[4], 0);
		vehicle::_0x25367DE49D64CF16(uLocal_616[4], 1);
	}
	if (func_17(uLocal_616[5])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[5], 0);
		vehicle::_0x25367DE49D64CF16(uLocal_616[5], 1);
	}
	if (func_17(uLocal_616[6])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_616[6], 0);
		vehicle::_0x25367DE49D64CF16(uLocal_616[6], 1);
	}
	if (func_17(uLocal_624[0])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_624[0], 0);
		vehicle::_0x25367DE49D64CF16(uLocal_624[0], 1);
	}
	if (func_17(uLocal_624[1])) {
		audio::_0x18EB48CFC41F2EA0(uLocal_624[1], 0);
		vehicle::_0x25367DE49D64CF16(uLocal_624[1], 1);
	}
	if (audio::is_audio_scene_active("EPSILONISM_08_CHOPPER")) {
		audio::stop_audio_scene("EPSILONISM_08_CHOPPER");
	}
	ped::remove_scenario_blocking_area(iLocal_945, 0);
	ped::remove_scenario_blocking_area(iLocal_946, 0);
	ped::remove_scenario_blocking_area(iLocal_947, 0);
	streaming::set_model_as_no_longer_needed(joaat("s_m_m_highsec_01"));
	streaming::set_model_as_no_longer_needed(joaat("sentinel"));
	streaming::set_model_as_no_longer_needed(joaat("maverick"));
	streaming::set_model_as_no_longer_needed(joaat("landstalker"));
	streaming::set_model_as_no_longer_needed(joaat("a_m_y_epsilon_01"));
	streaming::remove_anim_dict("rcmepsilonism8");
	vehicle::set_vehicle_model_is_suppressed(joaat("landstalker"), 0);
	vehicle::set_vehicle_model_is_suppressed(joaat("sentinel"), 0);
	vehicle::set_vehicle_model_is_suppressed(joaat("sentinel2"), 0);
	vehicle::set_vehicle_model_is_suppressed(joaat("tailgater"), 0);
	ped::set_ped_model_is_suppressed(joaat("a_f_y_epsilon_01"), 0);
	ped::set_ped_model_is_suppressed(joaat("a_m_y_epsilon_01"), 0);
	ped::set_ped_model_is_suppressed(joaat("a_m_y_epsilon_02"), 0);
	gameplay::_0x9B2BD3773123EA2F(12, 0);
	gameplay::_0x9B2BD3773123EA2F(2, 0);
	gameplay::_0x9B2BD3773123EA2F(5, 0);
	gameplay::_0x9B2BD3773123EA2F(3, 0);
	player::set_wanted_level_multiplier(1f);
	if (iLocal_327 == 1) {
		func_5(0);
		if (iLocal_311 == 1) {
			func_294();
			if (iLocal_359 == 0) {
				ai::task_clear_look_at(player::player_ped_id());
				if (iLocal_371 == 0) {
					func_281(&uLocal_390, 4);
					func_340(&uLocal_390, 4, 0, "CRIS", 0, 1);
					func_467(-632277372, 0, 1, 51, 4, 6000, 6000, -1, -1, 0, -1, 0);
					iLocal_371 = 1;
				}
			}
			if (iLocal_336 == 0) {
				if (func_17(iLocal_632)) {
					if (!entity::is_entity_dead(uLocal_597[0], 0)) {
						if (entity::is_entity_attached_to_entity(uLocal_597[0], iLocal_632)) {
							iLocal_255 += iLocal_151;
						}
					}
					if (!entity::is_entity_dead(uLocal_597[1], 0)) {
						if (entity::is_entity_attached_to_entity(uLocal_597[1], iLocal_632)) {
							iLocal_255 += iLocal_151;
						}
					}
					if (!entity::is_entity_dead(uLocal_597[2], 0)) {
						if (entity::is_entity_attached_to_entity(uLocal_597[2], iLocal_632)) {
							iLocal_255 += iLocal_151;
						}
					}
					if (!entity::is_entity_dead(uLocal_597[3], 0)) {
						if (entity::is_entity_attached_to_entity(uLocal_597[3], iLocal_632)) {
							iLocal_255 += iLocal_151;
						}
					}
				}
			}
			if (iLocal_255 != 0) {
				func_25(0, 1, iLocal_255, 0, 0);
			}
			func_274(754);
		}
		else if (iLocal_334 == 1) {
			if (iLocal_330 == 1) {
				vehicle::set_vehicle_door_shut(iLocal_632, 5, 0);
				vehicle::set_vehicle_doors_locked(iLocal_632, 1);
				iLocal_330 = 0;
			}
		}
		else if (iLocal_359 == 0) {
			ai::task_clear_look_at(player::player_ped_id());
		}
	}
	audio::set_static_emitter_enabled("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 1);
	script::terminate_this_thread();
}

// Position - 0x394F7
int func_467(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11) {
	struct<15> Var0;
	int iVar15;

	if (func_83(0)) {
		return 0;
	}
	if (iParam5 < 0) {
		return 0;
	}
	if (iParam6 < 0) {
		return 0;
	}
	if (iParam8 == 76) {
		return 0;
	}
	if (iParam9 == 235) {
		return 0;
	}
	if (iParam3 < 3) {
		if (gameplay::is_bit_set(iParam2, iParam3)) {
			return 0;
		}
	}
	if (iParam4 < 3) {
		if (iParam4 != iParam3) {
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7) {
		return 0;
	}
	if (Global_101700.f_6647.f_136 < 9) {
		Var0 = iParam0;
		if (Global_101700.f_6647.f_911 == Var0) {
			Global_101700.f_6647.f_911 = -1;
		}
		Var0.f_3 = func_469(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = gameplay::get_game_timer() + iParam5;
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		gameplay::clear_bit(&Var0.f_1, 1);
		gameplay::clear_bit(&Var0.f_1, 0);
		if (iParam7 != -1) {
			gameplay::set_bit(&Var0.f_1, 11);
		}
		else if (iParam1 == 0) {
			gameplay::set_bit(&Var0.f_1, 10);
		}
		Global_101700.f_6647[Global_101700.f_6647.f_136 /*15*/] = {Var0};
		Global_101700.f_6647.f_136++;
		iVar15 = 0;
		while (iVar15 < 3) {
			if (gameplay::is_bit_set(iParam2, iVar15)) {
				func_468(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

// Position - 0x39677
void func_468(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_71(iParam0)) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_136) {
		if (gameplay::is_bit_set(Global_101700.f_6647[iVar0 /*15*/].f_2, iParam0)) {
			if (Global_101700.f_6647[iVar0 /*15*/].f_3 > iVar1) {
				iVar1 = Global_101700.f_6647[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101700.f_6647.f_764) {
		if (gameplay::is_bit_set(Global_101700.f_6647.f_651[iVar2 /*14*/].f_2, iParam0)) {
			if (Global_101700.f_6647.f_651[iVar2 /*14*/].f_3 == 5) {
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101700.f_6647.f_919[iParam0] = iVar1;
}

// Position - 0x3973B
int func_469(int iParam0) {
	switch (iParam0) {
	case 0:
	case 4: return 5;

	case 7: return 4;

	case 2: return 3;

	case 1: return 2;

	case 3: return 1;

	case 5:
	case 6: return 0;
	}
	return 7;
}

// Position - 0x397A5
void func_470() {
	if (audio::is_audio_scene_active("EPSILONISM_08_NON_COMPLIANCE")) {
		audio::stop_audio_scene("EPSILONISM_08_NON_COMPLIANCE");
	}
}

// Position - 0x397C0
void func_471(var *uParam0, int iParam1, int iParam2, int iParam3) {
	func_477(uParam0, iParam1);
	func_475(uParam0, iParam2);
	func_472(uParam0, iParam3);
}

// Position - 0x397E0
void func_472(var *uParam0, bool bParam1) { func_473(&uParam0->f_41, bParam1); }

// Position - 0x397F2
void func_473(var *uParam0, bool bParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (bParam1) {
			func_14(&(*uParam0)[iVar0]);
		}
		else {
			func_474(&(*uParam0)[iVar0], 0);
		}
		iVar0++;
	}
}

// Position - 0x39830
void func_474(int *iParam0, int iParam1) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		if (!iParam1) {
			entity::set_object_as_no_longer_needed(iParam0);
		}
		else {
			object::_mark_object_for_deletion(*iParam0);
		}
	}
}

// Position - 0x3986B
void func_475(var *uParam0, bool bParam1) { func_476(&uParam0->f_35, bParam1); }

// Position - 0x3987D
void func_476(var *uParam0, bool bParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (bParam1) {
			func_15(&(*uParam0)[iVar0]);
		}
		else {
			func_12(&(*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x398BA
void func_477(var *uParam0, int iParam1) { func_478(&uParam0->f_28, iParam1); }

// Position - 0x398CC
void func_478(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (iParam1 == 1) {
			func_18(&(*uParam0)[iVar0]);
		}
		else {
			func_13(&(*uParam0)[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

// Position - 0x3990D
bool func_479() {
	int iVar0;

	iVar0 = func_272();
	if (iVar0 == -1) {
		return false;
	}
	if (!Global_100787[iVar0 /*10*/].f_4) {
		return false;
	}
	Global_100787[iVar0 /*10*/].f_4 = 0;
	ui::clear_additional_text(0, 1);
	ui::clear_additional_text(3, 1);
	ui::clear_additional_text(2, 1);
	if (!func_83(0)) {
		if (Global_100787[iVar0 /*10*/].f_5 && Global_100787[iVar0 /*10*/].f_6) {
			Global_100787[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_100787[iVar0 /*10*/].f_6 && !Global_100787[iVar0 /*10*/].f_5) {
			Global_100787[iVar0 /*10*/].f_6 = 1;
		}
	}
	return true;
}

// Position - 0x399AE
void func_480(int iParam0) {
	int iVar0;

	func_496();
	if (!func_495()) {
		iVar0 = func_272();
		if (iVar0 == -1) {
			return;
		}
		if (!Global_100787[iVar0 /*10*/].f_4) {
			return;
		}
		if (Global_100787[iVar0 /*10*/].f_5) {
			return;
		}
		if (Global_100787[iVar0 /*10*/].f_6) {
			return;
		}
		if (Global_85999 == Global_91528) {
			Global_101700.f_17533[iVar0 /*6*/].f_4++;
		}
		Global_85999 = Global_91528;
		if (iParam0) {
			func_231(iVar0, 1, 0);
			func_481(script::get_this_script_name(), iVar0);
		}
		else {
			if (Global_100787[iVar0 /*10*/].f_9 == -1) {
			}
			else {
				func_242(&Global_100787[iVar0 /*10*/].f_9);
			}
			func_230(iVar0, 1, 1, 0);
		}
		Global_100787[iVar0 /*10*/].f_6 = 1;
	}
}

// Position - 0x39A7E
void func_481(char *sParam0, int iParam1) {
	if (Global_91491 != 12) {
		if (func_482(sParam0, 6, iParam1)) {
			Global_91491.f_1 = iParam1;
		}
	}
}

// Position - 0x39AA6
bool func_482(char *sParam0, int iParam1, int iParam2) {
	int iVar0;
	struct<32> Var1;
	int iVar33;

	func_94();
	func_494();
	Global_91491 = 0;
	StringCopy(&Global_91491.f_3, sParam0, 32);
	Global_91491.f_11 = iParam1;
	gameplay::_disable_automatic_respawn(1);
	gameplay::set_fade_out_after_arrest(0);
	gameplay::set_fade_out_after_death(0);
	func_6(1);
	func_5(1);
	func_491(0);
	func_490(1);
	gameplay::clear_bit(&Global_91491.f_20, 9);
	gameplay::clear_bit(&Global_91491.f_20, 6);
	gameplay::clear_bit(&Global_91491.f_20, 20);
	gameplay::clear_bit(&Global_91491.f_20, 21);
	gameplay::clear_bit(&Global_91491.f_20, 5);
	if (entity::does_entity_exist(player::player_ped_id())) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (entity::is_entity_upsidedown(iVar0)) {
					gameplay::set_bit(&Global_91491.f_20, 5);
				}
			}
		}
	}
	ui::clear_help(1);
	ui::clear_prints();
	func_489(0);
	func_97(1);
	Global_91491.f_2 = Global_91528;
	if (func_488()) {
		if (func_487()) {
			if (Global_91528 >= func_484()) {
				if (!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 16)) {
					if (Global_101700.f_8044.f_330[iParam2 /*6*/].f_1 >= 2) {
						Global_86000 = 1;
					}
				}
			}
		}
		else if (Global_91491.f_11 == 6) {
			func_233(iParam2, &Var1);
			if (Var1.f_31 == 1) {
				if (Global_101700.f_17533[iParam2 /*6*/].f_4 >= 2) {
					Global_86000 = 1;
				}
			}
		}
		else {
			iVar33 = func_483(script::get_this_script_name());
			if (iVar33 > -1) {
				if (Global_101700.f_23945.f_4[iVar33] >= 2) {
					Global_86000 = 1;
				}
			}
		}
	}
	return true;
}

// Position - 0x39C38
int func_483(char *sParam0) {
	if (gameplay::are_strings_equal("BailBond1", sParam0)) {
		return 0;
	}
	else if (gameplay::are_strings_equal("BailBond2", sParam0)) {
		return 1;
	}
	else if (gameplay::are_strings_equal("BailBond3", sParam0)) {
		return 2;
	}
	else if (gameplay::are_strings_equal("BailBond4", sParam0)) {
		return 3;
	}
	return -1;
}

// Position - 0x39C92
int func_484() {
	int iVar0;
	int iVar1;

	iVar0 = func_485(&Global_91491.f_3, 0);
	iVar1 = 0;
	if (iVar0 == 53) {
		iVar1 = 1;
	}
	return iVar1;
}

// Position - 0x39CB6
int func_485(char *sParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = gameplay::get_hash_key(sParam0);
	iVar1 = func_486(iVar0, 1);
	if (iVar1 == -1 && !iParam1) {
	}
	return iVar1;
}

// Position - 0x39CE0
int func_486(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 94) {
		if (Global_82612[iVar0 /*34*/].f_6 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	if (!iParam1) {
	}
	return -1;
}

// Position - 0x39D16
bool func_487() {
	if (Global_91491.f_11 == 0 || Global_91491.f_11 == 1 || Global_91491.f_11 == 2 || Global_91491.f_11 == 3 ||
		Global_91491.f_11 == 4) {
		return true;
	}
	return false;
}

// Position - 0x39D66
bool func_488() {
	if (Global_91491.f_11 == 0 || Global_91491.f_11 == 1 || Global_91491.f_11 == 2 || Global_91491.f_11 == 6 ||
		Global_91491.f_11 == 3) {
		return true;
	}
	if (Global_91491.f_11 == 5) {
		if (func_483(&Global_91491.f_3) > -1) {
			return true;
		}
	}
	return false;
}

// Position - 0x39DD2
void func_489(int iParam0) {
	ui::display_hud(iParam0);
	ui::display_radar(iParam0);
}

// Position - 0x39DE6
void func_490(int iParam0) {
	if (iParam0 == 1) {
		ui::_0xFDB423997FA30340();
		gameplay::set_bit(&Global_91491.f_20, 3);
	}
	else if (gameplay::is_bit_set(Global_91491.f_20, 3)) {
		ui::_0xE1CD1E48E025E661();
		gameplay::clear_bit(&Global_91491.f_20, 3);
	}
}

// Position - 0x39E23
void func_491(int iParam0) {
	if (iParam0 == 1) {
		if (gameplay::is_bit_set(Global_91491.f_20, 4)) {
			func_493();
			gameplay::clear_bit(&Global_91491.f_20, 4);
		}
	}
	else {
		func_492();
		gameplay::set_bit(&Global_91491.f_20, 4);
	}
}

// Position - 0x39E60
void func_492() { Global_17151.f_5 = 1; }

// Position - 0x39E6E
void func_493() { Global_17151.f_5 = 0; }

// Position - 0x39E7C
void func_494() {
	Global_86000 = 0;
	Global_86001 = 0;
}

// Position - 0x39E8E
int func_495() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}

// Position - 0x39ECC
void func_496() {
	Global_91526 = 1;
	if (player::is_player_being_arrested(player::player_id(), 1)) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_69()) {
			case 0: StringCopy(&Global_69934, "CMN_MARRE", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FARRE", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TARRE", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
	}
	else if (!player::is_player_playing(player::player_id())) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_69()) {
			case 0: StringCopy(&Global_69934, "CMN_MDIED", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FDIED", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TDIED", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
		gameplay::set_bit(&Global_91491.f_20, 25);
	}
}

// Position - 0x39FBF
void func_497(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
	}
}

// Position - 0x39FD1
void func_498(var *uParam0) {
	func_499(&uParam0->f_28);
	func_499(&uParam0->f_35);
	func_499(&uParam0->f_41);
}

// Position - 0x39FF1
void func_499(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (entity::does_entity_exist((*uParam0)[iVar0])) {
			entity::set_entity_as_mission_entity((*uParam0)[iVar0], 0, 1);
		}
		iVar0++;
	}
}

// Position - 0x3A02B
int func_500(int iParam0) {
	if (!func_71(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}