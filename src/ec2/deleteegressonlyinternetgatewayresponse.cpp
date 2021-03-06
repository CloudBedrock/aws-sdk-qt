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

#include "deleteegressonlyinternetgatewayresponse.h"
#include "deleteegressonlyinternetgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteEgressOnlyInternetGatewayResponse
 * \brief The DeleteEgressOnlyInternetGatewayResponse class provides an interace for EC2 DeleteEgressOnlyInternetGateway responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteEgressOnlyInternetGateway
 */

/*!
 * Constructs a DeleteEgressOnlyInternetGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEgressOnlyInternetGatewayResponse::DeleteEgressOnlyInternetGatewayResponse(
        const DeleteEgressOnlyInternetGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteEgressOnlyInternetGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteEgressOnlyInternetGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEgressOnlyInternetGatewayRequest * DeleteEgressOnlyInternetGatewayResponse::request() const
{
    Q_D(const DeleteEgressOnlyInternetGatewayResponse);
    return static_cast<const DeleteEgressOnlyInternetGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteEgressOnlyInternetGateway \a response.
 */
void DeleteEgressOnlyInternetGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteEgressOnlyInternetGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteEgressOnlyInternetGatewayResponsePrivate
 * \brief The DeleteEgressOnlyInternetGatewayResponsePrivate class provides private implementation for DeleteEgressOnlyInternetGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteEgressOnlyInternetGatewayResponsePrivate object with public implementation \a q.
 */
DeleteEgressOnlyInternetGatewayResponsePrivate::DeleteEgressOnlyInternetGatewayResponsePrivate(
    DeleteEgressOnlyInternetGatewayResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteEgressOnlyInternetGateway response element from \a xml.
 */
void DeleteEgressOnlyInternetGatewayResponsePrivate::parseDeleteEgressOnlyInternetGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEgressOnlyInternetGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
