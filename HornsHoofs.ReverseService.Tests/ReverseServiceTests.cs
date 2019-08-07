using Xunit;

namespace HornsHoofs
{
    public class ReverseServiceTests
    {
        [Fact]
        public void ReverseService_ReversesString()
        {
            // Arrange

            var actual = default(string);

            var input = "foo bar";
            var expected = "rab oof";

            // Act

            using (var service = new ReverseService())
            {
                actual = service.Reverse(input);
            }

            // Asset

            Assert.Equal(expected, actual);
        }
    }
}
