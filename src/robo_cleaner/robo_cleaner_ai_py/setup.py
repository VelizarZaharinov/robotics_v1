from setuptools import setup

package_name = 'robo_cleaner_ai_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Velizar Zaharinov',
    maintainer_email='vzaharinov@yahoo.com',
    description='Robo cleaner AI',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'robot_ai = robo_cleaner_ai_py.robo_cleaner_ai:main',
        ],
    },
)
