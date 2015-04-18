package ee.nju.opencv;

public class NativeMethod {
	public static native void processFrame(long matAddrInRGBA, long matAddrOutInRGBA);
}
