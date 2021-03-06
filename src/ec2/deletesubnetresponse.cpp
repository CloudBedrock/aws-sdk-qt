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

#include "deletesubnetresponse.h"
#include "deletesubnetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteSubnetResponse
 * \brief The DeleteSubnetResponse class provides an interace for EC2 DeleteSubnet responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteSubnet
 */

/*!
 * Constructs a DeleteSubnetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSubnetResponse::DeleteSubnetResponse(
        const DeleteSubnetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DeleteSubnetResponsePrivate(this), parent)
{
    setRequest(new DeleteSubnetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSubnetRequest * DeleteSubnetResponse::request() const
{
    Q_D(const DeleteSubnetResponse);
    return static_cast<const DeleteSubnetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteSubnet \a response.
 */
void DeleteSubnetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSubnetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteSubnetResponsePrivate
 * \brief The DeleteSubnetResponsePrivate class provides private implementation for DeleteSubnetResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteSubnetResponsePrivate object with public implementation \a q.
 */
DeleteSubnetResponsePrivate::DeleteSubnetResponsePrivate(
    DeleteSubnetResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteSubnet response element from \a xml.
 */
void DeleteSubnetResponsePrivate::parseDeleteSubnetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubnetResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
