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

#include "deletevpnconnectionresponse.h"
#include "deletevpnconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteVpnConnectionResponse
 * \brief The DeleteVpnConnectionResponse class provides an interace for EC2 DeleteVpnConnection responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteVpnConnection
 */

/*!
 * Constructs a DeleteVpnConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVpnConnectionResponse::DeleteVpnConnectionResponse(
        const DeleteVpnConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteVpnConnectionResponsePrivate(this), parent)
{
    setRequest(new DeleteVpnConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVpnConnectionRequest * DeleteVpnConnectionResponse::request() const
{
    Q_D(const DeleteVpnConnectionResponse);
    return static_cast<const DeleteVpnConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteVpnConnection \a response.
 */
void DeleteVpnConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteVpnConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteVpnConnectionResponsePrivate
 * \brief The DeleteVpnConnectionResponsePrivate class provides private implementation for DeleteVpnConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteVpnConnectionResponsePrivate object with public implementation \a q.
 */
DeleteVpnConnectionResponsePrivate::DeleteVpnConnectionResponsePrivate(
    DeleteVpnConnectionResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteVpnConnection response element from \a xml.
 */
void DeleteVpnConnectionResponsePrivate::parseDeleteVpnConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpnConnectionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
