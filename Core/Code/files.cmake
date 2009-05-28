SET(CPP_FILES
  Algorithms/mitkBaseDataSource.cpp
  Algorithms/mitkBaseProcess.cpp
  Algorithms/mitkCoreObjectFactory.cpp
  Algorithms/mitkDataTreeNodeFactory.cpp
  Algorithms/mitkDataTreeNodeSource.cpp
  Algorithms/mitkGeometry2DDataToSurfaceFilter.cpp
  Algorithms/mitkHistogramGenerator.cpp
  Algorithms/mitkImageCastPart1.cpp
  Algorithms/mitkImageCastPart2.cpp
  Algorithms/mitkImageCastPart3.cpp
  Algorithms/mitkImageCastPart4.cpp
  Algorithms/mitkImageChannelSelector.cpp
  Algorithms/mitkImageSliceSelector.cpp
  Algorithms/mitkImageSource.cpp
  Algorithms/mitkImageTimeSelector.cpp
  Algorithms/mitkImageToImageFilter.cpp
  Algorithms/mitkPointSetSource.cpp
  Algorithms/mitkSubImageSelector.cpp
  Algorithms/mitkSurfaceSource.cpp
  Algorithms/mitkUIDGenerator.cpp
  Algorithms/mitkVolumeCalculator.cpp
  Controllers/mitkBaseController.cpp
  Controllers/mitkCameraController.cpp
  Controllers/mitkCameraRotationController.cpp
  Controllers/mitkFocusManager.cpp
  Controllers/mitkLimitedLinearUndo.cpp
  Controllers/mitkOperationEvent.cpp
  Controllers/mitkRenderingManager.cpp
  Controllers/mitkSliceNavigationController.cpp
  Controllers/mitkSlicesCoordinator.cpp
  Controllers/mitkSlicesRotator.cpp
  Controllers/mitkSlicesSwiveller.cpp
  Controllers/mitkStepper.cpp
  Controllers/mitkTestManager.cpp
  Controllers/mitkUndoController.cpp
  Controllers/mitkVerboseLimitedLinearUndo.cpp
  Controllers/mitkVtkInteractorCameraController.cpp
  Controllers/mitkVtkLayerController.cpp
  DataManagement/mitkAbstractTransformGeometry.cpp
  DataManagement/mitkAnnotationProperty.cpp
  DataManagement/mitkApplicationCursor.cpp
  DataManagement/mitkBaseData.cpp
  DataManagement/mitkBaseProperty.cpp
  DataManagement/mitkClippingProperty.cpp
  DataManagement/mitkColorProperty.cpp
  DataManagement/mitkDataStorage.cpp
  DataManagement/mitkDataTree.cpp
  DataManagement/mitkDataTreeNode.cpp
  DataManagement/mitkDataTreeStorage.cpp
  DataManagement/mitkDisplayGeometry.cpp
  DataManagement/mitkEnumerationProperty.cpp
  DataManagement/mitkGeometry2D.cpp
  DataManagement/mitkGeometry2DData.cpp
  DataManagement/mitkGeometry3D.cpp
  DataManagement/mitkGeometryData.cpp
  DataManagement/mitkGroupTagProperty.cpp
  DataManagement/mitkImage.cpp
  DataManagement/mitkImageDataItem.cpp
  DataManagement/mitkLandmarkBasedCurvedGeometry.cpp
  DataManagement/mitkLandmarkProjectorBasedCurvedGeometry.cpp
  DataManagement/mitkLandmarkProjector.cpp
  DataManagement/mitkLevelWindow.cpp
  DataManagement/mitkLevelWindowManager.cpp
  DataManagement/mitkLevelWindowPreset.cpp
  DataManagement/mitkLevelWindowProperty.cpp
  DataManagement/mitkLookupTable.cpp
  DataManagement/mitkMemoryUtilities.cpp
  DataManagement/mitkModeOperation.cpp
  DataManagement/mitkNodePredicateAND.cpp
  DataManagement/mitkNodePredicateBase.cpp
  DataManagement/mitkNodePredicateCompositeBase.cpp
  DataManagement/mitkNodePredicateData.cpp
  DataManagement/mitkNodePredicateDataType.cpp
  DataManagement/mitkNodePredicateDimension.cpp
  DataManagement/mitkNodePredicateFirstLevel.cpp
  DataManagement/mitkNodePredicateNOT.cpp
  DataManagement/mitkNodePredicateOR.cpp
  DataManagement/mitkNodePredicateProperty.cpp
  DataManagement/mitkNodePredicateSource.cpp
  DataManagement/mitkPlaneDecorationProperty.cpp
  DataManagement/mitkPlaneOperation.cpp
  DataManagement/mitkPointOperation.cpp
  DataManagement/mitkPointSet.cpp
  DataManagement/mitkProperties.cpp
  DataManagement/mitkPropertyList.cpp
  DataManagement/mitkRotationOperation.cpp
  DataManagement/mitkSlicedData.cpp
  DataManagement/mitkSlicedGeometry3D.cpp
  DataManagement/mitkSmartPointerProperty.cpp
  DataManagement/mitkStandaloneDataStorage.cpp
  DataManagement/mitkStateTransitionOperation.cpp
  DataManagement/mitkStringProperty.cpp
  DataManagement/mitkSurface.cpp
  DataManagement/mitkSurfaceOperation.cpp
  DataManagement/mitkThinPlateSplineCurvedGeometry.cpp
  DataManagement/mitkTimeSlicedGeometry.cpp
  DataManagement/mitkTransferFunction.cpp
  DataManagement/mitkVector.cpp
  DataManagement/mitkVtkInterpolationProperty.cpp
  DataManagement/mitkVtkRepresentationProperty.cpp
  DataManagement/mitkVtkResliceInterpolationProperty.cpp
  DataManagement/mitkVtkScalarModeProperty.cpp
  DataManagement/mitkVtkVolumeRenderingProperty.cpp
  DataManagement/mitkWeakPointerProperty.cpp
  DataManagement/mitkXMLIO.cpp
  Interactions/mitkAction.cpp
  Interactions/mitkAffineInteractor.cpp
  Interactions/mitkCoordinateSupplier.cpp
  Interactions/mitkDisplayCoordinateOperation.cpp
  Interactions/mitkDisplayInteractor.cpp
  Interactions/mitkDisplayPositionEvent.cpp
  Interactions/mitkDisplayVectorInteractor.cpp
  Interactions/mitkEvent.cpp
  Interactions/mitkEventDescription.cpp
  Interactions/mitkEventMapper.cpp
  Interactions/mitkGlobalInteraction.cpp
  Interactions/mitkInteractor.cpp
  Interactions/mitkPointSetInteractor.cpp
  Interactions/mitkPositionEvent.cpp
  Interactions/mitkPositionTracker.cpp
  Interactions/mitkState.cpp
  Interactions/mitkStateEvent.cpp
  Interactions/mitkStateMachine.cpp
  Interactions/mitkStateMachineFactory.cpp
  Interactions/mitkTransition.cpp
  IO/mitkBaseDataIOFactory.cpp
  IO/mitkBaseXMLWriter.cpp
  IO/mitkFileReader.cpp
  IO/mitkFileSeriesReader.cpp
  IO/mitkFileWriter.cpp
  IO/mitkIpPicGet.c 
  IO/mitkImageWriter.cpp
  IO/mitkImageWriterFactory.cpp
  IO/mitkItkImageFileIOFactory.cpp
  IO/mitkItkImageFileReader.cpp
  IO/mitkItkImageWrite.cpp
  IO/mitkLookupTableProperty.cpp
  IO/mitkMaterialProperty.cpp
  IO/mitkOperation.cpp
  IO/mitkPicFileIOFactory.cpp
  IO/mitkPicFileReader.cpp
  IO/mitkPicFileWriter.cpp
  IO/mitkPicHelper.cpp
  IO/mitkPicVolumeTimeSeriesIOFactory.cpp
  IO/mitkPicVolumeTimeSeriesReader.cpp
  IO/mitkPixelType.cpp
  IO/mitkPlaneGeometry.cpp
  IO/mitkPointSetIOFactory.cpp
  IO/mitkPointSetReader.cpp
  IO/mitkPointSetWriter.cpp
  IO/mitkPointSetWriterFactory.cpp
  IO/mitkRawImageFileReader.cpp
  IO/mitkStandardFileLocations.cpp
  IO/mitkSTLFileIOFactory.cpp
  IO/mitkSTLFileReader.cpp
  IO/mitkSurfaceVtkWriter.cpp
  IO/mitkSurfaceVtkWriterFactory.cpp
  IO/mitkVtiFileIOFactory.cpp
  IO/mitkVtiFileReader.cpp
  IO/mitkVtkImageIOFactory.cpp
  IO/mitkVtkImageReader.cpp
  IO/mitkVtkSurfaceIOFactory.cpp
  IO/mitkVtkSurfaceReader.cpp
  IO/mitkXMLReader.cpp
  IO/mitkXMLWriter.cpp
  IO/vtkPointSetXMLParser.cpp
  Rendering/mitkBaseRenderer.cpp
  Rendering/mitkBaseVtkMapper2D.cpp
  Rendering/mitkBaseVtkMapper3D.cpp
  Rendering/mitkColoredRectangleRendering.cpp
  Rendering/mitkGeometry2DDataMapper2D.cpp
  Rendering/mitkGeometry2DDataVtkMapper3D.cpp
  Rendering/mitkGLMapper2D.cpp
  Rendering/mitkGradientBackground.cpp
  Rendering/mitkImageMapper2D.cpp
  Rendering/mitkLogoRendering.cpp
  Rendering/mitkMapper2D.cpp
  Rendering/mitkMapper3D.cpp
  Rendering/mitkMapper.cpp
  Rendering/mitkPointSetMapper2D.cpp
  Rendering/mitkPointSetVtkMapper3D.cpp
  Rendering/mitkPolyDataGLMapper2D.cpp
  Rendering/mitkSurfaceMapper2D.cpp
  Rendering/mitkSurfaceVtkMapper3D.cpp
  Rendering/mitkVolumeDataVtkMapper3D.cpp
  Rendering/mitkVtkPropRenderer.cpp
  Rendering/mitkVtkWidgetRendering.cpp
  Rendering/vtkMitkRectangleProp.cpp
  Rendering/vtkMitkRenderProp.cpp
)
SET(CPP_FILES
  Algorithms/mitkBaseDataSource.cpp
  Algorithms/mitkBaseProcess.cpp
  Algorithms/mitkCoreObjectFactory.cpp
  Algorithms/mitkDataTreeNodeFactory.cpp
  Algorithms/mitkDataTreeNodeSource.cpp
  Algorithms/mitkGeometry2DDataToSurfaceFilter.cpp
  Algorithms/mitkHistogramGenerator.cpp
  Algorithms/mitkImageCastPart1.cpp
  Algorithms/mitkImageCastPart2.cpp
  Algorithms/mitkImageCastPart3.cpp
  Algorithms/mitkImageCastPart4.cpp
  Algorithms/mitkImageChannelSelector.cpp
  Algorithms/mitkImageSliceSelector.cpp
  Algorithms/mitkImageSource.cpp
  Algorithms/mitkImageTimeSelector.cpp
  Algorithms/mitkImageToImageFilter.cpp
  Algorithms/mitkPointSetSource.cpp
  Algorithms/mitkSubImageSelector.cpp
  Algorithms/mitkSurfaceSource.cpp
  Algorithms/mitkUIDGenerator.cpp
  Algorithms/mitkVolumeCalculator.cpp
  Controllers/mitkBaseController.cpp
  Controllers/mitkCameraController.cpp
  Controllers/mitkCameraRotationController.cpp
  Controllers/mitkFocusManager.cpp
  Controllers/mitkLimitedLinearUndo.cpp
  Controllers/mitkOperationEvent.cpp
  Controllers/mitkRenderingManager.cpp
  Controllers/mitkSliceNavigationController.cpp
  Controllers/mitkSlicesCoordinator.cpp
  Controllers/mitkSlicesRotator.cpp
  Controllers/mitkSlicesSwiveller.cpp
  Controllers/mitkStepper.cpp
  Controllers/mitkTestManager.cpp
  Controllers/mitkUndoController.cpp
  Controllers/mitkVerboseLimitedLinearUndo.cpp
  Controllers/mitkVtkInteractorCameraController.cpp
  Controllers/mitkVtkLayerController.cpp
  DataManagement/mitkAbstractTransformGeometry.cpp
  DataManagement/mitkAnnotationProperty.cpp
  DataManagement/mitkApplicationCursor.cpp
  DataManagement/mitkBaseData.cpp
  DataManagement/mitkBaseProperty.cpp
  DataManagement/mitkClippingProperty.cpp
  DataManagement/mitkColorProperty.cpp
  DataManagement/mitkDataStorage.cpp
  DataManagement/mitkDataTree.cpp
  DataManagement/mitkDataTreeNode.cpp
  DataManagement/mitkDataTreeStorage.cpp
  DataManagement/mitkDisplayGeometry.cpp
  DataManagement/mitkEnumerationProperty.cpp
  DataManagement/mitkGeometry2D.cpp
  DataManagement/mitkGeometry2DData.cpp
  DataManagement/mitkGeometry3D.cpp
  DataManagement/mitkGeometryData.cpp
  DataManagement/mitkGroupTagProperty.cpp
  DataManagement/mitkImage.cpp
  DataManagement/mitkImageDataItem.cpp
  DataManagement/mitkLandmarkBasedCurvedGeometry.cpp
  DataManagement/mitkLandmarkProjectorBasedCurvedGeometry.cpp
  DataManagement/mitkLandmarkProjector.cpp
  DataManagement/mitkLevelWindow.cpp
  DataManagement/mitkLevelWindowManager.cpp
  DataManagement/mitkLevelWindowPreset.cpp
  DataManagement/mitkLevelWindowProperty.cpp
  DataManagement/mitkLookupTable.cpp
  DataManagement/mitkMemoryUtilities.cpp
  DataManagement/mitkModeOperation.cpp
  DataManagement/mitkNodePredicateAND.cpp
  DataManagement/mitkNodePredicateBase.cpp
  DataManagement/mitkNodePredicateCompositeBase.cpp
  DataManagement/mitkNodePredicateData.cpp
  DataManagement/mitkNodePredicateDataType.cpp
  DataManagement/mitkNodePredicateDimension.cpp
  DataManagement/mitkNodePredicateFirstLevel.cpp
  DataManagement/mitkNodePredicateNOT.cpp
  DataManagement/mitkNodePredicateOR.cpp
  DataManagement/mitkNodePredicateProperty.cpp
  DataManagement/mitkNodePredicateSource.cpp
  DataManagement/mitkPlaneDecorationProperty.cpp
  DataManagement/mitkPlaneOperation.cpp
  DataManagement/mitkPointOperation.cpp
  DataManagement/mitkPointSet.cpp
  DataManagement/mitkProperties.cpp
  DataManagement/mitkPropertyList.cpp
  DataManagement/mitkRotationOperation.cpp
  DataManagement/mitkSlicedData.cpp
  DataManagement/mitkSlicedGeometry3D.cpp
  DataManagement/mitkSmartPointerProperty.cpp
  DataManagement/mitkStandaloneDataStorage.cpp
  DataManagement/mitkStateTransitionOperation.cpp
  DataManagement/mitkStringProperty.cpp
  DataManagement/mitkSurface.cpp
  DataManagement/mitkSurfaceOperation.cpp
  DataManagement/mitkThinPlateSplineCurvedGeometry.cpp
  DataManagement/mitkTimeSlicedGeometry.cpp
  DataManagement/mitkTransferFunction.cpp
  DataManagement/mitkVector.cpp
  DataManagement/mitkVtkInterpolationProperty.cpp
  DataManagement/mitkVtkRepresentationProperty.cpp
  DataManagement/mitkVtkResliceInterpolationProperty.cpp
  DataManagement/mitkVtkScalarModeProperty.cpp
  DataManagement/mitkVtkVolumeRenderingProperty.cpp
  DataManagement/mitkWeakPointerProperty.cpp
  DataManagement/mitkXMLIO.cpp
  Interactions/mitkAction.cpp
  Interactions/mitkAffineInteractor.cpp
  Interactions/mitkCoordinateSupplier.cpp
  Interactions/mitkDisplayCoordinateOperation.cpp
  Interactions/mitkDisplayInteractor.cpp
  Interactions/mitkDisplayPositionEvent.cpp
  Interactions/mitkDisplayVectorInteractor.cpp
  Interactions/mitkEvent.cpp
  Interactions/mitkEventDescription.cpp
  Interactions/mitkEventMapper.cpp
  Interactions/mitkGlobalInteraction.cpp
  Interactions/mitkInteractor.cpp
  Interactions/mitkPointSetInteractor.cpp
  Interactions/mitkPositionEvent.cpp
  Interactions/mitkPositionTracker.cpp
  Interactions/mitkState.cpp
  Interactions/mitkStateEvent.cpp
  Interactions/mitkStateMachine.cpp
  Interactions/mitkStateMachineFactory.cpp
  Interactions/mitkTransition.cpp
  IO/mitkBaseDataIOFactory.cpp
  IO/mitkBaseXMLWriter.cpp
  IO/mitkFileReader.cpp
  IO/mitkFileSeriesReader.cpp
  IO/mitkFileWriter.cpp
  IO/mitkIpPicGet.c 
  IO/mitkImageWriter.cpp
  IO/mitkImageWriterFactory.cpp
  IO/mitkItkImageFileIOFactory.cpp
  IO/mitkItkImageFileReader.cpp
  IO/mitkItkImageWrite.cpp
  IO/mitkLookupTableProperty.cpp
  IO/mitkMaterialProperty.cpp
  IO/mitkOperation.cpp
  IO/mitkPicFileIOFactory.cpp
  IO/mitkPicFileReader.cpp
  IO/mitkPicFileWriter.cpp
  IO/mitkPicHelper.cpp
  IO/mitkPicVolumeTimeSeriesIOFactory.cpp
  IO/mitkPicVolumeTimeSeriesReader.cpp
  IO/mitkPixelType.cpp
  IO/mitkPlaneGeometry.cpp
  IO/mitkPointSetIOFactory.cpp
  IO/mitkPointSetReader.cpp
  IO/mitkPointSetWriter.cpp
  IO/mitkPointSetWriterFactory.cpp
  IO/mitkRawImageFileReader.cpp
  IO/mitkStandardFileLocations.cpp
  IO/mitkSTLFileIOFactory.cpp
  IO/mitkSTLFileReader.cpp
  IO/mitkSurfaceVtkWriter.cpp
  IO/mitkSurfaceVtkWriterFactory.cpp
  IO/mitkVtiFileIOFactory.cpp
  IO/mitkVtiFileReader.cpp
  IO/mitkVtkImageIOFactory.cpp
  IO/mitkVtkImageReader.cpp
  IO/mitkVtkSurfaceIOFactory.cpp
  IO/mitkVtkSurfaceReader.cpp
  IO/mitkXMLReader.cpp
  IO/mitkXMLWriter.cpp
  IO/vtkPointSetXMLParser.cpp
  Rendering/mitkBaseRenderer.cpp
  Rendering/mitkBaseVtkMapper2D.cpp
  Rendering/mitkBaseVtkMapper3D.cpp
  Rendering/mitkColoredRectangleRendering.cpp
  Rendering/mitkGeometry2DDataMapper2D.cpp
  Rendering/mitkGeometry2DDataVtkMapper3D.cpp
  Rendering/mitkGLMapper2D.cpp
  Rendering/mitkGradientBackground.cpp
  Rendering/mitkImageMapper2D.cpp
  Rendering/mitkLogoRendering.cpp
  Rendering/mitkMapper2D.cpp
  Rendering/mitkMapper3D.cpp
  Rendering/mitkMapper.cpp
  Rendering/mitkPointSetMapper2D.cpp
  Rendering/mitkPointSetVtkMapper3D.cpp
  Rendering/mitkPolyDataGLMapper2D.cpp
  Rendering/mitkSurfaceMapper2D.cpp
  Rendering/mitkSurfaceVtkMapper3D.cpp
  Rendering/mitkVolumeDataVtkMapper3D.cpp
  Rendering/mitkVtkPropRenderer.cpp
  Rendering/mitkVtkWidgetRendering.cpp
  Rendering/vtkMitkRectangleProp.cpp
  Rendering/vtkMitkRenderProp.cpp
)
SET(CPP_FILES
  Algorithms/mitkBaseDataSource.cpp
  Algorithms/mitkBaseProcess.cpp
  Algorithms/mitkCoreObjectFactory.cpp
  Algorithms/mitkDataTreeNodeFactory.cpp
  Algorithms/mitkDataTreeNodeSource.cpp
  Algorithms/mitkGeometry2DDataToSurfaceFilter.cpp
  Algorithms/mitkHistogramGenerator.cpp
  Algorithms/mitkImageCastPart1.cpp
  Algorithms/mitkImageCastPart2.cpp
  Algorithms/mitkImageCastPart3.cpp
  Algorithms/mitkImageCastPart4.cpp
  Algorithms/mitkImageChannelSelector.cpp
  Algorithms/mitkImageSliceSelector.cpp
  Algorithms/mitkImageSource.cpp
  Algorithms/mitkImageTimeSelector.cpp
  Algorithms/mitkImageToImageFilter.cpp
  Algorithms/mitkPointSetSource.cpp
  Algorithms/mitkSubImageSelector.cpp
  Algorithms/mitkSurfaceSource.cpp
  Algorithms/mitkUIDGenerator.cpp
  Algorithms/mitkVolumeCalculator.cpp
  Controllers/mitkBaseController.cpp
  Controllers/mitkCameraController.cpp
  Controllers/mitkCameraRotationController.cpp
  Controllers/mitkFocusManager.cpp
  Controllers/mitkLimitedLinearUndo.cpp
  Controllers/mitkOperationEvent.cpp
  Controllers/mitkRenderingManager.cpp
  Controllers/mitkSliceNavigationController.cpp
  Controllers/mitkSlicesCoordinator.cpp
  Controllers/mitkSlicesRotator.cpp
  Controllers/mitkSlicesSwiveller.cpp
  Controllers/mitkStepper.cpp
  Controllers/mitkTestManager.cpp
  Controllers/mitkUndoController.cpp
  Controllers/mitkVerboseLimitedLinearUndo.cpp
  Controllers/mitkVtkInteractorCameraController.cpp
  Controllers/mitkVtkLayerController.cpp
  DataManagement/mitkAbstractTransformGeometry.cpp
  DataManagement/mitkAnnotationProperty.cpp
  DataManagement/mitkApplicationCursor.cpp
  DataManagement/mitkBaseData.cpp
  DataManagement/mitkBaseProperty.cpp
  DataManagement/mitkClippingProperty.cpp
  DataManagement/mitkColorProperty.cpp
  DataManagement/mitkDataStorage.cpp
  DataManagement/mitkDataTree.cpp
  DataManagement/mitkDataTreeNode.cpp
  DataManagement/mitkDataTreeStorage.cpp
  DataManagement/mitkDisplayGeometry.cpp
  DataManagement/mitkEnumerationProperty.cpp
  DataManagement/mitkGeometry2D.cpp
  DataManagement/mitkGeometry2DData.cpp
  DataManagement/mitkGeometry3D.cpp
  DataManagement/mitkGeometryData.cpp
  DataManagement/mitkGroupTagProperty.cpp
  DataManagement/mitkImage.cpp
  DataManagement/mitkImageDataItem.cpp
  DataManagement/mitkLandmarkBasedCurvedGeometry.cpp
  DataManagement/mitkLandmarkProjectorBasedCurvedGeometry.cpp
  DataManagement/mitkLandmarkProjector.cpp
  DataManagement/mitkLevelWindow.cpp
  DataManagement/mitkLevelWindowManager.cpp
  DataManagement/mitkLevelWindowPreset.cpp
  DataManagement/mitkLevelWindowProperty.cpp
  DataManagement/mitkLookupTable.cpp
  DataManagement/mitkMemoryUtilities.cpp
  DataManagement/mitkModeOperation.cpp
  DataManagement/mitkNodePredicateAND.cpp
  DataManagement/mitkNodePredicateBase.cpp
  DataManagement/mitkNodePredicateCompositeBase.cpp
  DataManagement/mitkNodePredicateData.cpp
  DataManagement/mitkNodePredicateDataType.cpp
  DataManagement/mitkNodePredicateDimension.cpp
  DataManagement/mitkNodePredicateFirstLevel.cpp
  DataManagement/mitkNodePredicateNOT.cpp
  DataManagement/mitkNodePredicateOR.cpp
  DataManagement/mitkNodePredicateProperty.cpp
  DataManagement/mitkNodePredicateSource.cpp
  DataManagement/mitkPlaneDecorationProperty.cpp
  DataManagement/mitkPlaneOperation.cpp
  DataManagement/mitkPointOperation.cpp
  DataManagement/mitkPointSet.cpp
  DataManagement/mitkProperties.cpp
  DataManagement/mitkPropertyList.cpp
  DataManagement/mitkRotationOperation.cpp
  DataManagement/mitkSlicedData.cpp
  DataManagement/mitkSlicedGeometry3D.cpp
  DataManagement/mitkSmartPointerProperty.cpp
  DataManagement/mitkStandaloneDataStorage.cpp
  DataManagement/mitkStateTransitionOperation.cpp
  DataManagement/mitkStringProperty.cpp
  DataManagement/mitkSurface.cpp
  DataManagement/mitkSurfaceOperation.cpp
  DataManagement/mitkThinPlateSplineCurvedGeometry.cpp
  DataManagement/mitkTimeSlicedGeometry.cpp
  DataManagement/mitkTransferFunction.cpp
  DataManagement/mitkVector.cpp
  DataManagement/mitkVtkInterpolationProperty.cpp
  DataManagement/mitkVtkRepresentationProperty.cpp
  DataManagement/mitkVtkResliceInterpolationProperty.cpp
  DataManagement/mitkVtkScalarModeProperty.cpp
  DataManagement/mitkVtkVolumeRenderingProperty.cpp
  DataManagement/mitkWeakPointerProperty.cpp
  DataManagement/mitkXMLIO.cpp
  Interactions/mitkAction.cpp
  Interactions/mitkAffineInteractor.cpp
  Interactions/mitkCoordinateSupplier.cpp
  Interactions/mitkDisplayCoordinateOperation.cpp
  Interactions/mitkDisplayInteractor.cpp
  Interactions/mitkDisplayPositionEvent.cpp
  Interactions/mitkDisplayVectorInteractor.cpp
  Interactions/mitkEvent.cpp
  Interactions/mitkEventDescription.cpp
  Interactions/mitkEventMapper.cpp
  Interactions/mitkGlobalInteraction.cpp
  Interactions/mitkInteractor.cpp
  Interactions/mitkPointSetInteractor.cpp
  Interactions/mitkPositionEvent.cpp
  Interactions/mitkPositionTracker.cpp
  Interactions/mitkState.cpp
  Interactions/mitkStateEvent.cpp
  Interactions/mitkStateMachine.cpp
  Interactions/mitkStateMachineFactory.cpp
  Interactions/mitkTransition.cpp
  IO/mitkBaseDataIOFactory.cpp
  IO/mitkBaseXMLWriter.cpp
  IO/mitkFileReader.cpp
  IO/mitkFileSeriesReader.cpp
  IO/mitkFileWriter.cpp
  IO/mitkIpPicGet.c 
  IO/mitkImageWriter.cpp
  IO/mitkImageWriterFactory.cpp
  IO/mitkItkImageFileIOFactory.cpp
  IO/mitkItkImageFileReader.cpp
  IO/mitkItkImageWrite.cpp
  IO/mitkLookupTableProperty.cpp
  IO/mitkMaterialProperty.cpp
  IO/mitkOperation.cpp
  IO/mitkPicFileIOFactory.cpp
  IO/mitkPicFileReader.cpp
  IO/mitkPicFileWriter.cpp
  IO/mitkPicHelper.cpp
  IO/mitkPicVolumeTimeSeriesIOFactory.cpp
  IO/mitkPicVolumeTimeSeriesReader.cpp
  IO/mitkPixelType.cpp
  IO/mitkPlaneGeometry.cpp
  IO/mitkPointSetIOFactory.cpp
  IO/mitkPointSetReader.cpp
  IO/mitkPointSetWriter.cpp
  IO/mitkPointSetWriterFactory.cpp
  IO/mitkRawImageFileReader.cpp
  IO/mitkStandardFileLocations.cpp
  IO/mitkSTLFileIOFactory.cpp
  IO/mitkSTLFileReader.cpp
  IO/mitkSurfaceVtkWriter.cpp
  IO/mitkSurfaceVtkWriterFactory.cpp
  IO/mitkVtiFileIOFactory.cpp
  IO/mitkVtiFileReader.cpp
  IO/mitkVtkImageIOFactory.cpp
  IO/mitkVtkImageReader.cpp
  IO/mitkVtkSurfaceIOFactory.cpp
  IO/mitkVtkSurfaceReader.cpp
  IO/mitkXMLReader.cpp
  IO/mitkXMLWriter.cpp
  IO/vtkPointSetXMLParser.cpp
  Rendering/mitkBaseRenderer.cpp
  Rendering/mitkBaseVtkMapper2D.cpp
  Rendering/mitkBaseVtkMapper3D.cpp
  Rendering/mitkColoredRectangleRendering.cpp
  Rendering/mitkGeometry2DDataMapper2D.cpp
  Rendering/mitkGeometry2DDataVtkMapper3D.cpp
  Rendering/mitkGLMapper2D.cpp
  Rendering/mitkGradientBackground.cpp
  Rendering/mitkImageMapper2D.cpp
  Rendering/mitkLogoRendering.cpp
  Rendering/mitkMapper2D.cpp
  Rendering/mitkMapper3D.cpp
  Rendering/mitkMapper.cpp
  Rendering/mitkPointSetMapper2D.cpp
  Rendering/mitkPointSetVtkMapper3D.cpp
  Rendering/mitkPolyDataGLMapper2D.cpp
  Rendering/mitkSurfaceMapper2D.cpp
  Rendering/mitkSurfaceVtkMapper3D.cpp
  Rendering/mitkVolumeDataVtkMapper3D.cpp
  Rendering/mitkVtkPropRenderer.cpp
  Rendering/mitkVtkWidgetRendering.cpp
  Rendering/vtkMitkRectangleProp.cpp
  Rendering/vtkMitkRenderProp.cpp
)
SET(CPP_FILES
  Algorithms/mitkBaseDataSource.cpp
  Algorithms/mitkBaseProcess.cpp
  Algorithms/mitkCoreObjectFactory.cpp
  Algorithms/mitkDataTreeNodeFactory.cpp
  Algorithms/mitkDataTreeNodeSource.cpp
  Algorithms/mitkGeometry2DDataToSurfaceFilter.cpp
  Algorithms/mitkHistogramGenerator.cpp
  Algorithms/mitkImageCastPart1.cpp
  Algorithms/mitkImageCastPart2.cpp
  Algorithms/mitkImageCastPart3.cpp
  Algorithms/mitkImageCastPart4.cpp
  Algorithms/mitkImageChannelSelector.cpp
  Algorithms/mitkImageSliceSelector.cpp
  Algorithms/mitkImageSource.cpp
  Algorithms/mitkImageTimeSelector.cpp
  Algorithms/mitkImageToImageFilter.cpp
  Algorithms/mitkPointSetSource.cpp
  Algorithms/mitkSubImageSelector.cpp
  Algorithms/mitkSurfaceSource.cpp
  Algorithms/mitkUIDGenerator.cpp
  Algorithms/mitkVolumeCalculator.cpp
  Controllers/mitkBaseController.cpp
  Controllers/mitkCameraController.cpp
  Controllers/mitkCameraRotationController.cpp
  Controllers/mitkFocusManager.cpp
  Controllers/mitkLimitedLinearUndo.cpp
  Controllers/mitkOperationEvent.cpp
  Controllers/mitkRenderingManager.cpp
  Controllers/mitkSliceNavigationController.cpp
  Controllers/mitkSlicesCoordinator.cpp
  Controllers/mitkSlicesRotator.cpp
  Controllers/mitkSlicesSwiveller.cpp
  Controllers/mitkStepper.cpp
  Controllers/mitkTestManager.cpp
  Controllers/mitkUndoController.cpp
  Controllers/mitkVerboseLimitedLinearUndo.cpp
  Controllers/mitkVtkInteractorCameraController.cpp
  Controllers/mitkVtkLayerController.cpp
  DataManagement/mitkAbstractTransformGeometry.cpp
  DataManagement/mitkAnnotationProperty.cpp
  DataManagement/mitkApplicationCursor.cpp
  DataManagement/mitkBaseData.cpp
  DataManagement/mitkBaseProperty.cpp
  DataManagement/mitkClippingProperty.cpp
  DataManagement/mitkColorProperty.cpp
  DataManagement/mitkDataStorage.cpp
  DataManagement/mitkDataTree.cpp
  DataManagement/mitkDataTreeNode.cpp
  DataManagement/mitkDataTreeStorage.cpp
  DataManagement/mitkDisplayGeometry.cpp
  DataManagement/mitkEnumerationProperty.cpp
  DataManagement/mitkGeometry2D.cpp
  DataManagement/mitkGeometry2DData.cpp
  DataManagement/mitkGeometry3D.cpp
  DataManagement/mitkGeometryData.cpp
  DataManagement/mitkGroupTagProperty.cpp
  DataManagement/mitkImage.cpp
  DataManagement/mitkImageDataItem.cpp
  DataManagement/mitkLandmarkBasedCurvedGeometry.cpp
  DataManagement/mitkLandmarkProjectorBasedCurvedGeometry.cpp
  DataManagement/mitkLandmarkProjector.cpp
  DataManagement/mitkLevelWindow.cpp
  DataManagement/mitkLevelWindowManager.cpp
  DataManagement/mitkLevelWindowPreset.cpp
  DataManagement/mitkLevelWindowProperty.cpp
  DataManagement/mitkLookupTable.cpp
  DataManagement/mitkMemoryUtilities.cpp
  DataManagement/mitkModeOperation.cpp
  DataManagement/mitkNodePredicateAND.cpp
  DataManagement/mitkNodePredicateBase.cpp
  DataManagement/mitkNodePredicateCompositeBase.cpp
  DataManagement/mitkNodePredicateData.cpp
  DataManagement/mitkNodePredicateDataType.cpp
  DataManagement/mitkNodePredicateDimension.cpp
  DataManagement/mitkNodePredicateFirstLevel.cpp
  DataManagement/mitkNodePredicateNOT.cpp
  DataManagement/mitkNodePredicateOR.cpp
  DataManagement/mitkNodePredicateProperty.cpp
  DataManagement/mitkNodePredicateSource.cpp
  DataManagement/mitkPlaneDecorationProperty.cpp
  DataManagement/mitkPlaneOperation.cpp
  DataManagement/mitkPointOperation.cpp
  DataManagement/mitkPointSet.cpp
  DataManagement/mitkProperties.cpp
  DataManagement/mitkPropertyList.cpp
  DataManagement/mitkRotationOperation.cpp
  DataManagement/mitkSlicedData.cpp
  DataManagement/mitkSlicedGeometry3D.cpp
  DataManagement/mitkSmartPointerProperty.cpp
  DataManagement/mitkStandaloneDataStorage.cpp
  DataManagement/mitkStateTransitionOperation.cpp
  DataManagement/mitkStringProperty.cpp
  DataManagement/mitkSurface.cpp
  DataManagement/mitkSurfaceOperation.cpp
  DataManagement/mitkThinPlateSplineCurvedGeometry.cpp
  DataManagement/mitkTimeSlicedGeometry.cpp
  DataManagement/mitkTransferFunction.cpp
  DataManagement/mitkVector.cpp
  DataManagement/mitkVtkInterpolationProperty.cpp
  DataManagement/mitkVtkRepresentationProperty.cpp
  DataManagement/mitkVtkResliceInterpolationProperty.cpp
  DataManagement/mitkVtkScalarModeProperty.cpp
  DataManagement/mitkVtkVolumeRenderingProperty.cpp
  DataManagement/mitkWeakPointerProperty.cpp
  DataManagement/mitkXMLIO.cpp
  Interactions/mitkAction.cpp
  Interactions/mitkAffineInteractor.cpp
  Interactions/mitkCoordinateSupplier.cpp
  Interactions/mitkDisplayCoordinateOperation.cpp
  Interactions/mitkDisplayInteractor.cpp
  Interactions/mitkDisplayPositionEvent.cpp
  Interactions/mitkDisplayVectorInteractor.cpp
  Interactions/mitkEvent.cpp
  Interactions/mitkEventDescription.cpp
  Interactions/mitkEventMapper.cpp
  Interactions/mitkGlobalInteraction.cpp
  Interactions/mitkInteractor.cpp
  Interactions/mitkPointSetInteractor.cpp
  Interactions/mitkPositionEvent.cpp
  Interactions/mitkPositionTracker.cpp
  Interactions/mitkState.cpp
  Interactions/mitkStateEvent.cpp
  Interactions/mitkStateMachine.cpp
  Interactions/mitkStateMachineFactory.cpp
  Interactions/mitkTransition.cpp
  IO/mitkBaseDataIOFactory.cpp
  IO/mitkBaseXMLWriter.cpp
  IO/mitkFileReader.cpp
  IO/mitkFileSeriesReader.cpp
  IO/mitkFileWriter.cpp
  IO/mitkIpPicGet.c 
  IO/mitkImageWriter.cpp
  IO/mitkImageWriterFactory.cpp
  IO/mitkItkImageFileIOFactory.cpp
  IO/mitkItkImageFileReader.cpp
  IO/mitkItkImageWrite.cpp
  IO/mitkLookupTableProperty.cpp
  IO/mitkMaterialProperty.cpp
  IO/mitkOperation.cpp
  IO/mitkPicFileIOFactory.cpp
  IO/mitkPicFileReader.cpp
  IO/mitkPicFileWriter.cpp
  IO/mitkPicHelper.cpp
  IO/mitkPicVolumeTimeSeriesIOFactory.cpp
  IO/mitkPicVolumeTimeSeriesReader.cpp
  IO/mitkPixelType.cpp
  IO/mitkPlaneGeometry.cpp
  IO/mitkPointSetIOFactory.cpp
  IO/mitkPointSetReader.cpp
  IO/mitkPointSetWriter.cpp
  IO/mitkPointSetWriterFactory.cpp
  IO/mitkRawImageFileReader.cpp
  IO/mitkStandardFileLocations.cpp
  IO/mitkSTLFileIOFactory.cpp
  IO/mitkSTLFileReader.cpp
  IO/mitkSurfaceVtkWriter.cpp
  IO/mitkSurfaceVtkWriterFactory.cpp
  IO/mitkVtiFileIOFactory.cpp
  IO/mitkVtiFileReader.cpp
  IO/mitkVtkImageIOFactory.cpp
  IO/mitkVtkImageReader.cpp
  IO/mitkVtkSurfaceIOFactory.cpp
  IO/mitkVtkSurfaceReader.cpp
  IO/mitkXMLReader.cpp
  IO/mitkXMLWriter.cpp
  IO/vtkPointSetXMLParser.cpp
  Rendering/mitkBaseRenderer.cpp
  Rendering/mitkBaseVtkMapper2D.cpp
  Rendering/mitkBaseVtkMapper3D.cpp
  Rendering/mitkColoredRectangleRendering.cpp
  Rendering/mitkGeometry2DDataMapper2D.cpp
  Rendering/mitkGeometry2DDataVtkMapper3D.cpp
  Rendering/mitkGLMapper2D.cpp
  Rendering/mitkGradientBackground.cpp
  Rendering/mitkImageMapper2D.cpp
  Rendering/mitkLogoRendering.cpp
  Rendering/mitkMapper2D.cpp
  Rendering/mitkMapper3D.cpp
  Rendering/mitkMapper.cpp
  Rendering/mitkPointSetMapper2D.cpp
  Rendering/mitkPointSetVtkMapper3D.cpp
  Rendering/mitkPolyDataGLMapper2D.cpp
  Rendering/mitkSurfaceMapper2D.cpp
  Rendering/mitkSurfaceVtkMapper3D.cpp
  Rendering/mitkVolumeDataVtkMapper3D.cpp
  Rendering/mitkVtkPropRenderer.cpp
  Rendering/mitkVtkWidgetRendering.cpp
  Rendering/vtkMitkRectangleProp.cpp
  Rendering/vtkMitkRenderProp.cpp
)
SET(CPP_FILES
  Algorithms/mitkBaseDataSource.cpp
  Algorithms/mitkBaseProcess.cpp
  Algorithms/mitkCoreObjectFactory.cpp
  Algorithms/mitkDataTreeNodeFactory.cpp
  Algorithms/mitkDataTreeNodeSource.cpp
  Algorithms/mitkGeometry2DDataToSurfaceFilter.cpp
  Algorithms/mitkHistogramGenerator.cpp
  Algorithms/mitkImageCastPart1.cpp
  Algorithms/mitkImageCastPart2.cpp
  Algorithms/mitkImageCastPart3.cpp
  Algorithms/mitkImageCastPart4.cpp
  Algorithms/mitkImageChannelSelector.cpp
  Algorithms/mitkImageSliceSelector.cpp
  Algorithms/mitkImageSource.cpp
  Algorithms/mitkImageTimeSelector.cpp
  Algorithms/mitkImageToImageFilter.cpp
  Algorithms/mitkPointSetSource.cpp
  Algorithms/mitkSubImageSelector.cpp
  Algorithms/mitkSurfaceSource.cpp
  Algorithms/mitkUIDGenerator.cpp
  Algorithms/mitkVolumeCalculator.cpp
  Controllers/mitkBaseController.cpp
  Controllers/mitkCameraController.cpp
  Controllers/mitkCameraRotationController.cpp
  Controllers/mitkFocusManager.cpp
  Controllers/mitkLimitedLinearUndo.cpp
  Controllers/mitkOperationEvent.cpp
  Controllers/mitkRenderingManager.cpp
  Controllers/mitkSliceNavigationController.cpp
  Controllers/mitkSlicesCoordinator.cpp
  Controllers/mitkSlicesRotator.cpp
  Controllers/mitkSlicesSwiveller.cpp
  Controllers/mitkStepper.cpp
  Controllers/mitkTestManager.cpp
  Controllers/mitkUndoController.cpp
  Controllers/mitkVerboseLimitedLinearUndo.cpp
  Controllers/mitkVtkInteractorCameraController.cpp
  Controllers/mitkVtkLayerController.cpp
  DataManagement/mitkAbstractTransformGeometry.cpp
  DataManagement/mitkAnnotationProperty.cpp
  DataManagement/mitkApplicationCursor.cpp
  DataManagement/mitkBaseData.cpp
  DataManagement/mitkBaseProperty.cpp
  DataManagement/mitkClippingProperty.cpp
  DataManagement/mitkColorProperty.cpp
  DataManagement/mitkDataStorage.cpp
  DataManagement/mitkDataTree.cpp
  DataManagement/mitkDataTreeNode.cpp
  DataManagement/mitkDataTreeStorage.cpp
  DataManagement/mitkDisplayGeometry.cpp
  DataManagement/mitkEnumerationProperty.cpp
  DataManagement/mitkGeometry2D.cpp
  DataManagement/mitkGeometry2DData.cpp
  DataManagement/mitkGeometry3D.cpp
  DataManagement/mitkGeometryData.cpp
  DataManagement/mitkGroupTagProperty.cpp
  DataManagement/mitkImage.cpp
  DataManagement/mitkImageDataItem.cpp
  DataManagement/mitkLandmarkBasedCurvedGeometry.cpp
  DataManagement/mitkLandmarkProjectorBasedCurvedGeometry.cpp
  DataManagement/mitkLandmarkProjector.cpp
  DataManagement/mitkLevelWindow.cpp
  DataManagement/mitkLevelWindowManager.cpp
  DataManagement/mitkLevelWindowPreset.cpp
  DataManagement/mitkLevelWindowProperty.cpp
  DataManagement/mitkLookupTable.cpp
  DataManagement/mitkMemoryUtilities.cpp
  DataManagement/mitkModeOperation.cpp
  DataManagement/mitkNodePredicateAND.cpp
  DataManagement/mitkNodePredicateBase.cpp
  DataManagement/mitkNodePredicateCompositeBase.cpp
  DataManagement/mitkNodePredicateData.cpp
  DataManagement/mitkNodePredicateDataType.cpp
  DataManagement/mitkNodePredicateDimension.cpp
  DataManagement/mitkNodePredicateFirstLevel.cpp
  DataManagement/mitkNodePredicateNOT.cpp
  DataManagement/mitkNodePredicateOR.cpp
  DataManagement/mitkNodePredicateProperty.cpp
  DataManagement/mitkNodePredicateSource.cpp
  DataManagement/mitkPlaneDecorationProperty.cpp
  DataManagement/mitkPlaneOperation.cpp
  DataManagement/mitkPointOperation.cpp
  DataManagement/mitkPointSet.cpp
  DataManagement/mitkProperties.cpp
  DataManagement/mitkPropertyList.cpp
  DataManagement/mitkRotationOperation.cpp
  DataManagement/mitkSlicedData.cpp
  DataManagement/mitkSlicedGeometry3D.cpp
  DataManagement/mitkSmartPointerProperty.cpp
  DataManagement/mitkStandaloneDataStorage.cpp
  DataManagement/mitkStateTransitionOperation.cpp
  DataManagement/mitkStringProperty.cpp
  DataManagement/mitkSurface.cpp
  DataManagement/mitkSurfaceOperation.cpp
  DataManagement/mitkThinPlateSplineCurvedGeometry.cpp
  DataManagement/mitkTimeSlicedGeometry.cpp
  DataManagement/mitkTransferFunction.cpp
  DataManagement/mitkVector.cpp
  DataManagement/mitkVtkInterpolationProperty.cpp
  DataManagement/mitkVtkRepresentationProperty.cpp
  DataManagement/mitkVtkResliceInterpolationProperty.cpp
  DataManagement/mitkVtkScalarModeProperty.cpp
  DataManagement/mitkVtkVolumeRenderingProperty.cpp
  DataManagement/mitkWeakPointerProperty.cpp
  DataManagement/mitkXMLIO.cpp
  Interactions/mitkAction.cpp
  Interactions/mitkAffineInteractor.cpp
  Interactions/mitkCoordinateSupplier.cpp
  Interactions/mitkDisplayCoordinateOperation.cpp
  Interactions/mitkDisplayInteractor.cpp
  Interactions/mitkDisplayPositionEvent.cpp
  Interactions/mitkDisplayVectorInteractor.cpp
  Interactions/mitkEvent.cpp
  Interactions/mitkEventDescription.cpp
  Interactions/mitkEventMapper.cpp
  Interactions/mitkGlobalInteraction.cpp
  Interactions/mitkInteractor.cpp
  Interactions/mitkPointSetInteractor.cpp
  Interactions/mitkPositionEvent.cpp
  Interactions/mitkPositionTracker.cpp
  Interactions/mitkState.cpp
  Interactions/mitkStateEvent.cpp
  Interactions/mitkStateMachine.cpp
  Interactions/mitkStateMachineFactory.cpp
  Interactions/mitkTransition.cpp
  IO/mitkBaseDataIOFactory.cpp
  IO/mitkBaseXMLWriter.cpp
  IO/mitkFileReader.cpp
  IO/mitkFileSeriesReader.cpp
  IO/mitkFileWriter.cpp
  IO/mitkIpPicGet.c 
  IO/mitkImageWriter.cpp
  IO/mitkImageWriterFactory.cpp
  IO/mitkItkImageFileIOFactory.cpp
  IO/mitkItkImageFileReader.cpp
  IO/mitkItkImageWrite.cpp
  IO/mitkLookupTableProperty.cpp
  IO/mitkMaterialProperty.cpp
  IO/mitkOperation.cpp
  IO/mitkPicFileIOFactory.cpp
  IO/mitkPicFileReader.cpp
  IO/mitkPicFileWriter.cpp
  IO/mitkPicHelper.cpp
  IO/mitkPicVolumeTimeSeriesIOFactory.cpp
  IO/mitkPicVolumeTimeSeriesReader.cpp
  IO/mitkPixelType.cpp
  IO/mitkPlaneGeometry.cpp
  IO/mitkPointSetIOFactory.cpp
  IO/mitkPointSetReader.cpp
  IO/mitkPointSetWriter.cpp
  IO/mitkPointSetWriterFactory.cpp
  IO/mitkRawImageFileReader.cpp
  IO/mitkStandardFileLocations.cpp
  IO/mitkSTLFileIOFactory.cpp
  IO/mitkSTLFileReader.cpp
  IO/mitkSurfaceVtkWriter.cpp
  IO/mitkSurfaceVtkWriterFactory.cpp
  IO/mitkVtiFileIOFactory.cpp
  IO/mitkVtiFileReader.cpp
  IO/mitkVtkImageIOFactory.cpp
  IO/mitkVtkImageReader.cpp
  IO/mitkVtkSurfaceIOFactory.cpp
  IO/mitkVtkSurfaceReader.cpp
  IO/mitkXMLReader.cpp
  IO/mitkXMLWriter.cpp
  IO/vtkPointSetXMLParser.cpp
  Rendering/mitkBaseRenderer.cpp
  Rendering/mitkBaseVtkMapper2D.cpp
  Rendering/mitkBaseVtkMapper3D.cpp
  Rendering/mitkColoredRectangleRendering.cpp
  Rendering/mitkGeometry2DDataMapper2D.cpp
  Rendering/mitkGeometry2DDataVtkMapper3D.cpp
  Rendering/mitkGLMapper2D.cpp
  Rendering/mitkGradientBackground.cpp
  Rendering/mitkImageMapper2D.cpp
  Rendering/mitkLogoRendering.cpp
  Rendering/mitkMapper2D.cpp
  Rendering/mitkMapper3D.cpp
  Rendering/mitkMapper.cpp
  Rendering/mitkPointSetMapper2D.cpp
  Rendering/mitkPointSetVtkMapper3D.cpp
  Rendering/mitkPolyDataGLMapper2D.cpp
  Rendering/mitkSurfaceMapper2D.cpp
  Rendering/mitkSurfaceVtkMapper3D.cpp
  Rendering/mitkVolumeDataVtkMapper3D.cpp
  Rendering/mitkVtkPropRenderer.cpp
  Rendering/mitkVtkWidgetRendering.cpp
  Rendering/vtkMitkRectangleProp.cpp
  Rendering/vtkMitkRenderProp.cpp
)
