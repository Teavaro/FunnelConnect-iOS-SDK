// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "FunnelConnectSDK",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "FunnelConnectSDK",
            targets: ["FunnelConnectSDK"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "FunnelConnectSDK",
            url: "https://github.com/Teavaro/FunnelConnectSDK_iOS/FunnelConnectSDK.zip",
            checksum: "5e0052d153b078b250e03add159fc1d0e5ca5ed076cea6adf1f681afc27e67ac"
        ),
    ]
)
