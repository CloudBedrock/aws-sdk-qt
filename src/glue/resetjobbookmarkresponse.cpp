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

#include "resetjobbookmarkresponse.h"
#include "resetjobbookmarkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ResetJobBookmarkResponse
 *
 * \brief The ResetJobBookmarkResponse class encapsulates Glue ResetJobBookmark responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::resetJobBookmark
 */

/*!
 * @brief  Constructs a new ResetJobBookmarkResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetJobBookmarkResponse::ResetJobBookmarkResponse(
        const ResetJobBookmarkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ResetJobBookmarkResponsePrivate(this), parent)
{
    setRequest(new ResetJobBookmarkRequest(request));
    setReply(reply);
}

const ResetJobBookmarkRequest * ResetJobBookmarkResponse::request() const
{
    Q_D(const ResetJobBookmarkResponse);
    return static_cast<const ResetJobBookmarkRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue ResetJobBookmark response.
 *
 * @param  response  Response to parse.
 */
void ResetJobBookmarkResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResetJobBookmarkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ResetJobBookmarkResponsePrivate
 *
 * \brief Private implementation for ResetJobBookmarkResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ResetJobBookmarkResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetJobBookmarkResponse instance.
 */
ResetJobBookmarkResponsePrivate::ResetJobBookmarkResponsePrivate(
    ResetJobBookmarkResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue ResetJobBookmarkResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetJobBookmarkResponsePrivate::parseResetJobBookmarkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetJobBookmarkResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
