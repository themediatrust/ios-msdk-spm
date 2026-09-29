// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "MediaFilterSDK",
    platforms: [
        .iOS(.v12),
    ],
    products: [
        .library(name: "MediaFilterSDK", targets: ["MediaFilterSDK"]),
    ],
    targets: [
        .binaryTarget(name: "MediaFilterSDK", path: "MediaFilterSDK.xcframework"),
    ]
)
