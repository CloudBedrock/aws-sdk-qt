/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describecustomergatewaysresponse.h"
#include "describecustomergatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeCustomerGatewaysResponse
 * \brief The DescribeCustomerGatewaysResponse class provides an interace for EC2 DescribeCustomerGateways responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeCustomerGateways
 */

/*!
 * Constructs a DescribeCustomerGatewaysResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCustomerGatewaysResponse::DescribeCustomerGatewaysResponse(
        const DescribeCustomerGatewaysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeCustomerGatewaysResponsePrivate(this), parent)
{
    setRequest(new DescribeCustomerGatewaysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCustomerGatewaysRequest * DescribeCustomerGatewaysResponse::request() const
{
    Q_D(const DescribeCustomerGatewaysResponse);
    return static_cast<const DescribeCustomerGatewaysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeCustomerGateways \a response.
 */
void DescribeCustomerGatewaysResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeCustomerGatewaysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeCustomerGatewaysResponsePrivate
 * \brief The DescribeCustomerGatewaysResponsePrivate class provides private implementation for DescribeCustomerGatewaysResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeCustomerGatewaysResponsePrivate object with public implementation \a q.
 */
DescribeCustomerGatewaysResponsePrivate::DescribeCustomerGatewaysResponsePrivate(
    DescribeCustomerGatewaysResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeCustomerGateways response element from \a xml.
 */
void DescribeCustomerGatewaysResponsePrivate::parseDescribeCustomerGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCustomerGatewaysResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
