load("//sys/src/FLAGS", "LIB_COMPILER_FLAGS")
load("//sys/src/BUILD", "LIBS", "KLIBS")

CORE_SRCS = [
	"entry.S",
	"vsvm.c",
	"l64v.S",
	"l64fpu.S",
	"cpuidamd64.S",
	"l64acidt.S",
	"l64idt.S",
	"l64vsyscall.S",
	"acore.c",
	"apic.c",
	"arch.c",
	"archamd64.c",
	"asm.c",
	"backtrace.c",
	"//sys/src/9/port/devbridge.c",
	"coreboot.c",
	"ctype.c",
	"devarch.c",
	"//sys/src/9/port/devdraw.c",
	"//sys/src/9/port/devether.c",
	"//sys/src/9/port/devmouse.c",
	"//sys/src/9/port/devpci.c",
	"devpmc.c",
	"ether.c",
	"fpu.c",
	"i8254.c",
	"i8259.c",
	"ioapic.c",
	"//sys/src/9/port/log.c",
	"main.c",
	"map.c",
	"memory.c",
	"mmu.c",
	"mpacpi.c",
	"msi.c",
	"multiboot.c",
	"physalloc.c",
	"pmcio.c",
	"qmalloc.c",
	"sipi.c",
	"syscall.c",
	"systab.c",
	"tcore.c",
	"trap.c",
	"//sys/src/9/port/usbehci.c",
]

PORT_SRCS = [
	"//sys/src/9/port/alarm.c",
	"//sys/src/9/port/allocb.c",
	"//sys/src/9/port/cache.c",
	"//sys/src/9/port/chan.c",
	"//sys/src/9/port/cpu_buffer.c",
	"//sys/src/9/port/dev.c",
	"//sys/src/9/port/devcap.c",
	"//sys/src/9/port/devcons.c",
	"//sys/src/9/port/devcoreboot.c",
	"//sys/src/9/port/devdup.c",
	"//sys/src/9/port/devenv.c",
	"//sys/src/9/port/devfdmux.c",
	"//sys/src/9/port/devkprof.c",
	"//sys/src/9/port/devkbin.c",
	"//sys/src/9/port/devkbmap.c",
	"//sys/src/9/port/devmnt.c",
	"//sys/src/9/port/devmntn.c",
	"//sys/src/9/port/devpipe.c",
	"//sys/src/9/port/devproc.c",
	"//sys/src/9/port/devramfs.c",
	"//sys/src/9/port/devregress.c",
	"//sys/src/9/port/devroot.c",
	"//sys/src/9/port/devsd.c",
	"//sys/src/9/port/devsegment.c",
	"//sys/src/9/port/devsrv.c",
	"//sys/src/9/port/devssl.c",
	"//sys/src/9/port/devtls.c",
	"//sys/src/9/port/devtab.c",
	"//sys/src/9/port/devtrace.c",
	"//sys/src/9/port/devuart.c",
	"//sys/src/9/port/dev9p.c",
	"//sys/src/9/port/devvcon.c",
	"//sys/src/9/port/devwd.c",
	"//sys/src/9/port/devws.c",
	"//sys/src/9/port/edf.c",
	"//sys/src/9/port/elf64.c",
	"//sys/src/9/port/ethermii.c",
	"//sys/src/9/port/fault.c",
	"//sys/src/9/port/fortuna.c",
	"//sys/src/9/port/getput.c",
	"//sys/src/9/port/hexdump.c",
	"//sys/src/9/port/image.c",
	"//sys/src/9/port/kdebug.c",
	"//sys/src/9/port/ipchecksum.c",
	"//sys/src/9/port/latin1.c",
	"//sys/src/9/port/mul64fract.c",
	"//sys/src/9/port/netif.c",
	"//sys/src/9/port/page.c",
	"//sys/src/9/port/pager.c",
	"//sys/src/9/port/parse.c",
	"//sys/src/9/port/pgrp.c",
	"//sys/src/9/port/portclock.c",
	"//sys/src/9/port/print.c",
	"//sys/src/9/port/proc.c",
	"//sys/src/9/port/ps.c",
	"//sys/src/9/port/qio.c",
	"//sys/src/9/port/qlock.c",
	"//sys/src/9/port/random.c",
	"//sys/src/9/port/rebootcmd.c",
	"//sys/src/9/port/rmap.c",
	"//sys/src/9/port/sdscsi.c",
	"//sys/src/9/port/segment.c",
	"//sys/src/9/port/sysauth.c",
	"//sys/src/9/port/syscallfmt.c",
	"//sys/src/9/port/sysfile.c",
	"//sys/src/9/port/sysproc.c",
	"//sys/src/9/port/sysseg.c",
	"//sys/src/9/port/syszio.c",
	"//sys/src/9/port/taslock.c",
	"//sys/src/9/port/tod.c",
	"//sys/src/9/port/virtio_lib.c",
	"//sys/src/9/port/watermarks.c",
]

