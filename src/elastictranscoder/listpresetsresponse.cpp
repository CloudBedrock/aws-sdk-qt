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

#include "listpresetsresponse.h"
#include "listpresetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ListPresetsResponse
 *
 * \brief The ListPresetsResponse class provides an interace for ElasticTranscoder ListPresets responses.
 *
 * \ingroup ElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::listPresets
 */

/*!
 * @brief  Constructs a new ListPresetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPresetsResponse::ListPresetsResponse(
        const ListPresetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ListPresetsResponsePrivate(this), parent)
{
    setRequest(new ListPresetsRequest(request));
    setReply(reply);
}

const ListPresetsRequest * ListPresetsResponse::request() const
{
    Q_D(const ListPresetsResponse);
    return static_cast<const ListPresetsRequest *>(d->request);
}

/*!
 * @brief  Parse a ElasticTranscoder ListPresets response.
 *
 * @param  response  Response to parse.
 */
void ListPresetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPresetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListPresetsResponsePrivate
 *
 * \brief Private implementation for ListPresetsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListPresetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPresetsResponse instance.
 */
ListPresetsResponsePrivate::ListPresetsResponsePrivate(
    ListPresetsResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ElasticTranscoder ListPresetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPresetsResponsePrivate::parseListPresetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPresetsResponse"));
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
