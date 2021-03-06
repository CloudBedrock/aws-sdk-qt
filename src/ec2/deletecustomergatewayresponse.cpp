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

#include "deletecustomergatewayresponse.h"
#include "deletecustomergatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteCustomerGatewayResponse
 * \brief The DeleteCustomerGatewayResponse class provides an interace for EC2 DeleteCustomerGateway responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteCustomerGateway
 */

/*!
 * Constructs a DeleteCustomerGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCustomerGatewayResponse::DeleteCustomerGatewayResponse(
        const DeleteCustomerGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteCustomerGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomerGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCustomerGatewayRequest * DeleteCustomerGatewayResponse::request() const
{
    Q_D(const DeleteCustomerGatewayResponse);
    return static_cast<const DeleteCustomerGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteCustomerGateway \a response.
 */
void DeleteCustomerGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCustomerGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteCustomerGatewayResponsePrivate
 * \brief The DeleteCustomerGatewayResponsePrivate class provides private implementation for DeleteCustomerGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteCustomerGatewayResponsePrivate object with public implementation \a q.
 */
DeleteCustomerGatewayResponsePrivate::DeleteCustomerGatewayResponsePrivate(
    DeleteCustomerGatewayResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteCustomerGateway response element from \a xml.
 */
void DeleteCustomerGatewayResponsePrivate::parseDeleteCustomerGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomerGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