IP_SRCS = [
	"//sys/src/9/ip/arp.c",
	"//sys/src/9/ip/chandial.c",
	"//sys/src/9/ip/devip.c",
	"//sys/src/9/ip/ethermedium.c",
	"//sys/src/9/ip/gre.c",
	"//sys/src/9/ip/icmp6.c",
	"//sys/src/9/ip/icmp.c",
	"//sys/src/9/ip/inferno.c",
	"//sys/src/9/ip/ipaux.c",
	"//sys/src/9/ip/ip.c",
	"//sys/src/9/ip/ipifc.c",
	"//sys/src/9/ip/ipmux.c",
	"//sys/src/9/ip/iproute.c",
	"//sys/src/9/ip/ipv6.c",
	"//sys/src/9/ip/loopbackmedium.c",
	"//sys/src/9/ip/netdevmedium.c",
	"//sys/src/9/ip/netlog.c",
	"//sys/src/9/ip/nullmedium.c",
	"//sys/src/9/ip/pktmedium.c",
	"//sys/src/9/ip/ptclbsum.c",
	"//sys/src/9/ip/rudp.c",
	"//sys/src/9/ip/tcp.c",
	"//sys/src/9/ip/udp.c",
]

AMD64_SRCS = [
	"amd64cpu.c",
	"cga.c",
	"devacpi.c",
	"devusb.c",
	"devvga.c",
	"ether8139.c",
	"ether82563.c",
	"mouse.c",
	"screen.c",
	"sdiahci.c",
	"usbehcipc.c",
	"usbohci.c",
	"usbuhci.c",
	"vga.c",
	"vgax.c",
]

# don't want to start with a number
I386_SRCS = [
	"//sys/src/9/386/devrtc.c",
	"//sys/src/9/386/ether8169.c",
	"//sys/src/9/386/ether82557.c",
	"//sys/src/9/386/etherigbe.c",
	"//sys/src/9/386/etherm10g.c",
	"//sys/src/9/386/i8042.c",
	"//sys/src/9/386/pci.c",
	"//sys/src/9/386/uarti8250.c",
	"//sys/src/9/386/uartpci.c",
	"//sys/src/9/386/vgavesa.c",
]

AMD64SRCS = AMD64_SRCS + CORE_SRCS + I386_SRCS + IP_SRCS + PORT_SRCS

strip(
	name="boot",
	deps=[
		"//sys/src/9/boot:bootamd64cpu",
	],
)

mk_sys(
	name="error",
	mode="error.h",
	arch=env("ARCH"),
	sysconf="//sys/src/sysconf.json",
)

mk_sys(
	name="sys",
	mode="sys.h",
	arch=env("ARCH"),
	sysconf="//sys/src/sysconf.json",
)

mk_sys(
	name="systab",
	mode="systab.c",
	arch=env("ARCH"),
	sysconf="//sys/src/sysconf.json",
)

mk_sys(
	name="errstr",
	mode="errstr.h",
	sysconf="//sys/src/sysconf.json",
)
group(
	name="kernelbins",
	prefix="sys/src/9/amd64",
	deps=[
		":harvey.32bit",
		":init",
	],
)

objcopy(
	name="harvey.32bit",
	deps=[
		"//sys/src/9/amd64:harvey"
	],
	infile="elf64-x86-64",
	outfile="elf32-i386",
)

HRVYDEPS = [
	":amd64cpu",
	":error",
	":errstr",
	":systab",
	":sys",
	":inith",
]
STD_COMPILER_OPTIONS = [
	"-std=c11",
	"-mcmodel=kernel",
	"-O0",
	"-static",
	"-mno-red-zone",
	"-ffreestanding",
	"-fno-builtin",
	"-DKERNDATE=1433623937",
	"-g",
	"-Wall",
	"-Werror",
	"-D__HARVEY__",
	"-U_LINUX",
	"-U__linux__",
	"-fasm",
]

