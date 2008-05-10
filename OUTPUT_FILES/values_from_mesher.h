 
 !
 ! this is the parameter file for static compilation of the solver
 !
 ! mesh statistics:
 ! ---------------
 !
 !
 ! number of chunks =            6
 !
 ! these statistics include the central cube
 !
 ! number of processors =         1944
 !
 ! maximum number of points per region =      3776989
 !
 ! on NEC SX and Earth Simulator, make sure "loopcnt=" parameter
 ! in Makefile is greater than max vector length =     11330967
 !
 ! total elements per slice =        68976
 ! total points per slice =      4563683
 !
 ! total for full 6-chunk mesh:
 ! ---------------------------
 !
 ! exact total number of spectral elements in entire mesh = 
 !    127790784.000000     
 ! approximate total number of points in entire mesh = 
 !    8465886067.00000     
 ! approximate total number of degrees of freedom in entire mesh = 
 !    23478661929.0000     
 !
 ! resolution of the mesh at the surface:
 ! -------------------------------------
 !
 ! spectral elements along a great circle =         3456
 ! GLL points along a great circle =        13824
 ! average distance between points in degrees =   2.6041666E-02
 ! average distance between points in km =    2.895701    
 ! average size of a spectral element in km =    11.58280    
 !
 ! number of time steps =        23700
 !
 ! number of seismic sources =            1
 !
 
 ! approximate static memory needed by the solver:
 ! ----------------------------------------------
 !
 ! size of static arrays per slice =   0.592284619808197       GB
 !
 !   (should be below and typically equal to 80% of 1.5 GB = 1.2 GB on pangu
 !    at Caltech, and below and typically equal to 85% of 2 GB = 1.7 GB
 !    on Marenostrum in Barcelona)
 !   (if significantly more, the job will not run by lack of memory)
 !   (if significantly less, you waste a significant amount of memory)
 !
 ! size of static arrays for all slices =    1151.40130090714       GB
 !                                      =    1.12441533291712       TB
 !
 
 integer, parameter :: NEX_XI_VAL =          864
 integer, parameter :: NEX_ETA_VAL =          864
 
 integer, parameter :: NSPEC_CRUST_MANTLE =        57456
 integer, parameter :: NSPEC_OUTER_CORE =         7308
 integer, parameter :: NSPEC_INNER_CORE =         4212
 
 integer, parameter :: NGLOB_CRUST_MANTLE =      3776989
 integer, parameter :: NGLOB_OUTER_CORE =       493569
 integer, parameter :: NGLOB_INNER_CORE =       293125
 
 integer, parameter :: NSPECMAX_ANISO_IC =            1
 
 integer, parameter :: NSPECMAX_ISO_MANTLE =        57456
 integer, parameter :: NSPECMAX_TISO_MANTLE =            1
 integer, parameter :: NSPECMAX_ANISO_MANTLE =            1
 
 integer, parameter :: NSPEC_CRUST_MANTLE_ATTENUAT =            1
 integer, parameter :: NSPEC_INNER_CORE_ATTENUATION =            1
 
 integer, parameter :: NSPEC_CRUST_MANTLE_STR_OR_ATT =            1
 integer, parameter :: NSPEC_INNER_CORE_STR_OR_ATT =            1
 
 integer, parameter :: NSPEC_CRUST_MANTLE_STR_AND_ATT =            1
 integer, parameter :: NSPEC_INNER_CORE_STR_AND_ATT =            1
 
 integer, parameter :: NSPEC_CRUST_MANTLE_STRAIN_ONLY =            1
 integer, parameter :: NSPEC_INNER_CORE_STRAIN_ONLY =            1
 
 integer, parameter :: NSPEC_CRUST_MANTLE_ADJOINT =            1
 integer, parameter :: NSPEC_OUTER_CORE_ADJOINT =            1
 integer, parameter :: NSPEC_INNER_CORE_ADJOINT =            1
 integer, parameter :: NGLOB_CRUST_MANTLE_ADJOINT =            1
 integer, parameter :: NGLOB_OUTER_CORE_ADJOINT =            1
 integer, parameter :: NGLOB_INNER_CORE_ADJOINT =            1
 integer, parameter :: NSPEC_OUTER_CORE_ROT_ADJOINT =            1
 
 integer, parameter :: NSPEC_CRUST_MANTLE_STACEY =            1
 integer, parameter :: NSPEC_OUTER_CORE_STACEY =            1
 
 integer, parameter :: NGLOB_CRUST_MANTLE_OCEANS =            1
 
 logical, parameter :: TRANSVERSE_ISOTROPY_VAL = .false.
 
 logical, parameter :: ANISOTROPIC_3D_MANTLE_VAL = .false.
 
 logical, parameter :: ANISOTROPIC_INNER_CORE_VAL = .false.
 
 logical, parameter :: ATTENUATION_VAL = .false.
 
 logical, parameter :: ATTENUATION_3D_VAL = .false.
 
 logical, parameter :: ELLIPTICITY_VAL = .false.
 
 logical, parameter :: GRAVITY_VAL = .false.
 
 logical, parameter :: ROTATION_VAL = .false.
 integer, parameter :: NSPEC_OUTER_CORE_ROTATION =            1
 
 integer, parameter :: NGLOB1D_RADIAL_CM =          493
 integer, parameter :: NGLOB1D_RADIAL_OC =          345
 integer, parameter :: NGLOB1D_RADIAL_IC =           37
 integer, parameter :: NGLOB2DMAX_XMIN_XMAX_CM =        49242
 integer, parameter :: NGLOB2DMAX_XMIN_XMAX_OC =        15198
 integer, parameter :: NGLOB2DMAX_XMIN_XMAX_IC =        11931
 integer, parameter :: NGLOB2DMAX_YMIN_YMAX_CM =        49242
 integer, parameter :: NGLOB2DMAX_YMIN_YMAX_OC =        15198
 integer, parameter :: NGLOB2DMAX_YMIN_YMAX_IC =        11931
 integer, parameter :: NPROC_XI_VAL =           18
 integer, parameter :: NPROC_ETA_VAL =           18
 integer, parameter :: NCHUNKS_VAL =            6
 integer, parameter :: NPROCTOT_VAL =         1944
 integer, parameter :: NGLOB2DMAX_XY_VAL_CM =        49242
 integer, parameter :: NGLOB2DMAX_XY_VAL_OC =        15198
 integer, parameter :: NGLOB2DMAX_XY_VAL_IC =        11931
 integer, parameter :: NUMMSGS_FACES_VAL =          216
 integer, parameter :: NCORNERSCHUNKS_VAL =            8
 integer, parameter :: ATT1 =            1
 integer, parameter :: ATT2 =            1
 integer, parameter :: ATT3 =            1
 integer, parameter :: ATT4 =            1
 integer, parameter :: ATT5 =            1
 integer, parameter :: NSPEC2DMAX_XMIN_XMAX_CM =         2484
 integer, parameter :: NSPEC2DMAX_YMIN_YMAX_CM =         2484
 integer, parameter :: NSPEC2D_BOTTOM_CM =          144
 integer, parameter :: NSPEC2D_TOP_CM =         2304
 integer, parameter :: NSPEC2DMAX_XMIN_XMAX_IC =          702
 integer, parameter :: NSPEC2DMAX_YMIN_YMAX_IC =          702
 integer, parameter :: NSPEC2D_BOTTOM_IC =           36
 integer, parameter :: NSPEC2D_TOP_IC =           36
 integer, parameter :: NSPEC2DMAX_XMIN_XMAX_OC =          750
 integer, parameter :: NSPEC2DMAX_YMIN_YMAX_OC =          750
 integer, parameter :: NSPEC2D_BOTTOM_OC =           36
 integer, parameter :: NSPEC2D_TOP_OC =          144
 integer, parameter :: NSPEC2D_MOHO =            1
 integer, parameter :: NSPEC2D_400 =            1
 integer, parameter :: NSPEC2D_670 =            1
 integer, parameter :: NSPEC2D_CMB =            1
 integer, parameter :: NSPEC2D_ICB =            1
