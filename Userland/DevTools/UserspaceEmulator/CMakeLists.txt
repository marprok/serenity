set(SOURCES
    Emulator.cpp
    Emulator_syscalls.cpp
    MallocTracer.cpp
    MmapRegion.cpp
    Range.cpp
    RangeAllocator.cpp
    Region.cpp
    SimpleRegion.cpp
    SoftCPU.cpp
    SoftMMU.cpp
    main.cpp
)

serenity_bin(UserspaceEmulator)
target_link_libraries(UserspaceEmulator LibX86 LibDebug LibCore LibPthread)