load("//amd64/${CC}.BUILD", "COMPILER_FLAGS")

cc_binary(
	name="harvey",
	copts=STD_COMPILER_OPTIONS + COMPILER_FLAGS,
	srcs=AMD64SRCS,
	includes=[
		"//sys/include",
		"//amd64/include",
		"//sys/src/9/amd64",
		"//sys/src/9/port",
	],
	deps=HRVYDEPS + KLIBS,
	alwayslink=true,  # this is not necessary as klibs are hardcoded to be alwayslinked
	ld="kernel.ld",
	linkopts=[
		"-z",
		"max-page-size=0x1000",
		"-nostdlib",
		"-g",
		"-T",
	]
)

KERNEL_DEPS = [
	"//sys/src/cmd:bind",
	":boot",
	"//sys/src/cmd:cat",
	"//sys/src/cmd:date",
	"//sys/src/cmd:echo",
	"//sys/src/cmd/auth/factotum:factotum",
	"//sys/src/cmd/disk/prep:fdisk",
	"//sys/src/cmd/fossil:fossil",
	"//sys/src/cmd/ip/ipconfig:ipconfig",
	"//sys/src/cmd:ls",
	"//sys/src/cmd:mount",
	# nvram FILE ADDED
	"//sys/src/cmd/disk/prep:prep",
	"//sys/src/cmd/rc:rc",
	"//sys/src/cmd:ps",
	"//sys/src/cmd:ed",
	# rcmain FILE ADDED
	"//sys/src/cmd/aux/realemu:realemu",
	"//sys/src/cmd/aux/vga:vga",
	"//sys/src/cmd:srv",
	# startdisk FILE ADDED
	"//sys/src/cmd/usb/usbd:usbd",
	"//sys/src/cmd/venti/srv:venti",
	"//sys/src/cmd:ratrace",
]

config(
	name="amd64cpu",
	deps=KERNEL_DEPS,
	code=[
		"int cpuserver = 1;",
		"uint32_t kerndate = 1;",
	],
	ramfiles=[
		"//util/nvram",
		"//rc/lib/rcmain",
		"//sys/src/9/amd64/startdisk",
	],
	bins={
		"factotum": "auth/factotum",
		"ipconfig": "ip/ipconfig",
		"realemu": "aux/realemu",
		"vga": "aux/vga",
	},
	dev=[
		"acpi",
		"arch",
		"bridge",
		"cap",
		"cons",
		"coreboot",
		"draw",
		"dup",
		"env",
		"fdmux",
		"ether",
		"ip",
		"kbin",
		"kbmap",
		"kprof",
		"mnt",
		"mntn",
		"mouse",
		"pci",
		"pipe",
		"proc",
		"ram",
		"regress",
		"root",
		"rtc",
		"sd",
		"segment",
		"srv",
		"ssl",
		"tls",
		"uart",
		"ws",
		"usb",
		"v9p",
		"vcon",
		"vga",
	],
	ip=[
		"tcp",
		"udp",
		"ipifc",
		"icmp",
		"icmp6",
		"gre",
	],
	link=[
		"ether8169",
		"ether82557",
		"ether82563",
		"etherigbe",
		"ether8139",
		"ethermedium",
		"loopbackmedium",
		"netdevmedium",
		"usbuhci",
		"usbohci",
		"usbehci",
	],
	sd=[
		"sdiahci",
	],
	uart=[
		"i8250",
		"pci",
	],
	vga=[
		"vgavesa",
	],
)

elf_to_c(
	name="inith",
	deps=[
		":init",
	],
	elf="init",
)

cc_binary(
	name="init",
	copts=[
		"-c",
		"-g",
		"-Wall",
		"-Werror",
		"-O0",
		"-static",
		"-mno-red-zone",
		"-ffreestanding",
		"-fno-builtin",
		"-mcmodel=small",
	],
	install="init",
	deps=[
		"//sys/src/libc:libc",
	],
	includes=[
		"//sys/include",
		"//amd64/include",
	],
	linkopts=[
		"-e_main",
		"-static",
		"-Ttext=0x200020",
	],
	srcs=[
		"init9.c",
		"//sys/src/9/port/initcode.c",
	]
)
