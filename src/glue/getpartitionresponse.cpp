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

#include "getpartitionresponse.h"
#include "getpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetPartitionResponse
 *
 * \brief The GetPartitionResponse class provides an interace for Glue GetPartition responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getPartition
 */

/*!
 * @brief  Constructs a new GetPartitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPartitionResponse::GetPartitionResponse(
        const GetPartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetPartitionResponsePrivate(this), parent)
{
    setRequest(new GetPartitionRequest(request));
    setReply(reply);
}

const GetPartitionRequest * GetPartitionResponse::request() const
{
    Q_D(const GetPartitionResponse);
    return static_cast<const GetPartitionRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue GetPartition response.
 *
 * @param  response  Response to parse.
 */
void GetPartitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetPartitionResponsePrivate
 *
 * \brief Private implementation for GetPartitionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetPartitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPartitionResponse instance.
 */
GetPartitionResponsePrivate::GetPartitionResponsePrivate(
    GetPartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue GetPartitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPartitionResponsePrivate::parseGetPartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPartitionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
