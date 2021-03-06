SET(CPP_FILES

## Module Activator
mitkUSActivator.cpp

## Model Classes
USModel/mitkUSImage.cpp
USModel/mitkUSImageMetadata.cpp
USModel/mitkUSDevice.cpp
USModel/mitkUSVideoDevice.cpp
USModel/mitkUSVideoDeviceCustomControls.cpp
USModel/mitkUSProbe.cpp
USModel/mitkUSDevicePersistence.cpp

## Filters and Sources
USFilters/mitkUSImageLoggingFilter.cpp
USFilters/mitkUSImageSource.cpp
USFilters/mitkUSImageVideoSource.cpp

## Control Interfaces
USControlInterfaces/mitkUSAbstractControlInterface.cpp
USControlInterfaces/mitkUSControlInterfaceBMode.cpp
USControlInterfaces/mitkUSControlInterfaceProbes.cpp
USControlInterfaces/mitkUSControlInterfaceDoppler.cpp
)
