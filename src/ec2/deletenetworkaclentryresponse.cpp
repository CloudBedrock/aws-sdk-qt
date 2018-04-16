/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletenetworkaclentryresponse.h"
#include "deletenetworkaclentryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteNetworkAclEntryResponse
 *
 * \brief The DeleteNetworkAclEntryResponse class encapsulates EC2 DeleteNetworkAclEntry responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deleteNetworkAclEntry
 */

/*!
 * @brief  Constructs a new DeleteNetworkAclEntryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNetworkAclEntryResponse::DeleteNetworkAclEntryResponse(
        const DeleteNetworkAclEntryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteNetworkAclEntryResponsePrivate(this), parent)
{
    setRequest(new DeleteNetworkAclEntryRequest(request));
    setReply(reply);
}

const DeleteNetworkAclEntryRequest * DeleteNetworkAclEntryResponse::request() const
{
    Q_D(const DeleteNetworkAclEntryResponse);
    return static_cast<const DeleteNetworkAclEntryRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 DeleteNetworkAclEntry response.
 *
 * @param  response  Response to parse.
 */
void DeleteNetworkAclEntryResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteNetworkAclEntryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteNetworkAclEntryResponsePrivate
 *
 * \brief Private implementation for DeleteNetworkAclEntryResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteNetworkAclEntryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteNetworkAclEntryResponse instance.
 */
DeleteNetworkAclEntryResponsePrivate::DeleteNetworkAclEntryResponsePrivate(
    DeleteNetworkAclEntryResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 DeleteNetworkAclEntryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteNetworkAclEntryResponsePrivate::parseDeleteNetworkAclEntryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNetworkAclEntryResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
