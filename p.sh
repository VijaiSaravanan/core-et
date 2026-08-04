source env.sh
rm -rf et-dvrun*
#et-dvrun -t erbium_playground --build_name_enable cpu_ss_vl --make --uarg verbose
et-dvrun --build_name_enable cpu_ss_vl --make --uarg verbose



#/home/vsysuser/verif/vyoma/workspace/projects/july7/core-et/dv/tools/etdv/bin/et-dvrun-cleanup ${ETDV_RUNROOT}/minion_shire/cpu_ss_vl/build buildme,.all_steps